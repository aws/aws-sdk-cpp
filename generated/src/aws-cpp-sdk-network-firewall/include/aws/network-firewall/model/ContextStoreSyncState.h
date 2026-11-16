/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContextStoreSyncStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The synchronization state of a firewall's context sets with its context
 * store. This indicates whether the resource identifiers in the firewall's context
 * sets resolve to resources that the context store records.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ContextStoreSyncState">AWS
 * API Reference</a></p>
 */
class ContextStoreSyncState {
 public:
  AWS_NETWORKFIREWALL_API ContextStoreSyncState() = default;
  AWS_NETWORKFIREWALL_API ContextStoreSyncState(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ContextStoreSyncState& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The synchronization status of the firewall's context sets. Valid values:</p>
   * <ul> <li> <p> <code>SYNCING</code> - The firewall is applying the latest context
   * store data.</p> </li> <li> <p> <code>FULLY_RESOLVED</code> - All resource
   * identifiers in the firewall's context sets resolve to resources in the context
   * store.</p> </li> <li> <p> <code>PARTIALLY_RESOLVED</code> - Some resource
   * identifiers in the firewall's context sets don't resolve to resources in the
   * context store.</p> </li> <li> <p> <code>SYNC_FAILED</code> - The firewall
   * couldn't sync with the context store. For details, see
   * <code>StatusMessage</code>.</p> </li> </ul>
   */
  inline ContextStoreSyncStatus GetSyncStatus() const { return m_syncStatus; }
  inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }
  inline void SetSyncStatus(ContextStoreSyncStatus value) {
    m_syncStatusHasBeenSet = true;
    m_syncStatus = value;
  }
  inline ContextStoreSyncState& WithSyncStatus(ContextStoreSyncStatus value) {
    SetSyncStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that provides additional information about the synchronization
   * status, particularly when the status is not <code>FULLY_RESOLVED</code>.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  ContextStoreSyncState& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  ContextStoreSyncStatus m_syncStatus{ContextStoreSyncStatus::NOT_SET};

  Aws::String m_statusMessage;
  bool m_syncStatusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
