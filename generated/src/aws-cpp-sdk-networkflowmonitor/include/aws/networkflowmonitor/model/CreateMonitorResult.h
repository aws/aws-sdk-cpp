/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/networkflowmonitor/model/MonitorLocalResource.h>
#include <aws/networkflowmonitor/model/MonitorRemoteResource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFlowMonitor
{
namespace Model
{
  class CreateMonitorResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API CreateMonitorResult() = default;
    AWS_NETWORKFLOWMONITOR_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    CreateMonitorResult& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    CreateMonitorResult& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a monitor. The status can be one of the following</p> <ul> <li>
     * <p> <code>PENDING</code>: The monitor is in the process of being created.</p>
     * </li> <li> <p> <code>ACTIVE</code>: The monitor is active.</p> </li> <li> <p>
     * <code>INACTIVE</code>: The monitor is inactive.</p> </li> <li> <p>
     * <code>ERROR</code>: Monitor creation failed due to an error.</p> </li> <li> <p>
     * <code>DELETING</code>: The monitor is in the process of being deleted.</p> </li>
     * </ul>
     */
    inline MonitorStatus GetMonitorStatus() const { return m_monitorStatus; }
    inline void SetMonitorStatus(MonitorStatus value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = value; }
    inline CreateMonitorResult& WithMonitorStatus(MonitorStatus value) { SetMonitorStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local resources to monitor. A local resource in a workload is the
     * location of hosts where the Network Flow Monitor agent is installed. </p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResources() const { return m_localResources; }
    template<typename LocalResourcesT = Aws::Vector<MonitorLocalResource>>
    void SetLocalResources(LocalResourcesT&& value) { m_localResourcesHasBeenSet = true; m_localResources = std::forward<LocalResourcesT>(value); }
    template<typename LocalResourcesT = Aws::Vector<MonitorLocalResource>>
    CreateMonitorResult& WithLocalResources(LocalResourcesT&& value) { SetLocalResources(std::forward<LocalResourcesT>(value)); return *this;}
    template<typename LocalResourcesT = MonitorLocalResource>
    CreateMonitorResult& AddLocalResources(LocalResourcesT&& value) { m_localResourcesHasBeenSet = true; m_localResources.emplace_back(std::forward<LocalResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote resources to monitor. A remote resource is the other endpoint
     * specified for the network flow of a workload, with a local resource. For
     * example, Amazon Dynamo DB can be a remote resource. </p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResources() const { return m_remoteResources; }
    template<typename RemoteResourcesT = Aws::Vector<MonitorRemoteResource>>
    void SetRemoteResources(RemoteResourcesT&& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources = std::forward<RemoteResourcesT>(value); }
    template<typename RemoteResourcesT = Aws::Vector<MonitorRemoteResource>>
    CreateMonitorResult& WithRemoteResources(RemoteResourcesT&& value) { SetRemoteResources(std::forward<RemoteResourcesT>(value)); return *this;}
    template<typename RemoteResourcesT = MonitorRemoteResource>
    CreateMonitorResult& AddRemoteResources(RemoteResourcesT&& value) { m_remoteResourcesHasBeenSet = true; m_remoteResources.emplace_back(std::forward<RemoteResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateMonitorResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that the monitor was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    CreateMonitorResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for a monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMonitorResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMonitorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMonitorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    MonitorStatus m_monitorStatus{MonitorStatus::NOT_SET};
    bool m_monitorStatusHasBeenSet = false;

    Aws::Vector<MonitorLocalResource> m_localResources;
    bool m_localResourcesHasBeenSet = false;

    Aws::Vector<MonitorRemoteResource> m_remoteResources;
    bool m_remoteResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
