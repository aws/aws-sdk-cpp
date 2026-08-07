/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <future>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Move-only pimpl handle shared by every transfer the manager hands back — single file or directory,
 * upload or download. All four are the same shape: a uniquely-owned impl carrying the completion
 * future and the state a cancel reaches through. What a cancel actually does differs per transfer,
 * but that difference lives on the impl (HandleImplBase::Cancel), so this handle just forwards to it.
 *
 * Not used directly; each transfer exposes a thin final subclass (UploadHandle, DownloadHandle,
 * UploadDirectoryHandle, DownloadDirectoryHandle) so callers get a distinct, forward-declarable type.
 * ImplT is only ever named through a pointer here, so it stays incomplete in this header; the bodies
 * live out-of-line and are explicitly instantiated in TransferHandle.cpp.
 */
template <typename ImplT, typename OutcomeT>
class TransferHandle {
 public:
  explicit TransferHandle(Aws::UniquePtr<ImplT> impl, const char* logTag);
  ~TransferHandle();
  TransferHandle(const TransferHandle&) = delete;
  TransferHandle& operator=(const TransferHandle&) = delete;
  TransferHandle(TransferHandle&&) noexcept;
  TransferHandle& operator=(TransferHandle&&) noexcept;

  // Resolves once the transfer finishes, succeeds, or fails.
  std::future<OutcomeT> CompletionFuture();

  // Returns immediately; the completion future resolves with a failure once the cancel takes effect.
  void Cancel();

 private:
  Aws::UniquePtr<ImplT> m_impl;
  const char* m_logTag;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
