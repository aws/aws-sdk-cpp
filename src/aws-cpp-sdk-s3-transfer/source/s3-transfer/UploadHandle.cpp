/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

static const char* const UPLOAD_HANDLE_LOG_TAG = "UploadHandle";

UploadHandle::UploadHandle(Aws::UniquePtr<UploadHandleImpl> impl) : m_impl(std::move(impl)) {
  assert(m_impl && "UploadHandle constructed with null impl");
}

UploadHandle::~UploadHandle() = default;

UploadHandle::UploadHandle(UploadHandle&&) noexcept = default;
UploadHandle& UploadHandle::operator=(UploadHandle&&) noexcept = default;

// Precondition: this handle has not been moved from.
std::future<UploadOutcome> UploadHandle::CompletionFuture() {
  if (m_impl == nullptr) {
    AWS_LOGSTREAM_FATAL(UPLOAD_HANDLE_LOG_TAG, "CompletionFuture called on moved-from UploadHandle");
    assert(false && "CompletionFuture called on moved-from UploadHandle");
    return {};
  }
  return std::move(m_impl->future);
}

// Precondition: this handle has not been moved from.
void UploadHandle::Cancel() {
  AWS_CHECK_PTR(UPLOAD_HANDLE_LOG_TAG, m_impl);
  AWS_CHECK_PTR(UPLOAD_HANDLE_LOG_TAG, m_impl->state);
  // Signal the async-writes driver (if running) to stop pushing chunks before cancelling.
  m_impl->state->canceled.store(true);
  m_impl->state->CancelMetaRequest();
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
