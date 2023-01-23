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
    AWS_NETWORKFIREWALL_API PerObjectStatus();
    AWS_NETWORKFIREWALL_API PerObjectStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API PerObjectStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline const PerObjectSyncStatus& GetSyncStatus() const{ return m_syncStatus; }

    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }

    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline void SetSyncStatus(const PerObjectSyncStatus& value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }

    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline void SetSyncStatus(PerObjectSyncStatus&& value) { m_syncStatusHasBeenSet = true; m_syncStatus = std::move(value); }

    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline PerObjectStatus& WithSyncStatus(const PerObjectSyncStatus& value) { SetSyncStatus(value); return *this;}

    /**
     * <p>Indicates whether this object is in sync with the version indicated in the
     * update token.</p>
     */
    inline PerObjectStatus& WithSyncStatus(PerObjectSyncStatus&& value) { SetSyncStatus(std::move(value)); return *this;}


    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline PerObjectStatus& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline PerObjectStatus& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>The current version of the object that is either in sync or pending
     * synchronization. </p>
     */
    inline PerObjectStatus& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}

  private:

    PerObjectSyncStatus m_syncStatus;
    bool m_syncStatusHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
