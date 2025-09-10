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
    AWS_NETWORKFLOWMONITOR_API UpdateMonitorRequest() = default;

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
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    UpdateMonitorRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional local resources to specify network flows for a monitor, as an
     * array of resources with identifiers and types. A local resource in a workload is
     * the location of hosts where the Network Flow Monitor agent is installed. </p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResourcesToAdd() const { return m_localResourcesToAdd; }
    inline bool LocalResourcesToAddHasBeenSet() const { return m_localResourcesToAddHasBeenSet; }
    template<typename LocalResourcesToAddT = Aws::Vector<MonitorLocalResource>>
    void SetLocalResourcesToAdd(LocalResourcesToAddT&& value) { m_localResourcesToAddHasBeenSet = true; m_localResourcesToAdd = std::forward<LocalResourcesToAddT>(value); }
    template<typename LocalResourcesToAddT = Aws::Vector<MonitorLocalResource>>
    UpdateMonitorRequest& WithLocalResourcesToAdd(LocalResourcesToAddT&& value) { SetLocalResourcesToAdd(std::forward<LocalResourcesToAddT>(value)); return *this;}
    template<typename LocalResourcesToAddT = MonitorLocalResource>
    UpdateMonitorRequest& AddLocalResourcesToAdd(LocalResourcesToAddT&& value) { m_localResourcesToAddHasBeenSet = true; m_localResourcesToAdd.emplace_back(std::forward<LocalResourcesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The local resources to remove, as an array of resources with identifiers and
     * types.</p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResourcesToRemove() const { return m_localResourcesToRemove; }
    inline bool LocalResourcesToRemoveHasBeenSet() const { return m_localResourcesToRemoveHasBeenSet; }
    template<typename LocalResourcesToRemoveT = Aws::Vector<MonitorLocalResource>>
    void SetLocalResourcesToRemove(LocalResourcesToRemoveT&& value) { m_localResourcesToRemoveHasBeenSet = true; m_localResourcesToRemove = std::forward<LocalResourcesToRemoveT>(value); }
    template<typename LocalResourcesToRemoveT = Aws::Vector<MonitorLocalResource>>
    UpdateMonitorRequest& WithLocalResourcesToRemove(LocalResourcesToRemoveT&& value) { SetLocalResourcesToRemove(std::forward<LocalResourcesToRemoveT>(value)); return *this;}
    template<typename LocalResourcesToRemoveT = MonitorLocalResource>
    UpdateMonitorRequest& AddLocalResourcesToRemove(LocalResourcesToRemoveT&& value) { m_localResourcesToRemoveHasBeenSet = true; m_localResourcesToRemove.emplace_back(std::forward<LocalResourcesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote resources to add, as an array of resources with identifiers and
     * types.</p> <p>A remote resource is the other endpoint in the flow of a workload,
     * with a local resource. For example, Amazon Dynamo DB can be a remote resource.
     * </p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResourcesToAdd() const { return m_remoteResourcesToAdd; }
    inline bool RemoteResourcesToAddHasBeenSet() const { return m_remoteResourcesToAddHasBeenSet; }
    template<typename RemoteResourcesToAddT = Aws::Vector<MonitorRemoteResource>>
    void SetRemoteResourcesToAdd(RemoteResourcesToAddT&& value) { m_remoteResourcesToAddHasBeenSet = true; m_remoteResourcesToAdd = std::forward<RemoteResourcesToAddT>(value); }
    template<typename RemoteResourcesToAddT = Aws::Vector<MonitorRemoteResource>>
    UpdateMonitorRequest& WithRemoteResourcesToAdd(RemoteResourcesToAddT&& value) { SetRemoteResourcesToAdd(std::forward<RemoteResourcesToAddT>(value)); return *this;}
    template<typename RemoteResourcesToAddT = MonitorRemoteResource>
    UpdateMonitorRequest& AddRemoteResourcesToAdd(RemoteResourcesToAddT&& value) { m_remoteResourcesToAddHasBeenSet = true; m_remoteResourcesToAdd.emplace_back(std::forward<RemoteResourcesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote resources to remove, as an array of resources with identifiers and
     * types.</p> <p>A remote resource is the other endpoint specified for the network
     * flow of a workload, with a local resource. For example, Amazon Dynamo DB can be
     * a remote resource. </p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResourcesToRemove() const { return m_remoteResourcesToRemove; }
    inline bool RemoteResourcesToRemoveHasBeenSet() const { return m_remoteResourcesToRemoveHasBeenSet; }
    template<typename RemoteResourcesToRemoveT = Aws::Vector<MonitorRemoteResource>>
    void SetRemoteResourcesToRemove(RemoteResourcesToRemoveT&& value) { m_remoteResourcesToRemoveHasBeenSet = true; m_remoteResourcesToRemove = std::forward<RemoteResourcesToRemoveT>(value); }
    template<typename RemoteResourcesToRemoveT = Aws::Vector<MonitorRemoteResource>>
    UpdateMonitorRequest& WithRemoteResourcesToRemove(RemoteResourcesToRemoveT&& value) { SetRemoteResourcesToRemove(std::forward<RemoteResourcesToRemoveT>(value)); return *this;}
    template<typename RemoteResourcesToRemoveT = MonitorRemoteResource>
    UpdateMonitorRequest& AddRemoteResourcesToRemove(RemoteResourcesToRemoveT&& value) { m_remoteResourcesToRemoveHasBeenSet = true; m_remoteResourcesToRemove.emplace_back(std::forward<RemoteResourcesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
     * to make an idempotent API request. Don't reuse the same client token for other
     * API requests.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateMonitorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
