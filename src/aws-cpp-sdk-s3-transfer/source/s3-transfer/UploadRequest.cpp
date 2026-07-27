/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/s3-transfer/internal/UploadRequestImpl.h>
#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/crt/io/Stream.h>

#include <cassert>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const UPLOAD_REQUEST_ALLOCATION_TAG = "UploadRequest";

namespace Internal {

UploadRequestImpl::UploadRequestImpl(Aws::String bucket,
                                     Aws::String key,
                                     Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners)
    : m_transferListeners(std::move(transferListeners)) {
  assert(!bucket.empty() && "UploadRequest bucket must not be empty");
  assert(!key.empty() && "UploadRequest key must not be empty");
  m_s3Request.SetBucket(std::move(bucket));
  m_s3Request.SetKey(std::move(key));
}

const Aws::String& UploadRequestImpl::GetSourceFilePath() const {
  static const Aws::String EMPTY_SOURCE_FILE_PATH;
  return EMPTY_SOURCE_FILE_PATH;
}

FileUploadImpl::FileUploadImpl(Aws::String bucket,
                               Aws::String key,
                               Aws::String sourceFilePath,
                               Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners)
    : UploadRequestImpl(std::move(bucket), std::move(key), std::move(transferListeners)),
      m_sourceFilePath(std::move(sourceFilePath)) {
  assert(!m_sourceFilePath.empty() && "UploadRequest file source path must not be empty");
}

Aws::Client::AWSError<Aws::S3::S3Errors> FileUploadImpl::PrepareTransferState(
    const std::shared_ptr<UploadTransferState>&) const {
  return Aws::Client::AWSError<Aws::S3::S3Errors>();
}

StreamUploadImpl::StreamUploadImpl(Aws::String bucket,
                                   Aws::String key,
                                   std::shared_ptr<Aws::IOStream> body,
                                   Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners)
    : UploadRequestImpl(std::move(bucket), std::move(key), std::move(transferListeners)) {
  assert(body && "UploadRequest stream body must not be null");
  m_s3Request.SetBody(std::move(body));
}

Aws::Client::AWSError<Aws::S3::S3Errors> StreamUploadImpl::PrepareTransferState(
    const std::shared_ptr<UploadTransferState>& state) const {
  const auto& body = m_s3Request.GetBody();
  if (!body) {
    return Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE",
        "UploadRequest stream body must not be null", false);
  }
  // A bad stream would silently upload truncated data.
  if (body->fail()) {
    return Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE",
        "Input stream in bad state", false);
  }
  // Guarded: clobbering an existing length drops Content-Length, forcing aws-chunked framing.
  if (m_declaredLength) {
    state->totalBytes = m_declaredLength;
  }
  return Aws::Client::AWSError<Aws::S3::S3Errors>();
}

}  // namespace Internal

UploadRequest::UploadRequest(
    Aws::String bucket, Aws::String key, Aws::String sourceFilePath,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners)
    : m_impl(Aws::MakeShared<Internal::FileUploadImpl>(UPLOAD_REQUEST_ALLOCATION_TAG, std::move(bucket), std::move(key),
                                                       std::move(sourceFilePath), std::move(transferListeners))) {}

UploadRequest::UploadRequest(
    Aws::String bucket, Aws::String key, std::shared_ptr<Aws::IOStream> body,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners)
    : m_impl(Aws::MakeShared<Internal::StreamUploadImpl>(UPLOAD_REQUEST_ALLOCATION_TAG, std::move(bucket), std::move(key),
                                                         std::move(body), std::move(transferListeners))) {}

UploadRequest::~UploadRequest() = default;

const Aws::Vector<std::shared_ptr<UploadProgressListener>>& UploadRequest::GetTransferListeners() const {
  return m_impl->GetTransferListeners();
}

const Aws::String& UploadRequest::GetSourceFilePath() const { return m_impl->GetSourceFilePath(); }

const Aws::Crt::Optional<uint64_t>& UploadRequest::GetContentLength() const {
  return m_impl->GetContentLength();
}

UploadRequest& UploadRequest::SetContentLength(uint64_t contentLength) {
  m_impl->SetContentLength(contentLength);
  return *this;
}

