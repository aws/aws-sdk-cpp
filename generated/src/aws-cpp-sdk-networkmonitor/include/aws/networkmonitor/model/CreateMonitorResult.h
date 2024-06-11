/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/MonitorState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateMonitorResult
  {
  public:
    AWS_NETWORKMONITOR_API CreateMonitorResult();
    AWS_NETWORKMONITOR_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMONITOR_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the monitor.</p>
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
     * <p>The name of the monitor.</p>
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
     * <p>The state of the monitor.</p>
     */
    inline const MonitorState& GetState() const{ return m_state; }
    inline void SetState(const MonitorState& value) { m_state = value; }
    inline void SetState(MonitorState&& value) { m_state = std::move(value); }
    inline CreateMonitorResult& WithState(const MonitorState& value) { SetState(value); return *this;}
    inline CreateMonitorResult& WithState(MonitorState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds that metrics are aggregated by and sent to Amazon
     * CloudWatch. This will be either <code>30</code> or <code>60</code>. </p>
     */
    inline long long GetAggregationPeriod() const{ return m_aggregationPeriod; }
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriod = value; }
    inline CreateMonitorResult& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
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

    MonitorState m_state;

    long long m_aggregationPeriod;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
