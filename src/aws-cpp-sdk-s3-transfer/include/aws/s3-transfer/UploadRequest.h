/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/UploadProgressListener.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::Upload. Carries the inner S3 PutObjectRequest along
 * with the local source (file path or stream) and any request-level progress listeners.
 * The transfer manager chooses between a single PutObject and a multipart upload based on
 * the configured threshold.
 */
class AWS_S3_TRANSFER_API UploadRequest {
 public:
  inline const Aws::S3::Model::PutObjectRequest& GetS3Request() const { return m_s3Request; }
  inline bool S3RequestHasBeenSet() const { return m_s3RequestHasBeenSet; }
  template <typename S3RequestT = Aws::S3::Model::PutObjectRequest>
  void SetS3Request(S3RequestT&& val) {
    m_s3RequestHasBeenSet = true;
    m_s3Request = std::forward<S3RequestT>(val);
  }
  template <typename S3RequestT = Aws::S3::Model::PutObjectRequest>
  UploadRequest& WithS3Request(S3RequestT&& value) {
    SetS3Request(std::forward<S3RequestT>(value));
    return *this;
  }

  inline const Aws::String& GetSourceFilePath() const { return m_sourceFilePath; }
  inline bool SourceFilePathHasBeenSet() const { return m_sourceFilePathHasBeenSet; }
  template <typename SourceFilePathT = Aws::String>
  void SetSourceFilePath(SourceFilePathT&& value) {
    m_sourceFilePathHasBeenSet = true;
    m_sourceFilePath = std::forward<SourceFilePathT>(value);
  }
  template <typename SourceFilePathT = Aws::String>
  UploadRequest& WithSourceFilePath(SourceFilePathT&& value) {
    SetSourceFilePath(std::forward<SourceFilePathT>(value));
    return *this;
  }

  inline const std::shared_ptr<Aws::IOStream>& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  inline void SetBody(const std::shared_ptr<Aws::IOStream>& val) {
    m_bodyHasBeenSet = true;
    m_body = val;
  }
  inline UploadRequest& WithBody(const std::shared_ptr<Aws::IOStream>& val) {
    SetBody(val);
    return *this;
  }

  inline const Aws::Vector<std::shared_ptr<UploadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }
  inline bool TransferListenersHasBeenSet() const { return m_transferListenersHasBeenSet; }
  inline void SetTransferListeners(const Aws::Vector<std::shared_ptr<UploadProgressListener>>& val) {
    m_transferListenersHasBeenSet = true;
    m_transferListeners = val;
  }
  inline UploadRequest& WithTransferListeners(const Aws::Vector<std::shared_ptr<UploadProgressListener>>& val) {
    SetTransferListeners(val);
    return *this;
  }
  inline UploadRequest& AddTransferListener(const std::shared_ptr<UploadProgressListener>& listener) {
    m_transferListenersHasBeenSet = true;
    m_transferListeners.push_back(listener);
    return *this;
  }

 private:
  Aws::S3::Model::PutObjectRequest m_s3Request;
  Aws::String m_sourceFilePath;
  std::shared_ptr<Aws::IOStream> m_body;
  Aws::Vector<std::shared_ptr<UploadProgressListener>> m_transferListeners;
  bool m_s3RequestHasBeenSet = false;
  bool m_sourceFilePathHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_transferListenersHasBeenSet = false;
};

}
}
}
