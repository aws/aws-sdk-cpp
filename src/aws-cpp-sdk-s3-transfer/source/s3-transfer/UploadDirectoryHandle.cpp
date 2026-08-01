/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/UploadDirectoryHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const UPLOAD_DIRECTORY_HANDLE_LOG_TAG = "UploadDirectoryHandle";

UploadDirectoryHandle::UploadDirectoryHandle(Aws::UniquePtr<UploadDirectoryHandleImpl> impl)
    : m_impl(std::move(impl)) {
  assert(m_impl && "UploadDirectoryHandle constructed with null impl");
}

UploadDirectoryHandle::~UploadDirectoryHandle() = default;

UploadDirectoryHandle::UploadDirectoryHandle(UploadDirectoryHandle&&) noexcept = default;
UploadDirectoryHandle& UploadDirectoryHandle::operator=(UploadDirectoryHandle&&) noexcept = default;

// Precondition: this handle has not been moved from.
std::future<UploadDirectoryOutcome> UploadDirectoryHandle::CompletionFuture() {
  if (m_impl == nullptr) {
    AWS_LOGSTREAM_FATAL(UPLOAD_DIRECTORY_HANDLE_LOG_TAG,
                        "CompletionFuture called on moved-from UploadDirectoryHandle");
    assert(false && "CompletionFuture called on moved-from UploadDirectoryHandle");
    return {};
  }
  return std::move(m_impl->future);
}

// Precondition: this handle has not been moved from.
void UploadDirectoryHandle::Cancel() {
  AWS_CHECK_PTR(UPLOAD_DIRECTORY_HANDLE_LOG_TAG, m_impl);
  // The state is set before the handle is handed out, so it is always present here.
  m_impl->state->CancelAll();
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
