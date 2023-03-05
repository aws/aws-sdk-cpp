/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/GetObjectRequest.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/transfer-crt/TransferHandle.h>
#include <aws/transfer-crt/DownloadStream.h>
#include <memory>

namespace Aws {
namespace TransferCrt {

// Callback type used for updates.
using HandleUpdatedCallback = std::function<void(const std::shared_ptr<const TransferHandle> &)>;

// Helper structs to carry around a TransferHandle as part of the caller context.
struct UploadContext final : Aws::Client::AsyncCallerContext {
    explicit UploadContext(std::shared_ptr<TransferHandle> th) : handle{std::move(th)} {}
    std::shared_ptr<TransferHandle> handle;
};

struct DownloadContext final : Aws::Client::AsyncCallerContext {
    explicit DownloadContext(std::shared_ptr<TransferHandle> th) : handle{std::move(th)} {}

    ~DownloadContext() {
        if (!dstStreamOwnershipHasBeenTransferred) {
            delete dstStream;
        }
    }

    std::shared_ptr<TransferHandle> handle;
    bool dstStreamOwnershipHasBeenTransferred = false;
    std::iostream *dstStream = nullptr;
    std::streambuf *dstStreamBuf = nullptr;
};

// Minimal re-implementation of the S3 TransferManager for the S3CrtClient.
//
// All public methods are non-blocking and return a pointer to an asynchronous TransferHandle.
class TransferManager final : public std::enable_shared_from_this<TransferManager> {
 public:
    // Callbacks are invoked under the following conditions:
    // - uploadProgressCallback:   when the number of bytes-sent changes,
    // - downloadProgressCallback: when the number of bytes-received changes,
    // - statusChangedCallback:    when the handle changes status.
    //                             NOTE: code maintains the invariant that @statusChangedCallback
    //                                   is called at most once for a "finished" TransferStatus.
    static std::shared_ptr<TransferManager> Create(
        std::shared_ptr<Aws::S3Crt::S3CrtClient> s3Client,
        const HandleUpdatedCallback &uploadProgressCallback,
        const HandleUpdatedCallback &downloadProgressCallback,
        const HandleUpdatedCallback &statusChangedCallback);

    // Upload from @srcPath or @srcStream to @md.uri via PutObjectAsync.
    // If @srcStream is not set, open the input file at @srcPath.
    std::shared_ptr<TransferHandle> UploadFile(
        const Aws::String &srcPath,
        const std::shared_ptr<Aws::IOStream> &srcStream,
        const WriteMetadata &md,
        const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context = nullptr);

    // Download from @srcUri to local @dstPath or @dstStreamBuf, via GetObjectAsync.
    // If both @dstPath and @dstStreamBuf are specified, @dstStreamBuf is used.
    std::shared_ptr<TransferHandle> DownloadFile(
        const Aws::String &srcUri,
        const Aws::String &dstPath,
        std::streambuf *dstStreamBuf = nullptr,
        const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context = nullptr);

 private:
    // The constructor supports a "cancel all transfers when the first failure is encountered"
    // optional policy, which is not exposed to the outside. It enforces the invariant that a
    // bulk transfer succeeds only after all of its managed transfers have succeeded.
    TransferManager(std::shared_ptr<Aws::S3Crt::S3CrtClient> s3Client,
                    const HandleUpdatedCallback &uploadProgressCallback,
                    const HandleUpdatedCallback &downloadProgressCallback,
                    const HandleUpdatedCallback &statusChangedCallback,
                    bool cancel_on_first_failure = true);

    void PutObject(const std::shared_ptr<Aws::IOStream> &streamToPut,
                   const std::shared_ptr<TransferHandle> &handle);

    void GetObject(const std::shared_ptr<DownloadContext> &context,
                   const std::shared_ptr<TransferHandle> &handle);

    void HandlePutObjectResponse(const Aws::S3Crt::S3CrtClient *,
                                 const Aws::S3Crt::Model::PutObjectRequest &,
                                 const Aws::S3Crt::Model::PutObjectOutcome &,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext> &);

    void HandleGetObjectResponse(const Aws::S3Crt::S3CrtClient *,
                                 const Aws::S3Crt::Model::GetObjectRequest &,
                                 Aws::S3Crt::Model::GetObjectOutcome,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext> &);

    // Record that an error has occurred.
    // Set FAILED state if no API call has been made yet, otherwise transition to FAILING state.
    void Fail(std::shared_ptr<TransferHandle> handle,
              std::string errorMsg,
              std::string exceptionMsg = "FATAL ERROR");

    void OnUploadProgress(const std::shared_ptr<TransferHandle> &handle);
    void OnDownloadProgress(const std::shared_ptr<TransferHandle> &handle);
    void OnStatusChanged(const std::shared_ptr<TransferHandle> &handle);

 private:
    std::shared_ptr<Aws::S3Crt::S3CrtClient> s3Client_;
    // Cancel all new/pending transfers after the first failure (optional policy):
    const bool cancel_on_first_failure_;
    std::atomic<bool> failure_occurred_{false};

    HandleUpdatedCallback uploadProgressCallback;
    HandleUpdatedCallback downloadProgressCallback;
    HandleUpdatedCallback statusChangedCallback;
};

}  // namespace TransferCrt
}  // namespace Aws
