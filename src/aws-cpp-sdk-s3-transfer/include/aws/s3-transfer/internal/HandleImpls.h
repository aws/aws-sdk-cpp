/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/internal/TransferState.h>
#include <aws/core/Core_EXPORTS.h>
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
