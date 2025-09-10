/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateMonitorRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API CreateMonitorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitor"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    CreateMonitorRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local resources to monitor. A local resource in a workload is the
     * location of the host, or hosts, where the Network Flow Monitor agent is
     * installed. For example, if a workload consists of an interaction between a web
     * service and a backend database (for example, Amazon Dynamo DB), the subnet with
     * the EC2 instance that hosts the web service, which also runs the agent, is the
     * local resource.</p> <p>Be aware that all local resources must belong to the
     * current Region.</p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResources() const { return m_localResources; }
    inline bool LocalResourcesHasBeenSet() const { return m_localResourcesHasBeenSet; }
    template<typename LocalResourcesT = Aws::Vector<MonitorLocalResource>>
    void SetLocalResources(LocalResourcesT&& value) { m_localResourcesHasBeenSet = true; m_localResources = std::forward<LocalResourcesT>(value); }
    template<typename LocalResourcesT = Aws::Vector<MonitorLocalResource>>
    CreateMonitorRequest& WithLocalResources(LocalResourcesT&& value) { SetLocalResources(std::forward<LocalResourcesT>(value)); return *this;}
    template<typename LocalResourcesT = MonitorLocalResource>
    CreateMonitorRequest& AddLocalResources(LocalResourcesT&& value) { m_localResourcesHasBeenSet = true; m_localResources.emplace_back(std::forward<LocalResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote resources to monitor. A remote resource is the other endpoint in
     * the bi-directional flow of a workload, with a local resource. For example,
     * Amazon Dynamo DB can be a remote resource.</p> <p>When you specify remote
     * resources, be aware that specific combinations of resources are allowed and
     * others are not, including the following constraints:</p> <ul> <li> <p>All remote
     * resources that you specify must all belong to a single Region.</p> </li> <li>
     * <p>If you specify Amazon Web Services services as remote resources, any other
     * remote resources that you specify must be in the current Region.</p> </li> <li>
     * <p>When you specify a remote resource for another Region, you can only specify
     * the <code>Region</code> resource type. You cannot specify a subnet, VPC, or
     * Availability Zone in another Region.</p> </li> <li> <p>If you leave the
     * <code>RemoteResources</code> parameter empty, the monitor will include all
     * network flows that terminate in the current Region.</p> </li> </ul>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResources() const { return m_remoteResources; }
    inline bool RemoteResourcesHasBeenSet() const { return m_remoteResourcesHasBeenSet; }
    template<typename RemoteResourcesT = Aws::Vector<MonitorRemoteResource>>
    void SetRemoteResources(RemoteResourcesT&& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources = std::forward<RemoteResourcesT>(value); }
    template<typename RemoteResourcesT = Aws::Vector<MonitorRemoteResource>>
    CreateMonitorRequest& WithRemoteResources(RemoteResourcesT&& value) { SetRemoteResources(std::forward<RemoteResourcesT>(value)); return *this;}
    template<typename RemoteResourcesT = MonitorRemoteResource>
    CreateMonitorRequest& AddRemoteResources(RemoteResourcesT&& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources.emplace_back(std::forward<RemoteResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope for the monitor.</p>
     */
    inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
    inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
    template<typename ScopeArnT = Aws::String>
    void SetScopeArn(ScopeArnT&& value) { m_scopeArnHasBeenSet = true; m_scopeArn = std::forward<ScopeArnT>(value); }
    template<typename ScopeArnT = Aws::String>
    CreateMonitorRequest& WithScopeArn(ScopeArnT&& value) { SetScopeArn(std::forward<ScopeArnT>(value)); return *this;}
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
    CreateMonitorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for a monitor. You can add a maximum of 200 tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMonitorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMonitorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<MonitorLocalResource> m_localResources;
    bool m_localResourcesHasBeenSet = false;

    Aws::Vector<MonitorRemoteResource> m_remoteResources;
    bool m_remoteResourcesHasBeenSet = false;

    Aws::String m_scopeArn;
    bool m_scopeArnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
