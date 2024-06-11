/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/MonitorSummary.h>
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
  class ListMonitorsResult
  {
  public:
    AWS_NETWORKMONITOR_API ListMonitorsResult();
    AWS_NETWORKMONITOR_API ListMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMONITOR_API ListMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists individual details about each of your monitors.</p>
     */
    inline const Aws::Vector<MonitorSummary>& GetMonitors() const{ return m_monitors; }
    inline void SetMonitors(const Aws::Vector<MonitorSummary>& value) { m_monitors = value; }
    inline void SetMonitors(Aws::Vector<MonitorSummary>&& value) { m_monitors = std::move(value); }
    inline ListMonitorsResult& WithMonitors(const Aws::Vector<MonitorSummary>& value) { SetMonitors(value); return *this;}
    inline ListMonitorsResult& WithMonitors(Aws::Vector<MonitorSummary>&& value) { SetMonitors(std::move(value)); return *this;}
    inline ListMonitorsResult& AddMonitors(const MonitorSummary& value) { m_monitors.push_back(value); return *this; }
    inline ListMonitorsResult& AddMonitors(MonitorSummary&& value) { m_monitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMonitorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMonitorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMonitorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMonitorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMonitorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMonitorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MonitorSummary> m_monitors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
