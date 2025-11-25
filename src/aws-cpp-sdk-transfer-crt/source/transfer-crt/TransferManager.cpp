/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/transfer-crt/Metadata.h>
#include <aws/transfer-crt/TransferManager.h>
#include <algorithm>
#include <cstdlib>

namespace Aws {
namespace TransferCrt {
constexpr char CLASS_TAG[] = "TransferManager";

std::shared_ptr<TransferManager> TransferManager::Create(
    std::shared_ptr<Aws::S3Crt::S3CrtClient> s3Client,
    const HandleUpdatedCallback &up,
    const HandleUpdatedCallback &down,
    const HandleUpdatedCallback &statusChanged) {
    return std::shared_ptr<TransferManager>(new TransferManager{s3Client, up, down, statusChanged});
}

TransferManager::TransferManager(std::shared_ptr<Aws::S3Crt::S3CrtClient> s3Client,
                                 const HandleUpdatedCallback &uploadProgressCallback,
                                 const HandleUpdatedCallback &downloadProgressCallback,
                                 const HandleUpdatedCallback &statusChangedCallback,
                                 bool cancel_on_first_failure)
    : s3Client_{s3Client},
      cancel_on_first_failure_{cancel_on_first_failure},
      uploadProgressCallback{uploadProgressCallback},
      downloadProgressCallback{downloadProgressCallback},
      statusChangedCallback{statusChangedCallback} {}

std::shared_ptr<TransferHandle> TransferManager::UploadFile(
    const Aws::String &srcPath,
    const std::shared_ptr<Aws::IOStream> &inputStream,
    const WriteMetadata &md,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext> &ctx) {
    auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, md, ctx);
    Aws::StringStream ss;

    if (cancel_on_first_failure_ && failure_occurred_) {
        handle->UpdateStatus(TransferStatus::CANCELED);
        OnStatusChanged(handle);
        return handle;
    }

    std::shared_ptr<Aws::IOStream> srcStream{inputStream};
    if (!srcStream) {
        srcStream =
            Aws::MakeShared<Aws::FStream>(CLASS_TAG,
                                          srcPath, std::ios_base::in | std::ios_base::binary);
    }

    if (!srcStream->good()) {
        ss << "Failed to open stream '" << srcPath << "': "
           << (errno ? ::strerror(errno) : "not in a good state");
        Fail(handle, ss.str());
        return handle;
    }

    // Determine length by seeking to the end.
    std::streampos cur = srcStream->tellg();
    std::streampos end = srcStream->rdbuf()->pubseekoff(0, std::ios_base::end);
    srcStream->seekg(cur, std::ios_base::beg);
    if (!srcStream->good() || cur < 0 || end < 0) {
        ss << "Failed to determine size of '" << srcPath << "': "
           << (errno ? ::strerror(errno) : "stream error");
        Fail(handle, ss.str());
        return handle;
    }
    handle->SetBytesTotalSize(end - cur);

