/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

DownloadHandle::DownloadHandle(Aws::UniquePtr<DownloadHandleImpl> impl) : m_impl(std::move(impl)) {}

DownloadHandle::~DownloadHandle() = default;

DownloadHandle::DownloadHandle(DownloadHandle&&) noexcept = default;
DownloadHandle& DownloadHandle::operator=(DownloadHandle&&) noexcept = default;

std::future<DownloadOutcome> DownloadHandle::CompletionFuture() {
  assert(m_impl && "CompletionFuture() called on a moved-from DownloadHandle");
  if (!m_impl) {
    return {};
  }
  return std::move(m_impl->future);
}

void DownloadHandle::Cancel() {
  if (m_impl && m_impl->state) {
    m_impl->state->canceled.store(true);
    m_impl->state->CancelMetaRequest();
  }
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
