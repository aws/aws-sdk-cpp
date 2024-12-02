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
    AWS_NETWORKFLOWMONITOR_API CreateMonitorResult();
    AWS_NETWORKFLOWMONITOR_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }
    inline CreateMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline CreateMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline CreateMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorName.assign(value); }
    inline CreateMonitorResult& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline CreateMonitorResult& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline CreateMonitorResult& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
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
    inline const MonitorStatus& GetMonitorStatus() const{ return m_monitorStatus; }
    inline void SetMonitorStatus(const MonitorStatus& value) { m_monitorStatus = value; }
    inline void SetMonitorStatus(MonitorStatus&& value) { m_monitorStatus = std::move(value); }
    inline CreateMonitorResult& WithMonitorStatus(const MonitorStatus& value) { SetMonitorStatus(value); return *this;}
    inline CreateMonitorResult& WithMonitorStatus(MonitorStatus&& value) { SetMonitorStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local resources to monitor. A local resource, in a bi-directional flow of
     * a workload, is the host where the agent is installed. </p>
     */
    inline const Aws::Vector<MonitorLocalResource>& GetLocalResources() const{ return m_localResources; }
    inline void SetLocalResources(const Aws::Vector<MonitorLocalResource>& value) { m_localResources = value; }
    inline void SetLocalResources(Aws::Vector<MonitorLocalResource>&& value) { m_localResources = std::move(value); }
    inline CreateMonitorResult& WithLocalResources(const Aws::Vector<MonitorLocalResource>& value) { SetLocalResources(value); return *this;}
    inline CreateMonitorResult& WithLocalResources(Aws::Vector<MonitorLocalResource>&& value) { SetLocalResources(std::move(value)); return *this;}
    inline CreateMonitorResult& AddLocalResources(const MonitorLocalResource& value) { m_localResources.push_back(value); return *this; }
    inline CreateMonitorResult& AddLocalResources(MonitorLocalResource&& value) { m_localResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The remote resources to monitor. A remote resource is the other endpoint in
     * the bi-directional flow of a workload, with a local resource. For example,
     * Amazon Relational Database Service (RDS) can be a remote resource. The remote
     * resource is identified by its ARN or an identifier.</p>
     */
    inline const Aws::Vector<MonitorRemoteResource>& GetRemoteResources() const{ return m_remoteResources; }
    inline void SetRemoteResources(const Aws::Vector<MonitorRemoteResource>& value) { m_remoteResources = value; }
    inline void SetRemoteResources(Aws::Vector<MonitorRemoteResource>&& value) { m_remoteResources = std::move(value); }
    inline CreateMonitorResult& WithRemoteResources(const Aws::Vector<MonitorRemoteResource>& value) { SetRemoteResources(value); return *this;}
    inline CreateMonitorResult& WithRemoteResources(Aws::Vector<MonitorRemoteResource>&& value) { SetRemoteResources(std::move(value)); return *this;}
    inline CreateMonitorResult& AddRemoteResources(const MonitorRemoteResource& value) { m_remoteResources.push_back(value); return *this; }
    inline CreateMonitorResult& AddRemoteResources(MonitorRemoteResource&& value) { m_remoteResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateMonitorResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateMonitorResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date and time that the monitor was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline CreateMonitorResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline CreateMonitorResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for a monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateMonitorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateMonitorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMonitorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateMonitorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMonitorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMonitorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMonitorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMonitorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMonitorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorArn;

    Aws::String m_monitorName;

    MonitorStatus m_monitorStatus;

    Aws::Vector<MonitorLocalResource> m_localResources;

    Aws::Vector<MonitorRemoteResource> m_remoteResources;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
