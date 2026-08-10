/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/S3TransferManagerConfiguration.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/client/AWSError.h>
#include <aws/s3/S3EndpointProvider.h>
#include <aws/s3/S3Errors.h>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

class S3TransferManagerImpl;

/**
 * Customers construct an instance directly. The manager owns the underlying CRT client; it is
 * neither copyable nor movable. If construction cannot produce a usable manager (e.g. the CRT
 * S3 client fails to build), Upload()/Download() fail immediately via the returned handle,
 * whose future carries the specific initialization error.
 */
class AWS_S3_TRANSFER_API S3TransferManager final {
 public:
  /**
   * Initializes the transfer manager with the DefaultCredentialProviderChain and an optional
   * config. If config is not specified, it will be initialized to default values.
   */
  S3TransferManager(const S3TransferManagerConfiguration& config = S3TransferManagerConfiguration(),
                    std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> endpointProvider =
                        Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>("S3TransferManager"));

  /**
   * Initializes the transfer manager with the supplied static credentials and an optional config.
   */
  S3TransferManager(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> endpointProvider =
                        Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>("S3TransferManager"),
                    const S3TransferManagerConfiguration& config = S3TransferManagerConfiguration());

  /**
   * Initializes the transfer manager with the supplied credentials provider and an optional config.
   */
  S3TransferManager(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<Aws::S3::Endpoint::S3EndpointProviderBase> endpointProvider =
                        Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>("S3TransferManager"),
                    const S3TransferManagerConfiguration& config = S3TransferManagerConfiguration());

  ~S3TransferManager();

  S3TransferManager(const S3TransferManager&) = delete;
  S3TransferManager& operator=(const S3TransferManager&) = delete;
  S3TransferManager(S3TransferManager&&) noexcept = delete;
  S3TransferManager& operator=(S3TransferManager&&) noexcept = delete;

  /**
   * Begin uploading the object described by request. Returns immediately with a handle that can be
   * used to wait for completion or to cancel the in-flight transfer.
   */
  UploadHandle Upload(const UploadRequest& request);

  /**
   * Begin downloading the object described by request. Returns immediately with a handle that can
   * be used to wait for completion or to cancel the in-flight transfer.
   */
  DownloadHandle Download(const DownloadRequest& request);

 private:
  Aws::UniquePtr<S3TransferManagerImpl> m_impl;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
