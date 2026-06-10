/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
   * SPDX-License-Identifier: Apache-2.0.
   */
  #include <aws/s3-transfer/UploadHandle.h>

  namespace Aws {
  namespace S3 {
  namespace Transfer {
  class UploadHandleImpl {

  };
  UploadHandle::~UploadHandle() = default;

  std::shared_future<UploadResponse> UploadHandle::CompletionFuture() const {
    return {};
  }
  void UploadHandle::Cancel() {

  }
  }
  }
  }
