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
    AWS_SCHEDULER_API ListSchedulesResult() = default;
    AWS_SCHEDULER_API ListSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API ListSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether there are additional results to retrieve. If the value is
     * null, there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchedulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedules that match the specified criteria.</p>
     */
    inline const Aws::Vector<ScheduleSummary>& GetSchedules() const { return m_schedules; }
    template<typename SchedulesT = Aws::Vector<ScheduleSummary>>
    void SetSchedules(SchedulesT&& value) { m_schedulesHasBeenSet = true; m_schedules = std::forward<SchedulesT>(value); }
    template<typename SchedulesT = Aws::Vector<ScheduleSummary>>
    ListSchedulesResult& WithSchedules(SchedulesT&& value) { SetSchedules(std::forward<SchedulesT>(value)); return *this;}
    template<typename SchedulesT = ScheduleSummary>
    ListSchedulesResult& AddSchedules(SchedulesT&& value) { m_schedulesHasBeenSet = true; m_schedules.emplace_back(std::forward<SchedulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchedulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ScheduleSummary> m_schedules;
    bool m_schedulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
