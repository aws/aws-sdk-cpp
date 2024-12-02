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
    AWS_NETWORKFLOWMONITOR_API CreateMonitorRequest();

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
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline CreateMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline CreateMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline CreateMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local resources to monitor. A local resource, in a bi-directional flow of
     * a workload, is the host where the agent is installed. For example, if a workload
     * consists of an interaction between a web service and a backend database (for
     * example, Amazon Relational Database Service (RDS)), the EC2 instance hosting the
     * web service, which also runs the agent, is the local resource.</p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResources() const{ return m_localResources; }
    inline bool LocalResourcesHasBeenSet() const { return m_localResourcesHasBeenSet; }
    inline void SetLocalResources(const Aws::Vector<MonitorLocalResource>& value) { m_localResourcesHasBeenSet = true; m_localResources = value; }
    inline void SetLocalResources(Aws::Vector<MonitorLocalResource>&& value) { m_localResourcesHasBeenSet = true; m_localResources = std::move(value); }
    inline CreateMonitorRequest& WithLocalResources(const Aws::Vector<MonitorLocalResource>& value) { SetLocalResources(value); return *this;}
    inline CreateMonitorRequest& WithLocalResources(Aws::Vector<MonitorLocalResource>&& value) { SetLocalResources(std::move(value)); return *this;}
    inline CreateMonitorRequest& AddLocalResources(const MonitorLocalResource& value) { m_localResourcesHasBeenSet = true; m_localResources.push_back(value); return *this; }
    inline CreateMonitorRequest& AddLocalResources(MonitorLocalResource&& value) { m_localResourcesHasBeenSet = true; m_localResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote resources to monitor. A remote resource is the other endpoint in
     * the bi-directional flow of a workload, with a local resource. For example,
     * Amazon Relational Database Service (RDS) can be a remote resource.</p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResources() const{ return m_remoteResources; }
    inline bool RemoteResourcesHasBeenSet() const { return m_remoteResourcesHasBeenSet; }
    inline void SetRemoteResources(const Aws::Vector<MonitorRemoteResource>& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources = value; }
    inline void SetRemoteResources(Aws::Vector<MonitorRemoteResource>&& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources = std::move(value); }
    inline CreateMonitorRequest& WithRemoteResources(const Aws::Vector<MonitorRemoteResource>& value) { SetRemoteResources(value); return *this;}
    inline CreateMonitorRequest& WithRemoteResources(Aws::Vector<MonitorRemoteResource>&& value) { SetRemoteResources(std::move(value)); return *this;}
    inline CreateMonitorRequest& AddRemoteResources(const MonitorRemoteResource& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources.push_back(value); return *this; }
    inline CreateMonitorRequest& AddRemoteResources(MonitorRemoteResource&& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope for the monitor.</p>
     */
    inline const Aws::String& GetScopeArn() const{ return m_scopeArn; }
    inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
    inline void SetScopeArn(const Aws::String& value) { m_scopeArnHasBeenSet = true; m_scopeArn = value; }
    inline void SetScopeArn(Aws::String&& value) { m_scopeArnHasBeenSet = true; m_scopeArn = std::move(value); }
    inline void SetScopeArn(const char* value) { m_scopeArnHasBeenSet = true; m_scopeArn.assign(value); }
    inline CreateMonitorRequest& WithScopeArn(const Aws::String& value) { SetScopeArn(value); return *this;}
    inline CreateMonitorRequest& WithScopeArn(Aws::String&& value) { SetScopeArn(std::move(value)); return *this;}
    inline CreateMonitorRequest& WithScopeArn(const char* value) { SetScopeArn(value); return *this;}
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
    inline CreateMonitorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMonitorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMonitorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for a monitor. You can add a maximum of 200 tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMonitorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateMonitorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMonitorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateMonitorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMonitorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMonitorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMonitorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMonitorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMonitorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
