/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for an event that causes a journey activity to
   * start.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventStartCondition">AWS
   * API Reference</a></p>
   */
  class EventStartCondition
  {
  public:
    AWS_PINPOINT_API EventStartCondition();
    AWS_PINPOINT_API EventStartCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventStartCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const EventFilter& GetEventFilter() const{ return m_eventFilter; }

    
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    
    inline void SetEventFilter(const EventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    
    inline void SetEventFilter(EventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    
    inline EventStartCondition& WithEventFilter(const EventFilter& value) { SetEventFilter(value); return *this;}

    
    inline EventStartCondition& WithEventFilter(EventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    
    inline EventStartCondition& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    
    inline EventStartCondition& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    
    inline EventStartCondition& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}

  private:

    EventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
