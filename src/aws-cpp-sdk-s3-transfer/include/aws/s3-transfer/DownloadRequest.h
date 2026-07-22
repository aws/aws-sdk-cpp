/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/s3-transfer/DownloadDataReceiver.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/ChecksumMode.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/RequestPayer.h>
#include <cassert>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::Download. Bucket, key, and the download destination (either
 * a file path or a zero-copy DownloadDataReceiver) are required at construction time; the two
 * constructors make the destination-kind choice exclusive so an invalid request is
 * unconstructable. All other S3-level fields (version id, range constraints, SSE, etc.) are
 * optional and set via the setters below; the customer does not construct a GetObjectRequest.
 * Reads go through GetS3Request().
 */
class AWS_S3_TRANSFER_API DownloadRequest final {
 public:
  // File download.
  explicit DownloadRequest(
    Aws::String bucket,
    Aws::String key,
    Aws::String destinationFilePath,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {})
  : m_destinationFilePath(std::move(destinationFilePath)),
    m_transferListeners(std::move(transferListeners)) {
    assert(!bucket.empty() && "DownloadRequest bucket must not be empty");
    assert(!key.empty() && "DownloadRequest key must not be empty");
    assert(!m_destinationFilePath.empty() && "DownloadRequest destination file path must not be empty");
    m_s3Request.SetBucket(std::move(bucket));
    m_s3Request.SetKey(std::move(key));
  }

  // Zero-copy stream download. Each part is delivered to the receiver in object order.
  explicit DownloadRequest(
    Aws::String bucket,
    Aws::String key,
    std::shared_ptr<DownloadDataReceiver> dataReceiver,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {})
  : m_dataReceiver(std::move(dataReceiver)),
    m_transferListeners(std::move(transferListeners)) {
    assert(!bucket.empty() && "DownloadRequest bucket must not be empty");
    assert(!key.empty() && "DownloadRequest key must not be empty");
    assert(m_dataReceiver && "DownloadRequest data receiver must not be null");
    m_s3Request.SetBucket(std::move(bucket));
    m_s3Request.SetKey(std::move(key));
  }

  inline const Aws::String& GetDestinationFilePath() const { return m_destinationFilePath; }
  inline const std::shared_ptr<DownloadDataReceiver>& GetDownloadDataReceiver() const { return m_dataReceiver; }
  inline const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }

  // Bucket and key are set at construction time and cannot be changed; see the constructors above.
  // Read these fields back via GetS3Request().
  inline DownloadRequest& SetChecksumMode(Aws::S3::Model::ChecksumMode v) { m_s3Request.SetChecksumMode(v); return *this; }

  inline DownloadRequest& SetExpectedBucketOwner(Aws::String v) { m_s3Request.SetExpectedBucketOwner(std::move(v)); return *this; }

  inline DownloadRequest& SetIfMatch(Aws::String v) { m_s3Request.SetIfMatch(std::move(v)); return *this; }

  inline DownloadRequest& SetIfModifiedSince(Aws::Utils::DateTime v) { m_s3Request.SetIfModifiedSince(std::move(v)); return *this; }

  inline DownloadRequest& SetIfNoneMatch(Aws::String v) { m_s3Request.SetIfNoneMatch(std::move(v)); return *this; }

  inline DownloadRequest& SetIfUnmodifiedSince(Aws::Utils::DateTime v) { m_s3Request.SetIfUnmodifiedSince(std::move(v)); return *this; }

  // HTTP Range header (e.g. "bytes=0-999"). Not in the SEP field list but needed for byte-range
  // downloads.
  inline DownloadRequest& SetRange(Aws::String v) { m_s3Request.SetRange(std::move(v)); return *this; }

  inline DownloadRequest& SetRequestPayer(Aws::S3::Model::RequestPayer v) { m_s3Request.SetRequestPayer(v); return *this; }

  inline DownloadRequest& SetResponseCacheControl(Aws::String v) { m_s3Request.SetResponseCacheControl(std::move(v)); return *this; }

  inline DownloadRequest& SetResponseContentDisposition(Aws::String v) { m_s3Request.SetResponseContentDisposition(std::move(v)); return *this; }

  inline DownloadRequest& SetResponseContentEncoding(Aws::String v) { m_s3Request.SetResponseContentEncoding(std::move(v)); return *this; }

  inline DownloadRequest& SetResponseContentLanguage(Aws::String v) { m_s3Request.SetResponseContentLanguage(std::move(v)); return *this; }

  inline DownloadRequest& SetResponseContentType(Aws::String v) { m_s3Request.SetResponseContentType(std::move(v)); return *this; }

  inline DownloadRequest& SetResponseExpires(Aws::Utils::DateTime v) { m_s3Request.SetResponseExpires(std::move(v)); return *this; }

  inline DownloadRequest& SetSSECustomerAlgorithm(Aws::String v) { m_s3Request.SetSSECustomerAlgorithm(std::move(v)); return *this; }

  inline DownloadRequest& SetSSECustomerKey(Aws::String v) { m_s3Request.SetSSECustomerKey(std::move(v)); return *this; }

  inline DownloadRequest& SetSSECustomerKeyMD5(Aws::String v) { m_s3Request.SetSSECustomerKeyMD5(std::move(v)); return *this; }

  inline DownloadRequest& SetVersionId(Aws::String v) { m_s3Request.SetVersionId(std::move(v)); return *this; }

  // Read the assembled S3 request. Use this to inspect any field set via the setters above,
  // or bucket/key set at construction time.
  inline const Aws::S3::Model::GetObjectRequest& GetS3Request() const { return m_s3Request; }

 private:
  Aws::S3::Model::GetObjectRequest m_s3Request;
  Aws::String m_destinationFilePath;
  std::shared_ptr<DownloadDataReceiver> m_dataReceiver;
  Aws::Vector<std::shared_ptr<DownloadProgressListener>> m_transferListeners;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