    PutObject(srcStream, handle);
    return handle;
}

void TransferManager::PutObject(const std::shared_ptr<Aws::IOStream> &streamToPut,
                                const std::shared_ptr<TransferHandle> &handle) {
    const auto &blobMetadata = handle->GetReadMetadata();
    auto putObjectRequest = Aws::S3Crt::Model::PutObjectRequest()
                                .WithBucket(handle->GetBucket())
                                .WithKey(handle->GetKey())
                                .WithContentLength(blobMetadata.size);

    // Grant the bucket owner full control.
    putObjectRequest.SetACL(Aws::S3Crt::Model::ObjectCannedACL::bucket_owner_full_control);
    putObjectRequest.SetContentType(blobMetadata.content_type);
    if (!blobMetadata.content_encoding.empty()) {
        putObjectRequest.SetContentEncoding(blobMetadata.content_encoding);
    }
    if (!handle->GetTagging().empty()) {
        putObjectRequest.SetTagging(handle->GetTagging());
    }

    putObjectRequest.SetBody(streamToPut);

    // AmazonWebServiceRequest methods:
    putObjectRequest.SetContinueRequestHandler(
        [handle](const Aws::Http::HttpRequest *) { return handle->ShouldContinue(); });

    // Keep transfer manager alive until all callbacks are finished:
    auto self = shared_from_this();

    putObjectRequest.SetDataSentEventHandler(
        [self, handle](const Aws::Http::HttpRequest *, long long /*NOLINT*/ progress) {
            handle->UpdateBytesTransferred(progress);
            self->OnUploadProgress(handle);
        });

    auto callback = Aws::S3Crt::PutObjectResponseReceivedHandler{
        [self](const Aws::S3Crt::S3CrtClient *client,
               const Aws::S3Crt::Model::PutObjectRequest &request,
               const Aws::S3Crt::Model::PutObjectOutcome &outcome,
               const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context) {
            self->HandlePutObjectResponse(client, request, outcome, context);
        }};

    auto asyncContext = Aws::MakeShared<UploadContext>(CLASS_TAG, handle);

    // Transition to IN_PROGRESS right before the API call is made.
    // This is necessary since the body of PutObjectAsync() may call HandlePutObjectResponse().
    handle->UpdateStatus(TransferStatus::IN_PROGRESS);
    OnStatusChanged(handle);

    s3Client_->PutObjectAsync(putObjectRequest, callback, asyncContext);
}

void TransferManager::HandlePutObjectResponse(
    const Aws::S3Crt::S3CrtClient *,
    const Aws::S3Crt::Model::PutObjectRequest &,
    const Aws::S3Crt::Model::PutObjectOutcome &outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context) {
    const auto &handle = std::dynamic_pointer_cast<const UploadContext>(context)->handle;

    switch (handle->GetStatus()) {
        case TransferStatus::IN_PROGRESS:
            if (outcome.IsSuccess()) {
                handle->SetETag(outcome.GetResult().GetETag());
                handle->UpdateStatus(TransferStatus::COMPLETED);
            } else {
                handle->UpdateStatus(handle->ShouldContinue() ? TransferStatus::FAILED
                                                              : TransferStatus::CANCELED);
                handle->SetError(outcome.GetError());
            }
            break;
        case TransferStatus::FAILING:
            break;
        default:
            Fail(handle, "Invalid pre-final state " + StatusToString(handle->GetStatus()));
    }

    if (handle->GetStatus() == TransferStatus::FAILING) {
        handle->UpdateStatus(TransferStatus::FAILED);
    }
    OnStatusChanged(handle);
}

std::shared_ptr<TransferHandle> TransferManager::DownloadFile(
    const Aws::String &srcUri,
    const Aws::String &dstPath,
    std::streambuf *dstStreamBuf,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext> &ctx) {
    auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, srcUri, ctx);
    auto context = Aws::MakeShared<DownloadContext>(CLASS_TAG, handle);

    if (cancel_on_first_failure_ && failure_occurred_) {
        handle->UpdateStatus(TransferStatus::CANCELED);
        OnStatusChanged(handle);
        return handle;
    }

    if (dstStreamBuf) {
        context->dstStream = new std::iostream(dstStreamBuf);
        context->dstStreamBuf = dstStreamBuf;
    } else {
        // Note that the OnStatusChanged callback may be used before this function returns:
        context->dstStream = new DownloadStream(dstPath, [handle, this](std::string msg) {
            Fail(handle, std::move(msg), "DownloadStream Failure");
        });
    }

    // Creation of the DownloadStream may have failed, transitioning from NOT_STARTED => FAILED.
    if (handle->GetStatus() != TransferStatus::FAILED) {
        GetObject(context, handle);
    }
    return handle;
}

