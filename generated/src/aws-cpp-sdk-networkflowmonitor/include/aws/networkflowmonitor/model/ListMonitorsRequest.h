/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   */
  class ListMonitorsRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API ListMonitorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitors"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;

    AWS_NETWORKFLOWMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of query results that you want to return with this call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMonitorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline bool MonitorStatusHasBeenSet() const { return m_monitorStatusHasBeenSet; }
    inline void SetMonitorStatus(MonitorStatus value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = value; }
    inline ListMonitorsRequest& WithMonitorStatus(MonitorStatus value) { SetMonitorStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    MonitorStatus m_monitorStatus{MonitorStatus::NOT_SET};
    bool m_monitorStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
