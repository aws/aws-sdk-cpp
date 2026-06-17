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
class AWS_S3_TRANSFER_API UploadRequest final {
 public:
  explicit UploadRequest(
    Aws::S3::Model::PutObjectRequest s3Request,
    Aws::String sourceFilePath,
    std::shared_ptr<Aws::IOStream> body,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {})
  : m_s3Request(std::move(s3Request)),
    m_sourceFilePath(std::move(sourceFilePath)),
    m_body(std::move(body)),
    m_transferListeners(std::move(transferListeners)) {}

  inline const Aws::S3::Model::PutObjectRequest& GetS3Request() const {return m_s3Request; }
  inline const Aws::String& GetSourceFilePath() const {return m_sourceFilePath;}
  inline const std::shared_ptr<Aws::IOStream>& GetBody() const {return m_body;}
  inline const Aws::Vector<std::shared_ptr<UploadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }


 private:
  Aws::S3::Model::PutObjectRequest m_s3Request;
  Aws::String m_sourceFilePath;
  std::shared_ptr<Aws::IOStream> m_body;
  Aws::Vector<std::shared_ptr<UploadProgressListener>> m_transferListeners;
};

}
}
}