// Perform the actual download.
void TransferManager::GetObject(const std::shared_ptr<DownloadContext> &context,
                                const std::shared_ptr<TransferHandle> &handle) {
    auto getRequest = Aws::S3Crt::Model::GetObjectRequest()
                          .WithBucket(handle->GetBucket())
                          .WithKey(handle->GetKey());

    // Invoking the factory function below passes the @dstStream to a StandardHttpResponse object,
    // whose ResponseStream owns and manages the pointer once the factory function is called.
    //
    // Unlike the Aws::Transfer::TransferManager, we are not allocating a new object here; instead,
    // a pointer to the already allocated object is passed. It is ok to do this, since the lambda
    // is only invoked once during the lifetime of the request - in InitCommonCrtRequestOption, when
    // populating the response. In contrast to the Aws::Transfer::TransferManager, the CRT code does
    // not use the factory function for retries (these are internally handled by aws-c-s3).
    getRequest.SetResponseStreamFactory(Aws::IOStreamFactory([context]() {
        context->dstStreamOwnershipHasBeenTransferred = true;
        return context->dstStream;
    }));

    // Keep transfer manager alive until all callbacks are finished:
    auto self = shared_from_this();

    getRequest.SetContinueRequestHandler(
        [handle](const Aws::Http::HttpRequest *) { return handle->ShouldContinue(); });

    getRequest.SetDataReceivedEventHandler([self, context, handle](const Aws::Http::HttpRequest *,
                                                                   Aws::Http::HttpResponse *res,
                                                                   long long /*NOLINT*/ amount) {
        //
        // Set the total size after the first chunk has been processed.
        //
        // The aws-c-s3 code populates the Content-Length header of the HttpResponse after the
        // first part of the ranged-Get has completed. Extract total-size information from this.
        if (!handle->BytesTotalSizeHasBeenSet() && handle->ShouldContinue() &&
            handle->GetStatus() == TransferStatus::IN_PROGRESS) {
            std::string length_str;

            for (const auto &hdr : res->GetHeaders()) {
                if (Aws::Utils::StringUtils::ToLower(hdr.first.c_str()) == "content-length") {
                    length_str = hdr.second;
                }
            }
            if (length_str.empty()) {
                self->Fail(handle, "Response lacks Content-Length header");
            } else {
                char *end = nullptr;
                const uint64_t content_length = std::strtoull(length_str.c_str(), &end, 0);

                if (end != nullptr && *end != '\0') {
                    self->Fail(handle, "Invalid Content-Length: " + length_str);
                } else {
                    handle->SetBytesTotalSize(content_length);
                }
            }
        }

        handle->UpdateBytesTransferred(amount);
        self->OnDownloadProgress(handle);
    });

    auto callback = Aws::S3Crt::GetObjectResponseReceivedHandler{
        [self](const Aws::S3Crt::S3CrtClient *client,
               const Aws::S3Crt::Model::GetObjectRequest &request,
               Aws::S3Crt::Model::GetObjectOutcome outcome,
               const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context) {
            self->HandleGetObjectResponse(client, request, std::move(outcome), context);
        }};

    // Transition to IN_PROGRESS right before the API call is made.
    // This is necessary since the body of GetObjectAsync() may call HandleGetObjectResponse().
    handle->UpdateStatus(TransferStatus::IN_PROGRESS);
    OnStatusChanged(handle);

    s3Client_->GetObjectAsync(getRequest, callback, context);
}

