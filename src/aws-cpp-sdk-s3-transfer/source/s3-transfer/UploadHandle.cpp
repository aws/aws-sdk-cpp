/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

UploadHandle::UploadHandle(Aws::UniquePtr<UploadHandleImpl> impl) : m_impl(std::move(impl)) {}

UploadHandle::~UploadHandle() = default;

UploadHandle::UploadHandle(UploadHandle&&) noexcept = default;
UploadHandle& UploadHandle::operator=(UploadHandle&&) noexcept = default;

std::future<UploadOutcome> UploadHandle::CompletionFuture() {
  assert(m_impl && "CompletionFuture() called on a moved-from UploadHandle");
  if (!m_impl) {
    return {};
  }
  return std::move(m_impl->future);
}

void UploadHandle::Cancel() {
  if (m_impl && m_impl->state) {
    // Signal the async-writes driver (if running) to stop pushing chunks before cancelling.
    m_impl->state->canceled.store(true);
    m_impl->state->CancelMetaRequest();
  }
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
