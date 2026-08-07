/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/TransferHandle.h>

#include <aws/s3-transfer/UploadHandle.h>
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/s3-transfer/UploadDirectoryHandle.h>
#include <aws/s3-transfer/DownloadDirectoryHandle.h>
#include <aws/s3-transfer/internal/HandleImpls.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <cassert>

namespace Aws {
namespace S3 {
namespace Transfer {

template <typename ImplT, typename OutcomeT>
TransferHandle<ImplT, OutcomeT>::TransferHandle(Aws::UniquePtr<ImplT> impl, const char* logTag)
    : m_impl(std::move(impl)), m_logTag(logTag) {
  assert(m_impl && "TransferHandle constructed with null impl");
}

template <typename ImplT, typename OutcomeT>
TransferHandle<ImplT, OutcomeT>::~TransferHandle() = default;

template <typename ImplT, typename OutcomeT>
TransferHandle<ImplT, OutcomeT>::TransferHandle(TransferHandle&&) noexcept = default;

template <typename ImplT, typename OutcomeT>
TransferHandle<ImplT, OutcomeT>& TransferHandle<ImplT, OutcomeT>::operator=(TransferHandle&&) noexcept =
    default;

// Precondition: this handle has not been moved from.
template <typename ImplT, typename OutcomeT>
std::future<OutcomeT> TransferHandle<ImplT, OutcomeT>::CompletionFuture() {
  if (m_impl == nullptr) {
    AWS_LOGSTREAM_FATAL(m_logTag, "CompletionFuture called on moved-from transfer handle");
    assert(false && "CompletionFuture called on moved-from transfer handle");
    return {};
  }
  return std::move(m_impl->future);
}

// Precondition: this handle has not been moved from. What the cancel does is the impl's business —
// a single-file transfer cancels its meta request, a directory transfer cancels its children.
template <typename ImplT, typename OutcomeT>
void TransferHandle<ImplT, OutcomeT>::Cancel() {
  AWS_CHECK_PTR(m_logTag, m_impl);
  m_impl->Cancel();
}

// One definition per public handle; the thin final subclasses in the headers derive from these. The
// export macro on each instantiation gives the base's members a home in this library's exported ABI.
template class AWS_S3_TRANSFER_API TransferHandle<UploadHandleImpl, UploadOutcome>;
template class AWS_S3_TRANSFER_API TransferHandle<DownloadHandleImpl, DownloadOutcome>;
template class AWS_S3_TRANSFER_API TransferHandle<UploadDirectoryHandleImpl, UploadDirectoryOutcome>;
template class AWS_S3_TRANSFER_API TransferHandle<DownloadDirectoryHandleImpl, DownloadDirectoryOutcome>;

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
