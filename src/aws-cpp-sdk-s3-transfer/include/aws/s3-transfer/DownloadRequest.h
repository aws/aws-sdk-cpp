/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/DownloadProgressListener.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::Download. Carries the inner S3 GetObjectRequest along
 * with the local destination (file path or stream factory) and any request-level progress
 * listeners. The transfer manager parallelizes large objects via ranged GETs internally.
 */
class AWS_S3_TRANSFER_API DownloadRequest final {
 public:
  explicit DownloadRequest(
    Aws::S3::Model::GetObjectRequest s3Request,
    Aws::String destinationFilePath,
    Aws::IOStreamFactory responseStreamFactory,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {})
  : m_s3Request(std::move(s3Request)),
    m_destinationFilePath(std::move(destinationFilePath)),
    m_responseStreamFactory(std::move(responseStreamFactory)),
    m_transferListeners(std::move(transferListeners)) {}

  inline const Aws::S3::Model::GetObjectRequest& GetS3Request() const { return m_s3Request; }
  inline const Aws::String& GetDestinationFilePath() const { return m_destinationFilePath; }
  inline const Aws::IOStreamFactory& GetResponseStreamFactory() const { return m_responseStreamFactory; }
  inline const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }


 private:
  Aws::S3::Model::GetObjectRequest m_s3Request;
  Aws::String m_destinationFilePath;
  Aws::IOStreamFactory m_responseStreamFactory;
  Aws::Vector<std::shared_ptr<DownloadProgressListener>> m_transferListeners;
};

}
}
}
