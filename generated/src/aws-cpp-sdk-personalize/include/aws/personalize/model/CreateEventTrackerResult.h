/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
  class CreateEventTrackerResult
  {
  public:
    AWS_PERSONALIZE_API CreateEventTrackerResult() = default;
    AWS_PERSONALIZE_API CreateEventTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateEventTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const { return m_eventTrackerArn; }
    template<typename EventTrackerArnT = Aws::String>
    void SetEventTrackerArn(EventTrackerArnT&& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = std::forward<EventTrackerArnT>(value); }
    template<typename EventTrackerArnT = Aws::String>
    CreateEventTrackerResult& WithEventTrackerArn(EventTrackerArnT&& value) { SetEventTrackerArn(std::forward<EventTrackerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline const Aws::String& GetTrackingId() const { return m_trackingId; }
    template<typename TrackingIdT = Aws::String>
    void SetTrackingId(TrackingIdT&& value) { m_trackingIdHasBeenSet = true; m_trackingId = std::forward<TrackingIdT>(value); }
    template<typename TrackingIdT = Aws::String>
    CreateEventTrackerResult& WithTrackingId(TrackingIdT&& value) { SetTrackingId(std::forward<TrackingIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEventTrackerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventTrackerArn;
    bool m_eventTrackerArnHasBeenSet = false;

    Aws::String m_trackingId;
    bool m_trackingIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
