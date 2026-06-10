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
class AWS_S3_TRANSFER_API DownloadRequest {
 public:
  inline const Aws::S3::Model::GetObjectRequest& GetS3Request() const { return m_s3Request; }
  inline bool S3RequestHasBeenSet() const { return m_s3RequestHasBeenSet; }
  template <typename S3RequestT = Aws::S3::Model::GetObjectRequest>
  void SetS3Request(S3RequestT&& val) {
    m_s3RequestHasBeenSet = true;
    m_s3Request = std::forward<S3RequestT>(val);
  }
  template <typename S3RequestT = Aws::S3::Model::GetObjectRequest>
  DownloadRequest& WithS3Request(S3RequestT&& value) {
    SetS3Request(std::forward<S3RequestT>(value));
    return *this;
  }

  inline const Aws::String& GetDestinationFilePath() const { return m_destinationFilePath; }
  inline bool DestinationFilePathHasBeenSet() const { return m_destinationFilePathHasBeenSet; }
  template <typename DestinationFilePathT = Aws::String>
  void SetDestinationFilePath(DestinationFilePathT&& value) {
    m_destinationFilePathHasBeenSet = true;
    m_destinationFilePath = std::forward<DestinationFilePathT>(value);
  }
  template <typename DestinationFilePathT = Aws::String>
  DownloadRequest& WithDestinationFilePath(DestinationFilePathT&& value) {
    SetDestinationFilePath(std::forward<DestinationFilePathT>(value));
    return *this;
  }

  inline const Aws::IOStreamFactory& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  inline void SetBody(const Aws::IOStreamFactory& val) {
    m_bodyHasBeenSet = true;
    m_body = val;
  }
  inline DownloadRequest& WithBody(const Aws::IOStreamFactory& val) {
    SetBody(val);
    return *this;
  }

  inline const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }
  inline bool TransferListenersHasBeenSet() const { return m_transferListenersHasBeenSet; }
  inline void SetTransferListeners(const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& val) {
    m_transferListenersHasBeenSet = true;
    m_transferListeners = val;
  }
  inline DownloadRequest& WithTransferListeners(const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& val) {
    SetTransferListeners(val);
    return *this;
  }
  inline DownloadRequest& AddTransferListener(const std::shared_ptr<DownloadProgressListener>& listener) {
    m_transferListenersHasBeenSet = true;
    m_transferListeners.push_back(listener);
    return *this;
  }

 private:
  Aws::S3::Model::GetObjectRequest m_s3Request;
  Aws::String m_destinationFilePath;
  Aws::IOStreamFactory m_body;
  Aws::Vector<std::shared_ptr<DownloadProgressListener>> m_transferListeners;
  bool m_s3RequestHasBeenSet = false;
  bool m_destinationFilePathHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_transferListenersHasBeenSet = false;
};

}
}
}
