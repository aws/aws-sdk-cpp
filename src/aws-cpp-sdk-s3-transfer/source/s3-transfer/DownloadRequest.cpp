/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/s3-transfer/internal/DownloadRequestImpl.h>
#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <cassert>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const DOWNLOAD_REQUEST_ALLOCATION_TAG = "DownloadRequest";

namespace Internal {

DownloadRequestImpl::DownloadRequestImpl(
    Aws::String bucket, Aws::String key,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners)
    : m_transferListeners(std::move(transferListeners)) {
  assert(!bucket.empty() && "DownloadRequest bucket must not be empty");
  assert(!key.empty() && "DownloadRequest key must not be empty");
  m_s3Request.SetBucket(std::move(bucket));
  m_s3Request.SetKey(std::move(key));
}

const Aws::String& DownloadRequestImpl::GetDestinationFilePath() const {
  static const Aws::String EMPTY_DESTINATION_FILE_PATH;
  return EMPTY_DESTINATION_FILE_PATH;
}

const Aws::String& DownloadRequestImpl::GetTempFilePath() const {
  static const Aws::String EMPTY_TEMP_FILE_PATH;
  return EMPTY_TEMP_FILE_PATH;
}

const std::shared_ptr<DownloadDataReceiver>& DownloadRequestImpl::GetDataReceiver() const {
  static const std::shared_ptr<DownloadDataReceiver> NO_DATA_RECEIVER;
  return NO_DATA_RECEIVER;
}

FileDownloadImpl::FileDownloadImpl(
    Aws::String bucket, Aws::String key, Aws::String destinationFilePath,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners)
    : DownloadRequestImpl(std::move(bucket), std::move(key), std::move(transferListeners)),
      m_destinationFilePath(std::move(destinationFilePath)) {
  assert(!m_destinationFilePath.empty() && "DownloadRequest destination file path must not be empty");
  // Sibling temp for atomic rename; SEP caps the suffix at 8 chars.
  m_tempFilePath = m_destinationFilePath + ".s3tmp." +
                   Aws::String(Aws::Utils::UUID::RandomUUID()).substr(0, 8);
}

Aws::Client::AWSError<Aws::S3::S3Errors> FileDownloadImpl::Validate() const {
  if (m_destinationFilePath.empty()) {
    return Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER_VALUE",
        "DownloadRequest destination file path must not be empty", false);
  }
  return Aws::Client::AWSError<Aws::S3::S3Errors>();
}

Aws::Client::AWSError<Aws::S3::S3Errors> FileDownloadImpl::FinalizeOnSuccess(
    const std::shared_ptr<DownloadTransferState>&) const {
  // Windows MoveFileW won't overwrite; remove first (non-atomic).
#ifdef _WIN32
  Aws::FileSystem::RemoveFileIfExists(m_destinationFilePath.c_str());
#endif
  if (!Aws::FileSystem::RelocateFileOrDirectory(m_tempFilePath.c_str(), m_destinationFilePath.c_str())) {
    Aws::FileSystem::RemoveFileIfExists(m_tempFilePath.c_str());
    return Aws::Client::AWSError<Aws::S3::S3Errors>(
        Aws::S3::S3Errors::UNKNOWN, "FileRenameFailure",
        "Downloaded data could not be moved to the destination path.", false);
  }
  return Aws::Client::AWSError<Aws::S3::S3Errors>();
}

void FileDownloadImpl::CleanupOnFailure(const std::shared_ptr<DownloadTransferState>&) const {
  // aws-c-s3 leaves recv_filepath in place on failure.
  Aws::FileSystem::RemoveFileIfExists(m_tempFilePath.c_str());
}

StreamDownloadImpl::StreamDownloadImpl(
    Aws::String bucket, Aws::String key, std::shared_ptr<DownloadDataReceiver> dataReceiver,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners)
    : DownloadRequestImpl(std::move(bucket), std::move(key), std::move(transferListeners)),
      m_dataReceiver(std::move(dataReceiver)) {
  assert(m_dataReceiver && "DownloadRequest data receiver must not be null");
}

Aws::Client::AWSError<Aws::S3::S3Errors> StreamDownloadImpl::FinalizeOnSuccess(
    const std::shared_ptr<DownloadTransferState>&) const {
  return Aws::Client::AWSError<Aws::S3::S3Errors>();
}

void StreamDownloadImpl::CleanupOnFailure(const std::shared_ptr<DownloadTransferState>&) const {}

}  // namespace Internal

