/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ObjectCannedACL.h>
#include <aws/s3/model/ObjectLockLegalHoldStatus.h>
#include <aws/s3/model/ObjectLockMode.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/RequestPayer.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/StorageClass.h>
#include <cassert>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::Upload. Bucket, key, and the upload source (either a file
 * path or a stream body) are required at construction time; the two constructors make the
 * source-kind choice exclusive so an invalid request is unconstructable. All other S3-level fields
 * (content type, metadata, checksums, SSE, etc.) are optional and set via the setters below; the
 * customer does not construct a PutObjectRequest. Reads go through GetS3Request().
 */
class AWS_S3_TRANSFER_API UploadRequest final {
 public:
  // File upload.
  explicit UploadRequest(
    Aws::String bucket,
    Aws::String key,
    Aws::String sourceFilePath,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {})
  : m_sourceFilePath(std::move(sourceFilePath)),
    m_transferListeners(std::move(transferListeners)) {
    assert(!bucket.empty() && "UploadRequest bucket must not be empty");
    assert(!key.empty() && "UploadRequest key must not be empty");
    assert(!m_sourceFilePath.empty() && "UploadRequest file source path must not be empty");
    m_s3Request.SetBucket(std::move(bucket));
    m_s3Request.SetKey(std::move(key));
  }

  // Stream upload. For a non-seekable stream, call SetContentLength if the length is known.
  explicit UploadRequest(
    Aws::String bucket,
    Aws::String key,
    std::shared_ptr<Aws::IOStream> body,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {})
  : m_transferListeners(std::move(transferListeners)) {
    assert(!bucket.empty() && "UploadRequest bucket must not be empty");
    assert(!key.empty() && "UploadRequest key must not be empty");
    assert(body && "UploadRequest stream body must not be null");
    m_s3Request.SetBucket(std::move(bucket));
    m_s3Request.SetKey(std::move(key));
    m_s3Request.SetBody(std::move(body));
  }