UploadRequest& UploadRequest::SetACL(Aws::S3::Model::ObjectCannedACL v) { m_impl->MutableS3Request().SetACL(v); return *this; }
UploadRequest& UploadRequest::SetBucketKeyEnabled(bool v) { m_impl->MutableS3Request().SetBucketKeyEnabled(v); return *this; }
UploadRequest& UploadRequest::SetCacheControl(Aws::String v) { m_impl->MutableS3Request().SetCacheControl(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm v) {
  m_impl->MutableS3Request().SetChecksumAlgorithm(v);
  return *this;
}
UploadRequest& UploadRequest::SetChecksumCRC32(Aws::String v) { m_impl->MutableS3Request().SetChecksumCRC32(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetChecksumCRC32C(Aws::String v) { m_impl->MutableS3Request().SetChecksumCRC32C(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetChecksumCRC64NVME(Aws::String v) {
  m_impl->MutableS3Request().SetChecksumCRC64NVME(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetChecksumSHA1(Aws::String v) { m_impl->MutableS3Request().SetChecksumSHA1(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetChecksumSHA256(Aws::String v) { m_impl->MutableS3Request().SetChecksumSHA256(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetChecksumSHA512(Aws::String v) { m_impl->MutableS3Request().SetChecksumSHA512(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetContentDisposition(Aws::String v) {
  m_impl->MutableS3Request().SetContentDisposition(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetContentEncoding(Aws::String v) {
  m_impl->MutableS3Request().SetContentEncoding(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetContentLanguage(Aws::String v) {
  m_impl->MutableS3Request().SetContentLanguage(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetContentType(Aws::String v) { m_impl->MutableS3Request().SetContentType(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetContentMD5(Aws::String v) { m_impl->MutableS3Request().SetContentMD5(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetExpectedBucketOwner(Aws::String v) {
  m_impl->MutableS3Request().SetExpectedBucketOwner(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetExpires(Aws::Utils::DateTime v) { m_impl->MutableS3Request().SetExpires(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetGrantFullControl(Aws::String v) {
  m_impl->MutableS3Request().SetGrantFullControl(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetGrantRead(Aws::String v) { m_impl->MutableS3Request().SetGrantRead(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetGrantReadACP(Aws::String v) { m_impl->MutableS3Request().SetGrantReadACP(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetGrantWriteACP(Aws::String v) { m_impl->MutableS3Request().SetGrantWriteACP(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetIfMatch(Aws::String v) { m_impl->MutableS3Request().SetIfMatch(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetIfNoneMatch(Aws::String v) { m_impl->MutableS3Request().SetIfNoneMatch(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetMetadata(Aws::Map<Aws::String, Aws::String> v) {
  m_impl->MutableS3Request().SetMetadata(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetObjectLockLegalHoldStatus(Aws::S3::Model::ObjectLockLegalHoldStatus v) {
  m_impl->MutableS3Request().SetObjectLockLegalHoldStatus(v);
  return *this;
}
UploadRequest& UploadRequest::SetObjectLockMode(Aws::S3::Model::ObjectLockMode v) {
  m_impl->MutableS3Request().SetObjectLockMode(v);
  return *this;
}
UploadRequest& UploadRequest::SetObjectLockRetainUntilDate(Aws::Utils::DateTime v) {
  m_impl->MutableS3Request().SetObjectLockRetainUntilDate(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetRequestPayer(Aws::S3::Model::RequestPayer v) {
  m_impl->MutableS3Request().SetRequestPayer(v);
  return *this;
}
UploadRequest& UploadRequest::SetSSECustomerAlgorithm(Aws::String v) {
  m_impl->MutableS3Request().SetSSECustomerAlgorithm(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetSSECustomerKey(Aws::String v) { m_impl->MutableS3Request().SetSSECustomerKey(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetSSECustomerKeyMD5(Aws::String v) {
  m_impl->MutableS3Request().SetSSECustomerKeyMD5(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetSSEKMSEncryptionContext(Aws::String v) {
  m_impl->MutableS3Request().SetSSEKMSEncryptionContext(std::move(v));
  return *this;
}
UploadRequest& UploadRequest::SetSSEKMSKeyId(Aws::String v) { m_impl->MutableS3Request().SetSSEKMSKeyId(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetServerSideEncryption(Aws::S3::Model::ServerSideEncryption v) {
  m_impl->MutableS3Request().SetServerSideEncryption(v);
  return *this;
}
UploadRequest& UploadRequest::SetStorageClass(Aws::S3::Model::StorageClass v) {
  m_impl->MutableS3Request().SetStorageClass(v);
  return *this;
}
UploadRequest& UploadRequest::SetTagging(Aws::String v) { m_impl->MutableS3Request().SetTagging(std::move(v)); return *this; }
UploadRequest& UploadRequest::SetWebsiteRedirectLocation(Aws::String v) {
  m_impl->MutableS3Request().SetWebsiteRedirectLocation(std::move(v));
  return *this;
}

UploadRequest& UploadRequest::AddMetadata(Aws::String key, Aws::String value) {
  m_impl->MutableS3Request().AddMetadata(std::move(key), std::move(value));
  return *this;
}

const Aws::S3::Model::PutObjectRequest& UploadRequest::GetS3Request() const {
  return m_impl->GetS3Request();
}

Aws::Client::AWSError<Aws::S3::S3Errors> UploadRequest::PrepareTransferState(
    const std::shared_ptr<UploadTransferState>& state) const {
  return m_impl->PrepareTransferState(state);
}

bool UploadRequest::IsStreamUpload() const { return m_impl->IsStreamUpload(); }

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
