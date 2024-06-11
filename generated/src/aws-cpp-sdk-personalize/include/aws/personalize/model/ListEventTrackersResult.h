﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/EventTrackerSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListEventTrackersResult
  {
  public:
    AWS_PERSONALIZE_API ListEventTrackersResult();
    AWS_PERSONALIZE_API ListEventTrackersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListEventTrackersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of event trackers.</p>
     */
    inline const Aws::Vector<EventTrackerSummary>& GetEventTrackers() const{ return m_eventTrackers; }
    inline void SetEventTrackers(const Aws::Vector<EventTrackerSummary>& value) { m_eventTrackers = value; }
    inline void SetEventTrackers(Aws::Vector<EventTrackerSummary>&& value) { m_eventTrackers = std::move(value); }
    inline ListEventTrackersResult& WithEventTrackers(const Aws::Vector<EventTrackerSummary>& value) { SetEventTrackers(value); return *this;}
    inline ListEventTrackersResult& WithEventTrackers(Aws::Vector<EventTrackerSummary>&& value) { SetEventTrackers(std::move(value)); return *this;}
    inline ListEventTrackersResult& AddEventTrackers(const EventTrackerSummary& value) { m_eventTrackers.push_back(value); return *this; }
    inline ListEventTrackersResult& AddEventTrackers(EventTrackerSummary&& value) { m_eventTrackers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of event trackers (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventTrackersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventTrackersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventTrackersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventTrackersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventTrackersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventTrackersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventTrackerSummary> m_eventTrackers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