  inline const Aws::String& GetSourceFilePath() const { return m_sourceFilePath; }
  inline std::shared_ptr<Aws::IOStream> GetBody() const { return m_s3Request.GetBody(); }
  inline const Aws::Vector<std::shared_ptr<UploadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }

  // Content length of the stream body, in bytes. Only meaningful for stream uploads: supply it
  // when the body is not seekable so the transfer manager need not measure the stream.
  inline uint64_t GetContentLength() const { return m_contentLength; }
  inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
  inline UploadRequest& SetContentLength(uint64_t contentLength) {
    m_contentLength = contentLength;
    m_contentLengthHasBeenSet = true;
    return *this;
  }

  // Bucket and key are set at construction time and cannot be changed; see the constructors above.
  // Read these fields back via GetS3Request().
  inline UploadRequest& SetACL(Aws::S3::Model::ObjectCannedACL v) { m_s3Request.SetACL(v); return *this; }

  inline UploadRequest& SetBucketKeyEnabled(bool v) { m_s3Request.SetBucketKeyEnabled(v); return *this; }

  inline UploadRequest& SetCacheControl(Aws::String v) { m_s3Request.SetCacheControl(std::move(v)); return *this; }

  inline UploadRequest& SetChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm v) { m_s3Request.SetChecksumAlgorithm(v); return *this; }

  inline UploadRequest& SetChecksumCRC32(Aws::String v) { m_s3Request.SetChecksumCRC32(std::move(v)); return *this; }

  inline UploadRequest& SetChecksumCRC32C(Aws::String v) { m_s3Request.SetChecksumCRC32C(std::move(v)); return *this; }

  inline UploadRequest& SetChecksumCRC64NVME(Aws::String v) { m_s3Request.SetChecksumCRC64NVME(std::move(v)); return *this; }

  inline UploadRequest& SetChecksumSHA1(Aws::String v) { m_s3Request.SetChecksumSHA1(std::move(v)); return *this; }

  inline UploadRequest& SetChecksumSHA256(Aws::String v) { m_s3Request.SetChecksumSHA256(std::move(v)); return *this; }

  inline UploadRequest& SetChecksumSHA512(Aws::String v) { m_s3Request.SetChecksumSHA512(std::move(v)); return *this; }

  inline UploadRequest& SetContentDisposition(Aws::String v) { m_s3Request.SetContentDisposition(std::move(v)); return *this; }

  inline UploadRequest& SetContentEncoding(Aws::String v) { m_s3Request.SetContentEncoding(std::move(v)); return *this; }

  inline UploadRequest& SetContentLanguage(Aws::String v) { m_s3Request.SetContentLanguage(std::move(v)); return *this; }

  inline UploadRequest& SetContentType(Aws::String v) { m_s3Request.SetContentType(std::move(v)); return *this; }

  inline UploadRequest& SetContentMD5(Aws::String v) { m_s3Request.SetContentMD5(std::move(v)); return *this; }

  inline UploadRequest& SetExpectedBucketOwner(Aws::String v) { m_s3Request.SetExpectedBucketOwner(std::move(v)); return *this; }

  inline UploadRequest& SetExpires(Aws::Utils::DateTime v) { m_s3Request.SetExpires(std::move(v)); return *this; }

  inline UploadRequest& SetGrantFullControl(Aws::String v) { m_s3Request.SetGrantFullControl(std::move(v)); return *this; }

  inline UploadRequest& SetGrantRead(Aws::String v) { m_s3Request.SetGrantRead(std::move(v)); return *this; }

  inline UploadRequest& SetGrantReadACP(Aws::String v) { m_s3Request.SetGrantReadACP(std::move(v)); return *this; }

  inline UploadRequest& SetGrantWriteACP(Aws::String v) { m_s3Request.SetGrantWriteACP(std::move(v)); return *this; }

  inline UploadRequest& SetIfMatch(Aws::String v) { m_s3Request.SetIfMatch(std::move(v)); return *this; }

  inline UploadRequest& SetIfNoneMatch(Aws::String v) { m_s3Request.SetIfNoneMatch(std::move(v)); return *this; }

  inline UploadRequest& SetMetadata(Aws::Map<Aws::String, Aws::String> v) {
    m_s3Request.SetMetadata(std::move(v));
    return *this;
  }

  // Insert a single metadata entry. Multiple calls accumulate into the metadata map.
  inline UploadRequest& AddMetadata(Aws::String key, Aws::String value) {
    m_s3Request.AddMetadata(std::move(key), std::move(value));
    return *this;
  }

  inline UploadRequest& SetObjectLockLegalHoldStatus(Aws::S3::Model::ObjectLockLegalHoldStatus v) {
    m_s3Request.SetObjectLockLegalHoldStatus(v);
    return *this;
  }

  inline UploadRequest& SetObjectLockMode(Aws::S3::Model::ObjectLockMode v) { m_s3Request.SetObjectLockMode(v); return *this; }

  inline UploadRequest& SetObjectLockRetainUntilDate(Aws::Utils::DateTime v) {
    m_s3Request.SetObjectLockRetainUntilDate(std::move(v));
    return *this;
  }

  inline UploadRequest& SetRequestPayer(Aws::S3::Model::RequestPayer v) { m_s3Request.SetRequestPayer(v); return *this; }

  inline UploadRequest& SetSSECustomerAlgorithm(Aws::String v) { m_s3Request.SetSSECustomerAlgorithm(std::move(v)); return *this; }

  inline UploadRequest& SetSSECustomerKey(Aws::String v) { m_s3Request.SetSSECustomerKey(std::move(v)); return *this; }

  inline UploadRequest& SetSSECustomerKeyMD5(Aws::String v) { m_s3Request.SetSSECustomerKeyMD5(std::move(v)); return *this; }

  inline UploadRequest& SetSSEKMSEncryptionContext(Aws::String v) { m_s3Request.SetSSEKMSEncryptionContext(std::move(v)); return *this; }

  inline UploadRequest& SetSSEKMSKeyId(Aws::String v) { m_s3Request.SetSSEKMSKeyId(std::move(v)); return *this; }

  inline UploadRequest& SetServerSideEncryption(Aws::S3::Model::ServerSideEncryption v) {
    m_s3Request.SetServerSideEncryption(v);
    return *this;
  }

  inline UploadRequest& SetStorageClass(Aws::S3::Model::StorageClass v) { m_s3Request.SetStorageClass(v); return *this; }

  inline UploadRequest& SetTagging(Aws::String v) { m_s3Request.SetTagging(std::move(v)); return *this; }

  inline UploadRequest& SetWebsiteRedirectLocation(Aws::String v) { m_s3Request.SetWebsiteRedirectLocation(std::move(v)); return *this; }

  // Read the assembled S3 request. Use this to inspect any field set via the setters above,
  // or bucket/key set at construction time.
  inline const Aws::S3::Model::PutObjectRequest& GetS3Request() const { return m_s3Request; }

 private:
  Aws::S3::Model::PutObjectRequest m_s3Request;
  Aws::String m_sourceFilePath;
  Aws::Vector<std::shared_ptr<UploadProgressListener>> m_transferListeners;
  uint64_t m_contentLength = 0;
  bool m_contentLengthHasBeenSet = false;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
