/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/core/Core_EXPORTS.h>
#include <aws/crt/s3/S3.h>
#include <future>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

template <typename OutcomeT, typename StateT>
class AWS_CORE_LOCAL TransferHandleImpl {
 public:
  virtual ~TransferHandleImpl() = default;

  std::future<OutcomeT> future;
  std::shared_ptr<StateT> state;
  // Set before the handle is handed out and never reassigned, so Cancel() needs no lock. Null when
  // the transfer failed before a meta request existed.
  std::shared_ptr<Aws::Crt::S3::S3MetaRequest> metaRequest;

  TransferHandleImpl() = default;
  TransferHandleImpl(const TransferHandleImpl&) = delete;
  TransferHandleImpl& operator=(const TransferHandleImpl&) = delete;
  TransferHandleImpl(TransferHandleImpl&&) = delete;
  TransferHandleImpl& operator=(TransferHandleImpl&&) = delete;
};

class AWS_CORE_LOCAL UploadHandleImpl final : public TransferHandleImpl<UploadOutcome, UploadTransferState> {};
class AWS_CORE_LOCAL DownloadHandleImpl final : public TransferHandleImpl<DownloadOutcome, DownloadTransferState> {};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
