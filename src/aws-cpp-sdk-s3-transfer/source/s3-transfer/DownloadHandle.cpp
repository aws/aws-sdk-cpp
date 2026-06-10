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

  std::shared_future<DownloadOutcome> DownloadHandle::CompletionFuture() const {
    return {};
  }
  void DownloadHandle::Cancel() {

  }
  }
  }
  }
