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
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusWorkloadInsightsTopContributorsDataResult();
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
    inline const QueryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const QueryStatus& value) { m_status = value; }
    inline void SetStatus(QueryStatus&& value) { m_status = std::move(value); }
    inline GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}
    inline GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryStatusWorkloadInsightsTopContributorsDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    QueryStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
