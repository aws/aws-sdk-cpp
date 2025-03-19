/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/EventTracker.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeEventTrackerResult
  {
  public:
    AWS_PERSONALIZE_API DescribeEventTrackerResult() = default;
    AWS_PERSONALIZE_API DescribeEventTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeEventTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the event tracker.</p>
     */
    inline const EventTracker& GetEventTracker() const { return m_eventTracker; }
    template<typename EventTrackerT = EventTracker>
    void SetEventTracker(EventTrackerT&& value) { m_eventTrackerHasBeenSet = true; m_eventTracker = std::forward<EventTrackerT>(value); }
    template<typename EventTrackerT = EventTracker>
    DescribeEventTrackerResult& WithEventTracker(EventTrackerT&& value) { SetEventTracker(std::forward<EventTrackerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventTrackerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EventTracker m_eventTracker;
    bool m_eventTrackerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