DownloadRequest::DownloadRequest(
    Aws::String bucket, Aws::String key, Aws::String destinationFilePath,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners)
    : m_impl(Aws::MakeShared<Internal::FileDownloadImpl>(DOWNLOAD_REQUEST_ALLOCATION_TAG, std::move(bucket), std::move(key),
                                                         std::move(destinationFilePath), std::move(transferListeners))) {}

DownloadRequest::DownloadRequest(
    Aws::String bucket, Aws::String key, std::shared_ptr<DownloadDataReceiver> dataReceiver,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners)
    : m_impl(Aws::MakeShared<Internal::StreamDownloadImpl>(DOWNLOAD_REQUEST_ALLOCATION_TAG, std::move(bucket), std::move(key),
                                                           std::move(dataReceiver), std::move(transferListeners))) {}

DownloadRequest::~DownloadRequest() = default;

const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& DownloadRequest::GetTransferListeners() const {
  return m_impl->GetTransferListeners();
}

const Aws::String& DownloadRequest::GetDestinationFilePath() const {
  return m_impl->GetDestinationFilePath();
}

const Aws::String& DownloadRequest::GetTempFilePath() const { return m_impl->GetTempFilePath(); }

const std::shared_ptr<DownloadDataReceiver>& DownloadRequest::GetDataReceiver() const {
  return m_impl->GetDataReceiver();
}

DownloadRequest& DownloadRequest::SetChecksumMode(Aws::S3::Model::ChecksumMode v) {
  m_impl->MutableS3Request().SetChecksumMode(v);
  return *this;
}
DownloadRequest& DownloadRequest::SetExpectedBucketOwner(Aws::String v) {
  m_impl->MutableS3Request().SetExpectedBucketOwner(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetIfMatch(Aws::String v) { m_impl->MutableS3Request().SetIfMatch(std::move(v)); return *this; }
DownloadRequest& DownloadRequest::SetIfModifiedSince(Aws::Utils::DateTime v) {
  m_impl->MutableS3Request().SetIfModifiedSince(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetIfNoneMatch(Aws::String v) { m_impl->MutableS3Request().SetIfNoneMatch(std::move(v)); return *this; }
DownloadRequest& DownloadRequest::SetIfUnmodifiedSince(Aws::Utils::DateTime v) {
  m_impl->MutableS3Request().SetIfUnmodifiedSince(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetRange(Aws::String v) { m_impl->MutableS3Request().SetRange(std::move(v)); return *this; }
DownloadRequest& DownloadRequest::SetRequestPayer(Aws::S3::Model::RequestPayer v) {
  m_impl->MutableS3Request().SetRequestPayer(v);
  return *this;
}
DownloadRequest& DownloadRequest::SetResponseCacheControl(Aws::String v) {
  m_impl->MutableS3Request().SetResponseCacheControl(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetResponseContentDisposition(Aws::String v) {
  m_impl->MutableS3Request().SetResponseContentDisposition(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetResponseContentEncoding(Aws::String v) {
  m_impl->MutableS3Request().SetResponseContentEncoding(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetResponseContentLanguage(Aws::String v) {
  m_impl->MutableS3Request().SetResponseContentLanguage(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetResponseContentType(Aws::String v) {
  m_impl->MutableS3Request().SetResponseContentType(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetResponseExpires(Aws::Utils::DateTime v) {
  m_impl->MutableS3Request().SetResponseExpires(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetSSECustomerAlgorithm(Aws::String v) {
  m_impl->MutableS3Request().SetSSECustomerAlgorithm(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetSSECustomerKey(Aws::String v) {
  m_impl->MutableS3Request().SetSSECustomerKey(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetSSECustomerKeyMD5(Aws::String v) {
  m_impl->MutableS3Request().SetSSECustomerKeyMD5(std::move(v));
  return *this;
}
DownloadRequest& DownloadRequest::SetVersionId(Aws::String v) { m_impl->MutableS3Request().SetVersionId(std::move(v)); return *this; }

const Aws::S3::Model::GetObjectRequest& DownloadRequest::GetS3Request() const {
  return m_impl->GetS3Request();
}

Aws::Client::AWSError<Aws::S3::S3Errors> DownloadRequest::Validate() const { return m_impl->Validate(); }

Aws::Client::AWSError<Aws::S3::S3Errors> DownloadRequest::FinalizeOnSuccess(
    const std::shared_ptr<DownloadTransferState>& state) const {
  return m_impl->FinalizeOnSuccess(state);
}

void DownloadRequest::CleanupOnFailure(const std::shared_ptr<DownloadTransferState>& state) const {
  m_impl->CleanupOnFailure(state);
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
