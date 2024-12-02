/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/model/MonitorLocalResource.h>
#include <aws/networkflowmonitor/model/MonitorRemoteResource.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   */
  class UpdateMonitorRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API UpdateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitor"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline UpdateMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline UpdateMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local resources to add, as an array of resources with identifiers and
     * types.</p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResourcesToAdd() const{ return m_localResourcesToAdd; }
    inline bool LocalResourcesToAddHasBeenSet() const { return m_localResourcesToAddHasBeenSet; }
    inline void SetLocalResourcesToAdd(const Aws::Vector<MonitorLocalResource>& value) { m_localResourcesToAddHasBeenSet = true; m_localResourcesToAdd = value; }
    inline void SetLocalResourcesToAdd(Aws::Vector<MonitorLocalResource>&& value) { m_localResourcesToAddHasBeenSet = true; m_localResourcesToAdd = std::move(value); }
    inline UpdateMonitorRequest& WithLocalResourcesToAdd(const Aws::Vector<MonitorLocalResource>& value) { SetLocalResourcesToAdd(value); return *this;}
    inline UpdateMonitorRequest& WithLocalResourcesToAdd(Aws::Vector<MonitorLocalResource>&& value) { SetLocalResourcesToAdd(std::move(value)); return *this;}
    inline UpdateMonitorRequest& AddLocalResourcesToAdd(const MonitorLocalResource& value) { m_localResourcesToAddHasBeenSet = true; m_localResourcesToAdd.push_back(value); return *this; }
    inline UpdateMonitorRequest& AddLocalResourcesToAdd(MonitorLocalResource&& value) { m_localResourcesToAddHasBeenSet = true; m_localResourcesToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The local resources to remove, as an array of resources with identifiers and
     * types.</p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResourcesToRemove() const{ return m_localResourcesToRemove; }
    inline bool LocalResourcesToRemoveHasBeenSet() const { return m_localResourcesToRemoveHasBeenSet; }
    inline void SetLocalResourcesToRemove(const Aws::Vector<MonitorLocalResource>& value) { m_localResourcesToRemoveHasBeenSet = true; m_localResourcesToRemove = value; }
    inline void SetLocalResourcesToRemove(Aws::Vector<MonitorLocalResource>&& value) { m_localResourcesToRemoveHasBeenSet = true; m_localResourcesToRemove = std::move(value); }
    inline UpdateMonitorRequest& WithLocalResourcesToRemove(const Aws::Vector<MonitorLocalResource>& value) { SetLocalResourcesToRemove(value); return *this;}
    inline UpdateMonitorRequest& WithLocalResourcesToRemove(Aws::Vector<MonitorLocalResource>&& value) { SetLocalResourcesToRemove(std::move(value)); return *this;}
    inline UpdateMonitorRequest& AddLocalResourcesToRemove(const MonitorLocalResource& value) { m_localResourcesToRemoveHasBeenSet = true; m_localResourcesToRemove.push_back(value); return *this; }
    inline UpdateMonitorRequest& AddLocalResourcesToRemove(MonitorLocalResource&& value) { m_localResourcesToRemoveHasBeenSet = true; m_localResourcesToRemove.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remove resources to add, as an array of resources with identifiers and
     * types.</p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResourcesToAdd() const{ return m_remoteResourcesToAdd; }
    inline bool RemoteResourcesToAddHasBeenSet() const { return m_remoteResourcesToAddHasBeenSet; }
    inline void SetRemoteResourcesToAdd(const Aws::Vector<MonitorRemoteResource>& value) { m_remoteResourcesToAddHasBeenSet = true; m_remoteResourcesToAdd = value; }
    inline void SetRemoteResourcesToAdd(Aws::Vector<MonitorRemoteResource>&& value) { m_remoteResourcesToAddHasBeenSet = true; m_remoteResourcesToAdd = std::move(value); }
    inline UpdateMonitorRequest& WithRemoteResourcesToAdd(const Aws::Vector<MonitorRemoteResource>& value) { SetRemoteResourcesToAdd(value); return *this;}
    inline UpdateMonitorRequest& WithRemoteResourcesToAdd(Aws::Vector<MonitorRemoteResource>&& value) { SetRemoteResourcesToAdd(std::move(value)); return *this;}
    inline UpdateMonitorRequest& AddRemoteResourcesToAdd(const MonitorRemoteResource& value) { m_remoteResourcesToAddHasBeenSet = true; m_remoteResourcesToAdd.push_back(value); return *this; }
    inline UpdateMonitorRequest& AddRemoteResourcesToAdd(MonitorRemoteResource&& value) { m_remoteResourcesToAddHasBeenSet = true; m_remoteResourcesToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remove resources to remove, as an array of resources with identifiers and
     * types.</p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResourcesToRemove() const{ return m_remoteResourcesToRemove; }
    inline bool RemoteResourcesToRemoveHasBeenSet() const { return m_remoteResourcesToRemoveHasBeenSet; }
    inline void SetRemoteResourcesToRemove(const Aws::Vector<MonitorRemoteResource>& value) { m_remoteResourcesToRemoveHasBeenSet = true; m_remoteResourcesToRemove = value; }
    inline void SetRemoteResourcesToRemove(Aws::Vector<MonitorRemoteResource>&& value) { m_remoteResourcesToRemoveHasBeenSet = true; m_remoteResourcesToRemove = std::move(value); }
    inline UpdateMonitorRequest& WithRemoteResourcesToRemove(const Aws::Vector<MonitorRemoteResource>& value) { SetRemoteResourcesToRemove(value); return *this;}
    inline UpdateMonitorRequest& WithRemoteResourcesToRemove(Aws::Vector<MonitorRemoteResource>&& value) { SetRemoteResourcesToRemove(std::move(value)); return *this;}
    inline UpdateMonitorRequest& AddRemoteResourcesToRemove(const MonitorRemoteResource& value) { m_remoteResourcesToRemoveHasBeenSet = true; m_remoteResourcesToRemove.push_back(value); return *this; }
    inline UpdateMonitorRequest& AddRemoteResourcesToRemove(MonitorRemoteResource&& value) { m_remoteResourcesToRemoveHasBeenSet = true; m_remoteResourcesToRemove.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateMonitorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateMonitorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<MonitorLocalResource> m_localResourcesToAdd;
    bool m_localResourcesToAddHasBeenSet = false;

    Aws::Vector<MonitorLocalResource> m_localResourcesToRemove;
    bool m_localResourcesToRemoveHasBeenSet = false;

    Aws::Vector<MonitorRemoteResource> m_remoteResourcesToAdd;
    bool m_remoteResourcesToAddHasBeenSet = false;

    Aws::Vector<MonitorRemoteResource> m_remoteResourcesToRemove;
    bool m_remoteResourcesToRemoveHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