void TransferManager::HandleGetObjectResponse(
    const Aws::S3Crt::S3CrtClient *,
    const Aws::S3Crt::Model::GetObjectRequest &,
    Aws::S3Crt::Model::GetObjectOutcome outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context) {
    auto ctx = std::dynamic_pointer_cast<const DownloadContext>(context);
    const auto &handle = ctx->handle;

    switch (handle->GetStatus()) {
        case TransferStatus::IN_PROGRESS:
            if (outcome.IsSuccess()) {
                // At this stage, the total size should have been filled in. This is done by the
                // aws-c-s3 code, passing the Content-Length header via the headers_callback to
                // the HttpResponse (see GetObject() above).
                if (!handle->BytesTotalSizeHasBeenSet()) {
                    // In the special case of an empty file, the aws-c-s3 code does not use the
                    // body_callback and so the DataReceivedEventHandler is also not called.
                    if (outcome.GetResult().GetContentLength() == 0) {
                        handle->SetBytesTotalSize(0);
                    } else {
                        Fail(handle, "Total size has not been filled in during transfer");
                        break;
                    }
                } else if (handle->GetReadMetadata().size !=
                           static_cast<size_t>(outcome.GetResult().GetContentLength())) {
                    Fail(handle, "Total size differs from Content-Length", "DATA CORRUPTED");
                    break;
                }

                // If the user specified a DownloadStream, close and rename the partial file here.
                // In the error case, the DownloadStream destructor will remove the partial file.
                DownloadStream *d = dynamic_cast<DownloadStream *>(ctx->dstStream);
                if (d != nullptr) {
                    // On error, the call to Fail() within d invokes UpdateStatus(FAILING), which
                    // completes before d->close() returns. This causes a transition to FAILING.
                    d->close();
                } else {
                    // Explicitly close the file buffer here in order to catch local write errors.
                    std::filebuf *fb = dynamic_cast<std::filebuf *>(ctx->dstStreamBuf);
                    if (fb != nullptr && fb->close() == nullptr) {
                        Fail(handle, "Failed to close download stream - output likely corrupt");
                    }
                }

                // State may have changed due to calling Fail().
                if (handle->GetStatus() != TransferStatus::FAILING) {
                    handle->UpdateStatus(TransferStatus::COMPLETED);
                    handle->SetLastModified(outcome.GetResult().GetLastModified());
                    handle->SetContentType(outcome.GetResult().GetContentType());
                    handle->SetContentEncoding(outcome.GetResult().GetContentEncoding());
                    handle->SetETag(outcome.GetResult().GetETag());
                }
            } else {
                handle->UpdateStatus(handle->ShouldContinue() ? TransferStatus::FAILED
                                                              : TransferStatus::CANCELED);
                handle->SetError(outcome.GetError());
            }
            break;
        case TransferStatus::FAILING:
            break;
        default:
            Fail(handle, "Invalid pre-final state " + StatusToString(handle->GetStatus()));
    }

    if (handle->GetStatus() == TransferStatus::FAILING) {
        handle->UpdateStatus(TransferStatus::FAILED);
    }
    OnStatusChanged(handle);
}

void TransferManager::Fail(std::shared_ptr<TransferHandle> handle,
                           std::string msg,
                           std::string exceptionMsg) {
    switch (handle->GetStatus()) {
        case TransferStatus::NOT_STARTED:
            handle->UpdateStatus(TransferStatus::FAILED);
            break;
        case TransferStatus::IN_PROGRESS:
            handle->UpdateStatus(TransferStatus::FAILING);
            break;
        case TransferStatus::FAILING:
            msg = handle->GetLastError().GetMessage() + "\n" + msg;
            break;
        case TransferStatus::FAILED:
        case TransferStatus::COMPLETED:
        case TransferStatus::CANCELED:
            return;
    }
    handle->SetError({S3Crt::S3CrtErrors::UNKNOWN, std::move(exceptionMsg), std::move(msg), false});
    OnStatusChanged(handle);
}

void TransferManager::OnStatusChanged(const std::shared_ptr<TransferHandle> &handle) {
    if (cancel_on_first_failure_ && (handle->GetStatus() == TransferStatus::FAILING ||
                                     handle->GetStatus() == TransferStatus::FAILED)) {
        failure_occurred_ = true;
    }
    if (statusChangedCallback) {
        statusChangedCallback(handle);
    }
}

void TransferManager::OnUploadProgress(const std::shared_ptr<TransferHandle> &handle) {
    // The progress callbacks are only called while the transfer is in progress.
    // If another transfer has failed in the meantime, cancel this and all other ones.
    if (cancel_on_first_failure_ && failure_occurred_) {
        handle->Cancel();
    }
    if (uploadProgressCallback) {
        uploadProgressCallback(handle);
    }
}

void TransferManager::OnDownloadProgress(const std::shared_ptr<TransferHandle> &handle) {
    if (cancel_on_first_failure_ && failure_occurred_) {
        handle->Cancel();
    }
    if (downloadProgressCallback) {
        downloadProgressCallback(handle);
    }
}

}  // namespace TransferCrt
}  // namespace Aws
