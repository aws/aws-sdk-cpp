/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/EventSummary.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListTimelineEventsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListTimelineEventsResult() = default;
    AWS_SSMINCIDENTS_API ListTimelineEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListTimelineEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline const Aws::Vector<EventSummary>& GetEventSummaries() const { return m_eventSummaries; }
    template<typename EventSummariesT = Aws::Vector<EventSummary>>
    void SetEventSummaries(EventSummariesT&& value) { m_eventSummariesHasBeenSet = true; m_eventSummaries = std::forward<EventSummariesT>(value); }
    template<typename EventSummariesT = Aws::Vector<EventSummary>>
    ListTimelineEventsResult& WithEventSummaries(EventSummariesT&& value) { SetEventSummaries(std::forward<EventSummariesT>(value)); return *this;}
    template<typename EventSummariesT = EventSummary>
    ListTimelineEventsResult& AddEventSummaries(EventSummariesT&& value) { m_eventSummariesHasBeenSet = true; m_eventSummaries.emplace_back(std::forward<EventSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTimelineEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTimelineEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventSummary> m_eventSummaries;
    bool m_eventSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
