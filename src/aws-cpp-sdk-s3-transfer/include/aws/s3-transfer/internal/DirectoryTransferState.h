/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/DownloadDirectoryHandle.h>
#include <aws/s3-transfer/DownloadDirectoryRequest.h>
#include <aws/s3-transfer/DownloadDirectoryResponse.h>
#include <aws/s3-transfer/DownloadHandle.h>
#include <aws/s3-transfer/UploadDirectoryHandle.h>
#include <aws/s3-transfer/UploadDirectoryRequest.h>
#include <aws/s3-transfer/UploadDirectoryResponse.h>
#include <aws/s3-transfer/UploadHandle.h>
#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <atomic>
#include <cstdint>
#include <future>
#include <memory>
#include <mutex>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

// Per-operation state shared by the orchestrator task and the customer's directory handle. Unlike a
// single-file transfer, a directory operation drives no meta request of its own: it fans out to the
// single-file dispatchers, so what it holds is the set of child handles a Cancel() has to reach.
//
// The tallies deliberately live as locals in the orchestrator rather than here. Only that one task
// touches them, so keeping them off this shared object is what makes them safe to read without a
// lock; the child-handle map is the only member two threads share, and it carries its own.
template <typename RequestT, typename OutcomeT, typename ChildHandleT>
struct AWS_CORE_LOCAL DirectoryTransferStateBase {
  std::promise<OutcomeT> promise;
  RequestT request;
  // Set by Cancel() before it touches the map, so a child dispatched concurrently is guaranteed to
  // observe it in AddInFlight and cancel itself.
  std::atomic<bool> canceled{false};

  explicit DirectoryTransferStateBase(RequestT req) : request(std::move(req)) {}
  virtual ~DirectoryTransferStateBase() = default;

  DirectoryTransferStateBase(const DirectoryTransferStateBase&) = delete;
  DirectoryTransferStateBase& operator=(const DirectoryTransferStateBase&) = delete;
  DirectoryTransferStateBase(DirectoryTransferStateBase&&) = delete;
  DirectoryTransferStateBase& operator=(DirectoryTransferStateBase&&) = delete;

  // Take ownership of a freshly dispatched child. Cancels it on the spot if a cancel already
  // landed, so a child that raced CancelAll() does not run on unnoticed.
  void AddInFlight(uint64_t id, ChildHandleT handle) {
    const std::lock_guard<std::mutex> lock(m_mutex);
    if (canceled.load()) {
      handle.Cancel();
    }
    m_inFlight.emplace(id, std::move(handle));
  }

  // Drop a child whose outcome the orchestrator has already harvested; there is nothing left to
  // cancel.
  void RemoveInFlight(uint64_t id) {
    const std::lock_guard<std::mutex> lock(m_mutex);
    m_inFlight.erase(id);
  }

  // Cancel every child still in flight and keep later dispatches from running on.
  void CancelAll() {
    canceled.store(true);
    const std::lock_guard<std::mutex> lock(m_mutex);
    for (auto& entry : m_inFlight) {
      entry.second.Cancel();
    }
  }

 private:
  // Written by the orchestrator task, read by the customer's thread via Cancel(); guarded.
  std::mutex m_mutex;
  Aws::Map<uint64_t, ChildHandleT> m_inFlight;
};

struct AWS_CORE_LOCAL UploadDirectoryTransferState final
    : DirectoryTransferStateBase<UploadDirectoryRequest, UploadDirectoryOutcome, UploadHandle> {
  using DirectoryTransferStateBase::DirectoryTransferStateBase;
};

struct AWS_CORE_LOCAL DownloadDirectoryTransferState final
    : DirectoryTransferStateBase<DownloadDirectoryRequest, DownloadDirectoryOutcome, DownloadHandle> {
  using DirectoryTransferStateBase::DirectoryTransferStateBase;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
