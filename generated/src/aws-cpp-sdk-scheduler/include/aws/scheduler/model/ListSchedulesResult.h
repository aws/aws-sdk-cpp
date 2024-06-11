/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/scheduler/model/ScheduleSummary.h>
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
namespace Scheduler
{
namespace Model
{
  class ListSchedulesResult
  {
  public:
    AWS_SCHEDULER_API ListSchedulesResult();
    AWS_SCHEDULER_API ListSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API ListSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether there are additional results to retrieve. If the value is
     * null, there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSchedulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchedulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchedulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedules that match the specified criteria.</p>
     */
    inline const Aws::Vector<ScheduleSummary>& GetSchedules() const{ return m_schedules; }
    inline void SetSchedules(const Aws::Vector<ScheduleSummary>& value) { m_schedules = value; }
    inline void SetSchedules(Aws::Vector<ScheduleSummary>&& value) { m_schedules = std::move(value); }
    inline ListSchedulesResult& WithSchedules(const Aws::Vector<ScheduleSummary>& value) { SetSchedules(value); return *this;}
    inline ListSchedulesResult& WithSchedules(Aws::Vector<ScheduleSummary>&& value) { SetSchedules(std::move(value)); return *this;}
    inline ListSchedulesResult& AddSchedules(const ScheduleSummary& value) { m_schedules.push_back(value); return *this; }
    inline ListSchedulesResult& AddSchedules(ScheduleSummary&& value) { m_schedules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSchedulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSchedulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSchedulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ScheduleSummary> m_schedules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
