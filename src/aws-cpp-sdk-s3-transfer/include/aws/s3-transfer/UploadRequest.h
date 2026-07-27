/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/crt/Optional.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ObjectCannedACL.h>
#include <aws/s3/model/ObjectLockLegalHoldStatus.h>
#include <aws/s3/model/ObjectLockMode.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/RequestPayer.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/StorageClass.h>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

struct UploadTransferState;

namespace Internal {
class UploadRequestImpl;
}

/**
 * Request type for S3TransferManager::Upload. All state lives behind m_impl, whose concrete type is
 * chosen by the constructor: a source file path selects the file strategy, a stream body the stream
 * strategy. Move-only, because that impl is uniquely owned; pass with std::move.
 */
class AWS_S3_TRANSFER_API UploadRequest final {
 public:
  UploadRequest(Aws::String bucket,
                Aws::String key,
                Aws::String sourceFilePath,
                Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {});

  UploadRequest(Aws::String bucket,
                Aws::String key,
                std::shared_ptr<Aws::IOStream> body,
                Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {});

  ~UploadRequest();

  const Aws::Vector<std::shared_ptr<UploadProgressListener>>& GetTransferListeners() const;
  const Aws::String& GetSourceFilePath() const;

  // Stream uploads only. Call this when the body is not seekable so the length is known up front.
  // Empty when the customer never declared one, which is distinct from a declared length of zero.
  const Aws::Crt::Optional<uint64_t>& GetContentLength() const;
  UploadRequest& SetContentLength(uint64_t contentLength);

  UploadRequest& SetACL(Aws::S3::Model::ObjectCannedACL v);
  UploadRequest& SetBucketKeyEnabled(bool v);
  UploadRequest& SetCacheControl(Aws::String v);
  UploadRequest& SetChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm v);
  UploadRequest& SetChecksumCRC32(Aws::String v);
  UploadRequest& SetChecksumCRC32C(Aws::String v);
  UploadRequest& SetChecksumCRC64NVME(Aws::String v);
  UploadRequest& SetChecksumSHA1(Aws::String v);
  UploadRequest& SetChecksumSHA256(Aws::String v);
  UploadRequest& SetChecksumSHA512(Aws::String v);
  UploadRequest& SetContentDisposition(Aws::String v);
  UploadRequest& SetContentEncoding(Aws::String v);
  UploadRequest& SetContentLanguage(Aws::String v);
  UploadRequest& SetContentType(Aws::String v);
  UploadRequest& SetContentMD5(Aws::String v);
  UploadRequest& SetExpectedBucketOwner(Aws::String v);
  UploadRequest& SetExpires(Aws::Utils::DateTime v);
  UploadRequest& SetGrantFullControl(Aws::String v);
  UploadRequest& SetGrantRead(Aws::String v);
  UploadRequest& SetGrantReadACP(Aws::String v);
  UploadRequest& SetGrantWriteACP(Aws::String v);
  UploadRequest& SetIfMatch(Aws::String v);
  UploadRequest& SetIfNoneMatch(Aws::String v);
  UploadRequest& SetMetadata(Aws::Map<Aws::String, Aws::String> v);
  UploadRequest& AddMetadata(Aws::String key, Aws::String value);
  UploadRequest& SetObjectLockLegalHoldStatus(Aws::S3::Model::ObjectLockLegalHoldStatus v);
  UploadRequest& SetObjectLockMode(Aws::S3::Model::ObjectLockMode v);
  UploadRequest& SetObjectLockRetainUntilDate(Aws::Utils::DateTime v);
  UploadRequest& SetRequestPayer(Aws::S3::Model::RequestPayer v);
  UploadRequest& SetSSECustomerAlgorithm(Aws::String v);
  UploadRequest& SetSSECustomerKey(Aws::String v);
  UploadRequest& SetSSECustomerKeyMD5(Aws::String v);
  UploadRequest& SetSSEKMSEncryptionContext(Aws::String v);
  UploadRequest& SetSSEKMSKeyId(Aws::String v);
  UploadRequest& SetServerSideEncryption(Aws::S3::Model::ServerSideEncryption v);
  UploadRequest& SetStorageClass(Aws::S3::Model::StorageClass v);
  UploadRequest& SetTagging(Aws::String v);
  UploadRequest& SetWebsiteRedirectLocation(Aws::String v);

  // True when the body is a stream rather than a file; dispatch needs a CRT body adapter for it.
  bool IsStreamUpload() const;

  const Aws::S3::Model::PutObjectRequest& GetS3Request() const;

  Aws::Client::AWSError<Aws::S3::S3Errors> PrepareTransferState(
      const std::shared_ptr<UploadTransferState>& state) const;

 private:
  std::shared_ptr<Internal::UploadRequestImpl> m_impl;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
