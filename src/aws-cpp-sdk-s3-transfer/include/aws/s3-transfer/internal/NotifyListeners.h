/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <cassert>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {
namespace Internal {

/**
 * Invokes one listener callback on every listener registered on the transfer's request, skipping
 * null entries. `event` is a pointer to the ProgressListener member to call, e.g.
 * &UploadProgressListener::OnTransferComplete. Shared by the single-file dispatchers (CrtOperations)
 * and the directory orchestrator (DirectoryOps): both hold a state whose `request` exposes
 * GetTransferListeners(), and both fire the same four lifecycle events, so the one template serves
 * every transfer kind.
 */
template <typename StateT, typename ListenerT, typename RequestT, typename SnapshotT>
void NotifyListeners(const std::shared_ptr<StateT>& state,
                     void (ListenerT::*event)(const RequestT&, const SnapshotT&),
                     const SnapshotT& snapshot) {
  assert(state && "NotifyListeners requires a live transfer state");
  for (const auto& listener : state->request.GetTransferListeners()) {
    if (listener) {
      (listener.get()->*event)(state->request, snapshot);
    }
  }
}

}  // namespace Internal
}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
