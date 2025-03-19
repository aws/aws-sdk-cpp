/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/QueryStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetQueryStatusWorkloadInsightsTopContributorsDataResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusWorkloadInsightsTopContributorsDataResult() = default;
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusWorkloadInsightsTopContributorsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusWorkloadInsightsTopContributorsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of a query for top contributors data.</p> <ul> <li> <p>
     * <code>QUEUED</code>: The query is scheduled to run.</p> </li> <li> <p>
     * <code>RUNNING</code>: The query is in progress but not complete.</p> </li> <li>
     * <p> <code>SUCCEEDED</code>: The query completed sucessfully.</p> </li> <li> <p>
     * <code>FAILED</code>: The query failed due to an error.</p> </li> <li> <p>
     * <code>CANCELED</code>: The query was canceled.</p> </li> </ul>
     */
    inline QueryStatus GetStatus() const { return m_status; }
    inline void SetStatus(QueryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithStatus(QueryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryStatus m_status{QueryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
