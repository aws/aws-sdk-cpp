/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/MonitorState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmonitor/model/Probe.h>
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
namespace NetworkMonitor
{
namespace Model
{
  class GetMonitorResult
  {
  public:
    AWS_NETWORKMONITOR_API GetMonitorResult();
    AWS_NETWORKMONITOR_API GetMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMONITOR_API GetMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline GetMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline GetMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the selected monitor.</p>
     */
    inline GetMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorName = value; }

    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline GetMonitorResult& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline GetMonitorResult& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor. To get a list of the current monitors and their
     * names, use the <code>ListMonitors</code> action.</p>
     */
    inline GetMonitorResult& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>Returns a list of the state of each monitor. </p>
     */
    inline const MonitorState& GetState() const{ return m_state; }

    /**
     * <p>Returns a list of the state of each monitor. </p>
     */
    inline void SetState(const MonitorState& value) { m_state = value; }

    /**
     * <p>Returns a list of the state of each monitor. </p>
     */
    inline void SetState(MonitorState&& value) { m_state = std::move(value); }

    /**
     * <p>Returns a list of the state of each monitor. </p>
     */
    inline GetMonitorResult& WithState(const MonitorState& value) { SetState(value); return *this;}

    /**
     * <p>Returns a list of the state of each monitor. </p>
     */
    inline GetMonitorResult& WithState(MonitorState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The aggregation period for the specified monitor.</p>
     */
    inline long long GetAggregationPeriod() const{ return m_aggregationPeriod; }

    /**
     * <p>The aggregation period for the specified monitor.</p>
     */
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriod = value; }

    /**
     * <p>The aggregation period for the specified monitor.</p>
     */
    inline GetMonitorResult& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}


    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline GetMonitorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline const Aws::Vector<Probe>& GetProbes() const{ return m_probes; }

    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline void SetProbes(const Aws::Vector<Probe>& value) { m_probes = value; }

    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline void SetProbes(Aws::Vector<Probe>&& value) { m_probes = std::move(value); }

    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline GetMonitorResult& WithProbes(const Aws::Vector<Probe>& value) { SetProbes(value); return *this;}

    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline GetMonitorResult& WithProbes(Aws::Vector<Probe>&& value) { SetProbes(std::move(value)); return *this;}

    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline GetMonitorResult& AddProbes(const Probe& value) { m_probes.push_back(value); return *this; }

    /**
     * <p>The details about each probe associated with that monitor. </p>
     */
    inline GetMonitorResult& AddProbes(Probe&& value) { m_probes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time and date when the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time and date when the monitor was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time and date when the monitor was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time and date when the monitor was created.</p>
     */
    inline GetMonitorResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time and date when the monitor was created.</p>
     */
    inline GetMonitorResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time and date when the monitor was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The time and date when the monitor was last modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>The time and date when the monitor was last modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>The time and date when the monitor was last modified.</p>
     */
    inline GetMonitorResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The time and date when the monitor was last modified.</p>
     */
    inline GetMonitorResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_monitorArn;

    Aws::String m_monitorName;

    MonitorState m_state;

    long long m_aggregationPeriod;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<Probe> m_probes;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
