/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
   * SPDX-License-Identifier: Apache-2.0.
   */
  #include <aws/s3-transfer/DownloadHandle.h>

  namespace Aws {
  namespace S3 {
  namespace Transfer {
  class DownloadHandleImpl {

  };
  DownloadHandle::~DownloadHandle() = default;
  DownloadHandle::DownloadHandle() = default;
  DownloadHandle::DownloadHandle(DownloadHandle&&) noexcept = default;
  DownloadHandle& DownloadHandle::operator=(DownloadHandle&&) noexcept = default;

  std::future<DownloadOutcome> DownloadHandle::CompletionFuture() {
    return {};
  }
  void DownloadHandle::Cancel() {

  }
  }
  }
  }
