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
  UploadHandle::UploadHandle() = default;

  UploadHandle::UploadHandle(UploadHandle&&) noexcept = default;
  UploadHandle& UploadHandle::operator=(UploadHandle&&) noexcept = default;

  std::future<UploadOutcome> UploadHandle::CompletionFuture() {
    return {};
  }
  void UploadHandle::Cancel() {

  }
  }
  }
  }
