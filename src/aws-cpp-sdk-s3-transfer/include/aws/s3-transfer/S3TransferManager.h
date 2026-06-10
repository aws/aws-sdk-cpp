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
#include <aws/core/utils/memory/AWSMemory.h>
namespace Aws {
  namespace S3 {
  namespace Transfer {
  class S3TransferManagerImpl;

  /**
   * High-level S3 transfer client backed by the AWS Common Runtime. Performs single-file
   * uploads and downloads, automatically using multipart transfers for objects larger than
   * the configured threshold. Customers hold an instance via shared_ptr; the manager owns
   * the underlying CRT client and is not copyable or movable.
   */
  class AWS_S3_TRANSFER_API S3TransferManager {
  public:
    /**
     * Initialize the S3TransferManager with the given configuration. The configuration
     * is used to construct the underlying CRT client and is not retained after construction.
     */
    explicit S3TransferManager(const S3TransferManagerConfiguration& config);

    ~S3TransferManager();

    S3TransferManager(const S3TransferManager&) = delete;
    S3TransferManager& operator=(const S3TransferManager&) = delete;
    S3TransferManager(S3TransferManager&&) = delete;
    S3TransferManager& operator=(S3TransferManager&&) = delete;

    /**
     * Begin uploading the object described by request. Returns immediately with a handle
     * that can be used to wait for completion or to cancel the in-flight transfer.
     */
    UploadHandle Upload(const UploadRequest& request);

    /**
     * Begin downloading the object described by request. Returns immediately with a handle
     * that can be used to wait for completion or to cancel the in-flight transfer.
     */
    DownloadHandle Download(const DownloadRequest& request);

  private:
    Aws::UniquePtr<S3TransferManagerImpl> m_impl;
  };
  }
  }
  }



