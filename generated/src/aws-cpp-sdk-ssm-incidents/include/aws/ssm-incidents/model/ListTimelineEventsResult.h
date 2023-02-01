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
    AWS_SSMINCIDENTS_API ListTimelineEventsResult();
    AWS_SSMINCIDENTS_API ListTimelineEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListTimelineEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline const Aws::Vector<EventSummary>& GetEventSummaries() const{ return m_eventSummaries; }

    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline void SetEventSummaries(const Aws::Vector<EventSummary>& value) { m_eventSummaries = value; }

    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline void SetEventSummaries(Aws::Vector<EventSummary>&& value) { m_eventSummaries = std::move(value); }

    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline ListTimelineEventsResult& WithEventSummaries(const Aws::Vector<EventSummary>& value) { SetEventSummaries(value); return *this;}

    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline ListTimelineEventsResult& WithEventSummaries(Aws::Vector<EventSummary>&& value) { SetEventSummaries(std::move(value)); return *this;}

    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline ListTimelineEventsResult& AddEventSummaries(const EventSummary& value) { m_eventSummaries.push_back(value); return *this; }

    /**
     * <p>Details about each event that occurred during the incident.</p>
     */
    inline ListTimelineEventsResult& AddEventSummaries(EventSummary&& value) { m_eventSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListTimelineEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListTimelineEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListTimelineEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventSummary> m_eventSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
