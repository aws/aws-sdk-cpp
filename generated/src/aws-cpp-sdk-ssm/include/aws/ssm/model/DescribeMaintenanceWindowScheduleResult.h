/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ScheduledWindowExecution.h>
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
namespace SSM
{
namespace Model
{
  class DescribeMaintenanceWindowScheduleResult
  {
  public:
    AWS_SSM_API DescribeMaintenanceWindowScheduleResult() = default;
    AWS_SSM_API DescribeMaintenanceWindowScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline const Aws::Vector<ScheduledWindowExecution>& GetScheduledWindowExecutions() const { return m_scheduledWindowExecutions; }
    template<typename ScheduledWindowExecutionsT = Aws::Vector<ScheduledWindowExecution>>
    void SetScheduledWindowExecutions(ScheduledWindowExecutionsT&& value) { m_scheduledWindowExecutionsHasBeenSet = true; m_scheduledWindowExecutions = std::forward<ScheduledWindowExecutionsT>(value); }
    template<typename ScheduledWindowExecutionsT = Aws::Vector<ScheduledWindowExecution>>
    DescribeMaintenanceWindowScheduleResult& WithScheduledWindowExecutions(ScheduledWindowExecutionsT&& value) { SetScheduledWindowExecutions(std::forward<ScheduledWindowExecutionsT>(value)); return *this;}
    template<typename ScheduledWindowExecutionsT = ScheduledWindowExecution>
    DescribeMaintenanceWindowScheduleResult& AddScheduledWindowExecutions(ScheduledWindowExecutionsT&& value) { m_scheduledWindowExecutionsHasBeenSet = true; m_scheduledWindowExecutions.emplace_back(std::forward<ScheduledWindowExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMaintenanceWindowScheduleResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMaintenanceWindowScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledWindowExecution> m_scheduledWindowExecutions;
    bool m_scheduledWindowExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
