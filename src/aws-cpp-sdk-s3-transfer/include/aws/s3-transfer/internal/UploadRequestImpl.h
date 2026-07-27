/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/core/client/AWSError.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

struct UploadTransferState;

namespace Internal {

/**
 * Holds every field of an UploadRequest. The derived classes carry the state specific to their
 * source and answer what that source is; they deliberately name no CRT types, so translating a
 * request into CRT calls stays entirely inside CrtOperations.
 */
class AWS_CORE_LOCAL UploadRequestImpl {
 public:
  UploadRequestImpl(Aws::String bucket,
                    Aws::String key,
                    Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners);
  virtual ~UploadRequestImpl() = default;

  UploadRequestImpl(const UploadRequestImpl&) = delete;
  UploadRequestImpl& operator=(const UploadRequestImpl&) = delete;
  UploadRequestImpl(UploadRequestImpl&&) = delete;
  UploadRequestImpl& operator=(UploadRequestImpl&&) = delete;

  // Validates the source and seeds any state the transfer needs before dispatch.
  virtual Aws::Client::AWSError<Aws::S3::S3Errors> PrepareTransferState(
      const std::shared_ptr<UploadTransferState>& state) const = 0;

  // Empty unless this request uploads from a file, in which case the CRT reads the file directly.
  virtual const Aws::String& GetSourceFilePath() const;
  // True when the CRT needs a body adapter built for the stream, and a Content-Length declared.
  virtual bool IsStreamUpload() const { return false; }

  const Aws::Vector<std::shared_ptr<UploadProgressListener>>& GetTransferListeners() const { return m_transferListeners; }
  const Aws::Crt::Optional<uint64_t>& GetContentLength() const { return m_declaredLength; }
  void SetContentLength(uint64_t contentLength) { m_declaredLength = contentLength; }
  const Aws::S3::Model::PutObjectRequest& GetS3Request() const { return m_s3Request; }
  Aws::S3::Model::PutObjectRequest& MutableS3Request() { return m_s3Request; }

 protected:
  Aws::S3::Model::PutObjectRequest m_s3Request;
  Aws::Vector<std::shared_ptr<UploadProgressListener>> m_transferListeners;
  Aws::Crt::Optional<uint64_t> m_declaredLength;
};

class AWS_CORE_LOCAL FileUploadImpl final : public UploadRequestImpl {
 public:
  FileUploadImpl(Aws::String bucket,
                 Aws::String key,
                 Aws::String sourceFilePath,
                 Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners);

  Aws::Client::AWSError<Aws::S3::S3Errors> PrepareTransferState(
      const std::shared_ptr<UploadTransferState>& state) const override;
  const Aws::String& GetSourceFilePath() const override { return m_sourceFilePath; }

 private:
  Aws::String m_sourceFilePath;
};

class AWS_CORE_LOCAL StreamUploadImpl final : public UploadRequestImpl {
 public:
  StreamUploadImpl(Aws::String bucket,
                   Aws::String key,
                   std::shared_ptr<Aws::IOStream> body,
                   Aws::Vector<std::shared_ptr<UploadProgressListener>> transferListeners);

  Aws::Client::AWSError<Aws::S3::S3Errors> PrepareTransferState(
      const std::shared_ptr<UploadTransferState>& state) const override;
  bool IsStreamUpload() const override { return true; }
};

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
