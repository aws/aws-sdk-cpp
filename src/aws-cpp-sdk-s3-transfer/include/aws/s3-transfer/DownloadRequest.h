/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/s3-transfer/DownloadDataReceiver.h>
#include <aws/core/client/AWSError.h>
#include <aws/crt/Optional.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/ChecksumMode.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/RequestPayer.h>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

struct DownloadTransferState;

namespace Internal {
class DownloadRequestImpl;

using OptionalError = Aws::Crt::Optional<Aws::Client::AWSError<Aws::S3::S3Errors>>;
}

/**
 * Request type for S3TransferManager::Download. All state lives behind m_impl, whose concrete type
 * is chosen by the constructor: a destination file path selects the file strategy, a data receiver
 * the stream strategy. Move-only, because that impl is uniquely owned; pass with std::move.
 */
class AWS_S3_TRANSFER_API DownloadRequest final {
 public:
  DownloadRequest(Aws::String bucket,
                  Aws::String key,
                  Aws::String destinationFilePath,
                  Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {});

  DownloadRequest(Aws::String bucket,
                  Aws::String key,
                  std::shared_ptr<DownloadDataReceiver> dataReceiver,
                  Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {});

  ~DownloadRequest();

  const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& GetTransferListeners() const;
  // Empty for a receiver-backed download; otherwise where the object lands once it completes.
  const Aws::String& GetDestinationFilePath() const;
  const Aws::String& GetTempFilePath() const;
  // Null for a file-backed download; otherwise the sink the CRT delivers body chunks to.
  const std::shared_ptr<DownloadDataReceiver>& GetDataReceiver() const;

  DownloadRequest& SetChecksumMode(Aws::S3::Model::ChecksumMode v);
  DownloadRequest& SetExpectedBucketOwner(Aws::String v);
  DownloadRequest& SetIfMatch(Aws::String v);
  DownloadRequest& SetIfModifiedSince(Aws::Utils::DateTime v);
  DownloadRequest& SetIfNoneMatch(Aws::String v);
  DownloadRequest& SetIfUnmodifiedSince(Aws::Utils::DateTime v);
  DownloadRequest& SetRange(Aws::String v);
  DownloadRequest& SetRequestPayer(Aws::S3::Model::RequestPayer v);
  DownloadRequest& SetResponseCacheControl(Aws::String v);
  DownloadRequest& SetResponseContentDisposition(Aws::String v);
  DownloadRequest& SetResponseContentEncoding(Aws::String v);
  DownloadRequest& SetResponseContentLanguage(Aws::String v);
  DownloadRequest& SetResponseContentType(Aws::String v);
  DownloadRequest& SetResponseExpires(Aws::Utils::DateTime v);
  DownloadRequest& SetSSECustomerAlgorithm(Aws::String v);
  DownloadRequest& SetSSECustomerKey(Aws::String v);
  DownloadRequest& SetSSECustomerKeyMD5(Aws::String v);
  DownloadRequest& SetVersionId(Aws::String v);

  const Aws::S3::Model::GetObjectRequest& GetS3Request() const;

  Internal::OptionalError Validate() const;
  Internal::OptionalError FinalizeOnSuccess(
      const std::shared_ptr<DownloadTransferState>& state) const;
  Internal::OptionalError CleanupOnFailure(const std::shared_ptr<DownloadTransferState>& state) const;

 private:
  std::shared_ptr<Internal::DownloadRequestImpl> m_impl;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
