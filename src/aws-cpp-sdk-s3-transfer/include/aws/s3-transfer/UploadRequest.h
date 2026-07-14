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
#include <cassert>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Request type for S3TransferManager::Upload. The upload source is either a file path or a stream
 * body; the two constructors make that choice exclusive.
 */
class AWS_S3_TRANSFER_API UploadRequest final {
 public:
  // File upload.
  explicit UploadRequest(
    Aws::S3::Model::PutObjectRequest s3Request,
    Aws::String sourceFilePath,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {})
  : m_s3Request(std::move(s3Request)),
    m_sourceFilePath(std::move(sourceFilePath)),
    m_transferListeners(std::move(transferListeners)) {
    assert(!m_sourceFilePath.empty() && "UploadRequest file source path must not be empty");
  }

  // Stream upload. For a non-seekable stream, call SetContentLength if the length is known.
  explicit UploadRequest(
    Aws::S3::Model::PutObjectRequest s3Request,
    std::shared_ptr<Aws::IOStream> body,
    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners = {})
  : m_s3Request(std::move(s3Request)),
    m_transferListeners(std::move(transferListeners)) {
    assert(body && "UploadRequest stream body must not be null");
    m_s3Request.SetBody(body);
  }

  inline const Aws::S3::Model::PutObjectRequest& GetS3Request() const { return m_s3Request; }
  inline const Aws::String& GetSourceFilePath() const { return m_sourceFilePath; }
  inline std::shared_ptr<Aws::IOStream> GetBody() const { return m_s3Request.GetBody(); }
  inline const Aws::Vector<std::shared_ptr<UploadProgressListener>>& GetTransferListeners() const {
    return m_transferListeners;
  }

  // Content length of the stream body, in bytes. Only meaningful for stream uploads: supply it
  // when the body is not seekable so the transfer manager need not measure the stream.
  inline uint64_t GetContentLength() const { return m_contentLength; }
  inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
  inline void SetContentLength(uint64_t contentLength) {
    m_contentLength = contentLength;
    m_contentLengthHasBeenSet = true;
  }


 private:
  Aws::S3::Model::PutObjectRequest m_s3Request;
  Aws::String m_sourceFilePath;
  Aws::Vector<std::shared_ptr<UploadProgressListener>> m_transferListeners;
  uint64_t m_contentLength = 0;
  bool m_contentLengthHasBeenSet = false;
};

}
}
}
