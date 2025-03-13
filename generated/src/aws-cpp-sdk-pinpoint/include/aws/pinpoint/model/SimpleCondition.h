/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventCondition.h>
#include <aws/pinpoint/model/SegmentCondition.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
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
   * <p>Specifies a condition to evaluate for an activity in a journey.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SimpleCondition">AWS
   * API Reference</a></p>
   */
  class SimpleCondition
  {
  public:
    AWS_PINPOINT_API SimpleCondition() = default;
    AWS_PINPOINT_API SimpleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SimpleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension settings for the event that's associated with the activity.</p>
     */
    inline const EventCondition& GetEventCondition() const { return m_eventCondition; }
    inline bool EventConditionHasBeenSet() const { return m_eventConditionHasBeenSet; }
    template<typename EventConditionT = EventCondition>
    void SetEventCondition(EventConditionT&& value) { m_eventConditionHasBeenSet = true; m_eventCondition = std::forward<EventConditionT>(value); }
    template<typename EventConditionT = EventCondition>
    SimpleCondition& WithEventCondition(EventConditionT&& value) { SetEventCondition(std::forward<EventConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment that's associated with the activity.</p>
     */
    inline const SegmentCondition& GetSegmentCondition() const { return m_segmentCondition; }
    inline bool SegmentConditionHasBeenSet() const { return m_segmentConditionHasBeenSet; }
    template<typename SegmentConditionT = SegmentCondition>
    void SetSegmentCondition(SegmentConditionT&& value) { m_segmentConditionHasBeenSet = true; m_segmentCondition = std::forward<SegmentConditionT>(value); }
    template<typename SegmentConditionT = SegmentCondition>
    SimpleCondition& WithSegmentCondition(SegmentConditionT&& value) { SetSegmentCondition(std::forward<SegmentConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension settings for the segment that's associated with the
     * activity.</p>
     */
    inline const SegmentDimensions& GetSegmentDimensions() const { return m_segmentDimensions; }
    inline bool SegmentDimensionsHasBeenSet() const { return m_segmentDimensionsHasBeenSet; }
    template<typename SegmentDimensionsT = SegmentDimensions>
    void SetSegmentDimensions(SegmentDimensionsT&& value) { m_segmentDimensionsHasBeenSet = true; m_segmentDimensions = std::forward<SegmentDimensionsT>(value); }
    template<typename SegmentDimensionsT = SegmentDimensions>
    SimpleCondition& WithSegmentDimensions(SegmentDimensionsT&& value) { SetSegmentDimensions(std::forward<SegmentDimensionsT>(value)); return *this;}
    ///@}
  private:

    EventCondition m_eventCondition;
    bool m_eventConditionHasBeenSet = false;

    SegmentCondition m_segmentCondition;
    bool m_segmentConditionHasBeenSet = false;

    SegmentDimensions m_segmentDimensions;
    bool m_segmentDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
