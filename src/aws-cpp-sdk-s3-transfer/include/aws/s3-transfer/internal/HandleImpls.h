/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/internal/DirectoryTransferState.h>
#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/core/Core_EXPORTS.h>
#include <aws/crt/s3/S3.h>
#include <future>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

// What every handle impl carries: the future the customer waits on, and the state Cancel() reaches
// through. What Cancel() actually does differs by handle, so it is a virtual the derived impls below
// override — the public handle just forwards to it, which is what lets one handle template serve
// both single-file and directory transfers.
template <typename OutcomeT, typename StateT>
class AWS_CORE_LOCAL HandleImplBase {
 public:
  virtual ~HandleImplBase() = default;

  // Stop the transfer this impl drives. Returns immediately; the completion future resolves with a
  // failure once the cancel takes effect.
  virtual void Cancel() = 0;

  std::future<OutcomeT> future;
  std::shared_ptr<StateT> state;

  HandleImplBase() = default;
  HandleImplBase(const HandleImplBase&) = delete;
  HandleImplBase& operator=(const HandleImplBase&) = delete;
  HandleImplBase(HandleImplBase&&) = delete;
  HandleImplBase& operator=(HandleImplBase&&) = delete;
};

template <typename OutcomeT, typename StateT>
class AWS_CORE_LOCAL TransferHandleImpl : public HandleImplBase<OutcomeT, StateT> {
 public:
  // A single-file transfer cancels by cancelling its CRT meta request. Null when the transfer failed
  // before a meta request existed; the promise already carries that failure.
  void Cancel() override {
    if (metaRequest) {
      metaRequest->Cancel();
    }
  }

  // Set before the handle is handed out and never reassigned, so Cancel() needs no lock. Null when
  // the transfer failed before a meta request existed.
  std::shared_ptr<Aws::Crt::S3::S3MetaRequest> metaRequest;
};

// A directory handle drives no meta request of its own; cancelling one means cancelling the per-file
// children its state holds, so it adds nothing beyond the shared future and state.
template <typename OutcomeT, typename StateT>
class AWS_CORE_LOCAL DirectoryHandleImpl : public HandleImplBase<OutcomeT, StateT> {
 public:
  // The state is set before the handle is handed out, so it is always present here.
  void Cancel() override { this->state->CancelAll(); }
};

class AWS_CORE_LOCAL UploadHandleImpl final : public TransferHandleImpl<UploadOutcome, UploadTransferState> {};
class AWS_CORE_LOCAL DownloadHandleImpl final : public TransferHandleImpl<DownloadOutcome, DownloadTransferState> {};

class AWS_CORE_LOCAL UploadDirectoryHandleImpl final
    : public DirectoryHandleImpl<UploadDirectoryOutcome, UploadDirectoryTransferState> {};
class AWS_CORE_LOCAL DownloadDirectoryHandleImpl final
    : public DirectoryHandleImpl<DownloadDirectoryOutcome, DownloadDirectoryTransferState> {};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
