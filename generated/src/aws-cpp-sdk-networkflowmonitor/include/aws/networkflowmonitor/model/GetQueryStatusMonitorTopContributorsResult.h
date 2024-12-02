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
  class GetQueryStatusMonitorTopContributorsResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusMonitorTopContributorsResult();
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusMonitorTopContributorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryStatusMonitorTopContributorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you run a query, use this call to check the status of the query to make
     * sure that the query has <code>SUCCEEDED</code> before you review the
     * results.</p> <ul> <li> <p> <code>QUEUED</code>: The query is scheduled to
     * run.</p> </li> <li> <p> <code>RUNNING</code>: The query is in progress but not
     * complete.</p> </li> <li> <p> <code>SUCCEEDED</code>: The query completed
     * sucessfully.</p> </li> <li> <p> <code>FAILED</code>: The query failed due to an
     * error.</p> </li> <li> <p> <code>CANCELED</code>: The query was canceled.</p>
     * </li> </ul>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const QueryStatus& value) { m_status = value; }
    inline void SetStatus(QueryStatus&& value) { m_status = std::move(value); }
    inline GetQueryStatusMonitorTopContributorsResult& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}
    inline GetQueryStatusMonitorTopContributorsResult& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryStatusMonitorTopContributorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryStatusMonitorTopContributorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryStatusMonitorTopContributorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    QueryStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
