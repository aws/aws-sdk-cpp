/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/DownloadProgressListener.h>
#include <aws/s3-transfer/DownloadDataReceiver.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <cassert>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::Download. The destination is either a file path or a
 * zero-copy DownloadDataReceiver; the two constructors make that choice exclusive.
 */
class AWS_S3_TRANSFER_API DownloadRequest final {
 public:
  // File download.
  explicit DownloadRequest(
    Aws::S3::Model::GetObjectRequest s3Request,
    Aws::String destinationFilePath,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {})
  : m_s3Request(std::move(s3Request)),
    m_destinationFilePath(std::move(destinationFilePath)),
    m_transferListeners(std::move(transferListeners)) {
    assert(!m_destinationFilePath.empty() && "DownloadRequest destination file path must not be empty");
  }

  // Zero-copy stream download. Each part is delivered to the receiver in object order.
  explicit DownloadRequest(
    Aws::S3::Model::GetObjectRequest s3Request,
    std::shared_ptr<DownloadDataReceiver> dataReceiver,
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners = {})
  : m_s3Request(std::move(s3Request)),
    m_dataReceiver(std::move(dataReceiver)),
    m_transferListeners(std::move(transferListeners)) {
    assert(m_dataReceiver && "DownloadRequest data receiver must not be null");
  }

  inline const Aws::S3::Model::GetObjectRequest& GetS3Request() const { return m_s3Request; }
  inline const Aws::String& GetDestinationFilePath() const { return m_destinationFilePath; }
  inline const std::shared_ptr<DownloadDataReceiver>& GetDownloadDataReceiver() const { return m_dataReceiver; }
  inline const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }


 private:
  Aws::S3::Model::GetObjectRequest m_s3Request;
  Aws::String m_destinationFilePath;
  std::shared_ptr<DownloadDataReceiver> m_dataReceiver;
  Aws::Vector<std::shared_ptr<DownloadProgressListener>> m_transferListeners;
};

}
}
}
