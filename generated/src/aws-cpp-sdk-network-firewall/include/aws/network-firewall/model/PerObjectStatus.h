/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/PerObjectSyncStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Provides configuration status for a single policy or rule group that is used
   * for a firewall endpoint. Network Firewall provides each endpoint with the rules
   * that are configured in the firewall policy. Each time you add a subnet or modify
   * the associated firewall policy, Network Firewall synchronizes the rules in the
   * endpoint, so it can properly filter network traffic. This is part of a
   * <a>SyncState</a> for a firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PerObjectStatus">AWS
   * API Reference</a></p>
   */
  class PerObjectStatus
  {
  public:
    AWS_NETWORKFIREWALL_API PerObjectStatus() = default;
    AWS_NETWORKFIREWALL_API PerObjectStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API PerObjectStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline PerObjectSyncStatus GetSyncStatus() const { return m_syncStatus; }
    inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }
    inline void SetSyncStatus(PerObjectSyncStatus value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }
    inline PerObjectStatus& WithSyncStatus(PerObjectSyncStatus value) { SetSyncStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
    template<typename UpdateTokenT = Aws::String>
    void SetUpdateToken(UpdateTokenT&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::forward<UpdateTokenT>(value); }
    template<typename UpdateTokenT = Aws::String>
    PerObjectStatus& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}
  private:

    PerObjectSyncStatus m_syncStatus{PerObjectSyncStatus::NOT_SET};
    bool m_syncStatusHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
