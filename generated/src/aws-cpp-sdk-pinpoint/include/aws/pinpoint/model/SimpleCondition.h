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
    AWS_PINPOINT_API SimpleCondition();
    AWS_PINPOINT_API SimpleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SimpleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension settings for the event that's associated with the activity.</p>
     */
    inline const EventCondition& GetEventCondition() const{ return m_eventCondition; }
    inline bool EventConditionHasBeenSet() const { return m_eventConditionHasBeenSet; }
    inline void SetEventCondition(const EventCondition& value) { m_eventConditionHasBeenSet = true; m_eventCondition = value; }
    inline void SetEventCondition(EventCondition&& value) { m_eventConditionHasBeenSet = true; m_eventCondition = std::move(value); }
    inline SimpleCondition& WithEventCondition(const EventCondition& value) { SetEventCondition(value); return *this;}
    inline SimpleCondition& WithEventCondition(EventCondition&& value) { SetEventCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment that's associated with the activity.</p>
     */
    inline const SegmentCondition& GetSegmentCondition() const{ return m_segmentCondition; }
    inline bool SegmentConditionHasBeenSet() const { return m_segmentConditionHasBeenSet; }
    inline void SetSegmentCondition(const SegmentCondition& value) { m_segmentConditionHasBeenSet = true; m_segmentCondition = value; }
    inline void SetSegmentCondition(SegmentCondition&& value) { m_segmentConditionHasBeenSet = true; m_segmentCondition = std::move(value); }
    inline SimpleCondition& WithSegmentCondition(const SegmentCondition& value) { SetSegmentCondition(value); return *this;}
    inline SimpleCondition& WithSegmentCondition(SegmentCondition&& value) { SetSegmentCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension settings for the segment that's associated with the
     * activity.</p>
     */
    inline const SegmentDimensions& GetSegmentDimensions() const{ return m_segmentDimensions; }
    inline bool SegmentDimensionsHasBeenSet() const { return m_segmentDimensionsHasBeenSet; }
    inline void SetSegmentDimensions(const SegmentDimensions& value) { m_segmentDimensionsHasBeenSet = true; m_segmentDimensions = value; }
    inline void SetSegmentDimensions(SegmentDimensions&& value) { m_segmentDimensionsHasBeenSet = true; m_segmentDimensions = std::move(value); }
    inline SimpleCondition& WithSegmentDimensions(const SegmentDimensions& value) { SetSegmentDimensions(value); return *this;}
    inline SimpleCondition& WithSegmentDimensions(SegmentDimensions&& value) { SetSegmentDimensions(std::move(value)); return *this;}
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
