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
    AWS_SSM_API DescribeMaintenanceWindowScheduleResult();
    AWS_SSM_API DescribeMaintenanceWindowScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeMaintenanceWindowScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline const Aws::Vector<ScheduledWindowExecution>& GetScheduledWindowExecutions() const{ return m_scheduledWindowExecutions; }
    inline void SetScheduledWindowExecutions(const Aws::Vector<ScheduledWindowExecution>& value) { m_scheduledWindowExecutions = value; }
    inline void SetScheduledWindowExecutions(Aws::Vector<ScheduledWindowExecution>&& value) { m_scheduledWindowExecutions = std::move(value); }
    inline DescribeMaintenanceWindowScheduleResult& WithScheduledWindowExecutions(const Aws::Vector<ScheduledWindowExecution>& value) { SetScheduledWindowExecutions(value); return *this;}
    inline DescribeMaintenanceWindowScheduleResult& WithScheduledWindowExecutions(Aws::Vector<ScheduledWindowExecution>&& value) { SetScheduledWindowExecutions(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowScheduleResult& AddScheduledWindowExecutions(const ScheduledWindowExecution& value) { m_scheduledWindowExecutions.push_back(value); return *this; }
    inline DescribeMaintenanceWindowScheduleResult& AddScheduledWindowExecutions(ScheduledWindowExecution&& value) { m_scheduledWindowExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeMaintenanceWindowScheduleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMaintenanceWindowScheduleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowScheduleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMaintenanceWindowScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMaintenanceWindowScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMaintenanceWindowScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledWindowExecution> m_scheduledWindowExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
