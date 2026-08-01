/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/DownloadDirectoryHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const DOWNLOAD_DIRECTORY_HANDLE_LOG_TAG = "DownloadDirectoryHandle";

DownloadDirectoryHandle::DownloadDirectoryHandle(Aws::UniquePtr<DownloadDirectoryHandleImpl> impl)
    : m_impl(std::move(impl)) {
  assert(m_impl && "DownloadDirectoryHandle constructed with null impl");
}

DownloadDirectoryHandle::~DownloadDirectoryHandle() = default;

DownloadDirectoryHandle::DownloadDirectoryHandle(DownloadDirectoryHandle&&) noexcept = default;
DownloadDirectoryHandle& DownloadDirectoryHandle::operator=(DownloadDirectoryHandle&&) noexcept = default;

// Precondition: this handle has not been moved from.
std::future<DownloadDirectoryOutcome> DownloadDirectoryHandle::CompletionFuture() {
  if (m_impl == nullptr) {
    AWS_LOGSTREAM_FATAL(DOWNLOAD_DIRECTORY_HANDLE_LOG_TAG,
                        "CompletionFuture called on moved-from DownloadDirectoryHandle");
    assert(false && "CompletionFuture called on moved-from DownloadDirectoryHandle");
    return {};
  }
  return std::move(m_impl->future);
}

// Precondition: this handle has not been moved from.
void DownloadDirectoryHandle::Cancel() {
  AWS_CHECK_PTR(DOWNLOAD_DIRECTORY_HANDLE_LOG_TAG, m_impl);
  // The state is set before the handle is handed out, so it is always present here.
  m_impl->state->CancelAll();
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
