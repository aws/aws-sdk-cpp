﻿/**
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
    AWS_NETWORKMONITOR_API ListMonitorsResult() = default;
    AWS_NETWORKMONITOR_API ListMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMONITOR_API ListMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists individual details about each of your monitors.</p>
     */
    inline const Aws::Vector<MonitorSummary>& GetMonitors() const { return m_monitors; }
    template<typename MonitorsT = Aws::Vector<MonitorSummary>>
    void SetMonitors(MonitorsT&& value) { m_monitorsHasBeenSet = true; m_monitors = std::forward<MonitorsT>(value); }
    template<typename MonitorsT = Aws::Vector<MonitorSummary>>
    ListMonitorsResult& WithMonitors(MonitorsT&& value) { SetMonitors(std::forward<MonitorsT>(value)); return *this;}
    template<typename MonitorsT = MonitorSummary>
    ListMonitorsResult& AddMonitors(MonitorsT&& value) { m_monitorsHasBeenSet = true; m_monitors.emplace_back(std::forward<MonitorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMonitorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MonitorSummary> m_monitors;
    bool m_monitorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
