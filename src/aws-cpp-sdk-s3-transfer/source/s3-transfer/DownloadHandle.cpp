/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const DOWNLOAD_HANDLE_LOG_TAG = "DownloadHandle";

DownloadHandle::DownloadHandle(Aws::UniquePtr<DownloadHandleImpl> impl) : m_impl(std::move(impl)) {
  assert(m_impl && "DownloadHandle constructed with null impl");
}

DownloadHandle::~DownloadHandle() = default;

DownloadHandle::DownloadHandle(DownloadHandle&&) noexcept = default;
DownloadHandle& DownloadHandle::operator=(DownloadHandle&&) noexcept = default;

// Precondition: this handle has not been moved from.
std::future<DownloadOutcome> DownloadHandle::CompletionFuture() {
  if (m_impl == nullptr) {
    AWS_LOGSTREAM_FATAL(DOWNLOAD_HANDLE_LOG_TAG, "CompletionFuture called on moved-from DownloadHandle");
    assert(false && "CompletionFuture called on moved-from DownloadHandle");
    return {};
  }
  return std::move(m_impl->future);
}

// Precondition: this handle has not been moved from.
void DownloadHandle::Cancel() {
  AWS_CHECK_PTR(DOWNLOAD_HANDLE_LOG_TAG, m_impl);
  AWS_CHECK_PTR(DOWNLOAD_HANDLE_LOG_TAG, m_impl->state);
  m_impl->state->canceled.store(true);
  m_impl->state->CancelMetaRequest();
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
