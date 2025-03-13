/**
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
    AWS_PERSONALIZE_API ListEventTrackersResult() = default;
    AWS_PERSONALIZE_API ListEventTrackersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListEventTrackersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of event trackers.</p>
     */
    inline const Aws::Vector<EventTrackerSummary>& GetEventTrackers() const { return m_eventTrackers; }
    template<typename EventTrackersT = Aws::Vector<EventTrackerSummary>>
    void SetEventTrackers(EventTrackersT&& value) { m_eventTrackersHasBeenSet = true; m_eventTrackers = std::forward<EventTrackersT>(value); }
    template<typename EventTrackersT = Aws::Vector<EventTrackerSummary>>
    ListEventTrackersResult& WithEventTrackers(EventTrackersT&& value) { SetEventTrackers(std::forward<EventTrackersT>(value)); return *this;}
    template<typename EventTrackersT = EventTrackerSummary>
    ListEventTrackersResult& AddEventTrackers(EventTrackersT&& value) { m_eventTrackersHasBeenSet = true; m_eventTrackers.emplace_back(std::forward<EventTrackersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of event trackers (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventTrackersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventTrackersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventTrackerSummary> m_eventTrackers;
    bool m_eventTrackersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
