/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/core/client/AWSError.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

struct DownloadTransferState;

namespace Internal {

/**
 * Holds every field of a DownloadRequest. The derived classes carry the state specific to their
 * destination and own the behavior that differs between them; they deliberately name no CRT types,
 * so translating a request into CRT calls stays entirely inside CrtOperations.
 */
class AWS_CORE_LOCAL DownloadRequestImpl {
 public:
  DownloadRequestImpl(Aws::String bucket,
                      Aws::String key,
                      Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners);
  virtual ~DownloadRequestImpl() = default;

  DownloadRequestImpl(const DownloadRequestImpl&) = delete;
  DownloadRequestImpl& operator=(const DownloadRequestImpl&) = delete;
  DownloadRequestImpl(DownloadRequestImpl&&) = delete;
  DownloadRequestImpl& operator=(DownloadRequestImpl&&) = delete;

  virtual Aws::Client::AWSError<Aws::S3::S3Errors> Validate() const {
    return Aws::Client::AWSError<Aws::S3::S3Errors>();
  }

  // Runs once the transfer succeeds; the file destination promotes its temp file here.
  virtual Aws::Client::AWSError<Aws::S3::S3Errors> FinalizeOnSuccess(
      const std::shared_ptr<DownloadTransferState>& state) const = 0;

  // Runs on failure; the file destination removes the temp file the CRT left behind.
  virtual void CleanupOnFailure(const std::shared_ptr<DownloadTransferState>& state) const = 0;

  // Empty unless this request downloads to a file, in which case the CRT writes the file directly.
  virtual const Aws::String& GetDestinationFilePath() const;
  virtual const Aws::String& GetTempFilePath() const;
  // Null unless the customer supplied a receiver, in which case the CRT delivers body chunks to it.
  virtual const std::shared_ptr<DownloadDataReceiver>& GetDataReceiver() const;

  const Aws::Vector<std::shared_ptr<DownloadProgressListener>>& GetTransferListeners() const { return m_transferListeners; }
  const Aws::S3::Model::GetObjectRequest& GetS3Request() const { return m_s3Request; }
  Aws::S3::Model::GetObjectRequest& MutableS3Request() { return m_s3Request; }

 protected:
  Aws::S3::Model::GetObjectRequest m_s3Request;
  Aws::Vector<std::shared_ptr<DownloadProgressListener>> m_transferListeners;
};

class AWS_CORE_LOCAL FileDownloadImpl final : public DownloadRequestImpl {
 public:
  FileDownloadImpl(Aws::String bucket,
                   Aws::String key,
                   Aws::String destinationFilePath,
                   Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners);

  Aws::Client::AWSError<Aws::S3::S3Errors> Validate() const override;
  Aws::Client::AWSError<Aws::S3::S3Errors> FinalizeOnSuccess(
      const std::shared_ptr<DownloadTransferState>& state) const override;
  void CleanupOnFailure(const std::shared_ptr<DownloadTransferState>& state) const override;
  const Aws::String& GetDestinationFilePath() const override { return m_destinationFilePath; }
  const Aws::String& GetTempFilePath() const override { return m_tempFilePath; }

 private:
  Aws::String m_destinationFilePath;
  Aws::String m_tempFilePath;
};

class AWS_CORE_LOCAL StreamDownloadImpl final : public DownloadRequestImpl {
 public:
  StreamDownloadImpl(Aws::String bucket,
                     Aws::String key,
                     std::shared_ptr<DownloadDataReceiver> dataReceiver,
                     Aws::Vector<std::shared_ptr<DownloadProgressListener>> transferListeners);

  Aws::Client::AWSError<Aws::S3::S3Errors> FinalizeOnSuccess(
      const std::shared_ptr<DownloadTransferState>& state) const override;
  void CleanupOnFailure(const std::shared_ptr<DownloadTransferState>& state) const override;
  const std::shared_ptr<DownloadDataReceiver>& GetDataReceiver() const override { return m_dataReceiver; }

 private:
  std::shared_ptr<DownloadDataReceiver> m_dataReceiver;
};

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
