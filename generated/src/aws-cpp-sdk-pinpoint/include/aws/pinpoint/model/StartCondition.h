/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EventStartCondition.h>
#include <aws/pinpoint/model/SegmentCondition.h>
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
   * <p>Specifies the conditions for the first activity in a journey. This activity
   * and its conditions determine which users are participants in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/StartCondition">AWS
   * API Reference</a></p>
   */
  class StartCondition
  {
  public:
    AWS_PINPOINT_API StartCondition() = default;
    AWS_PINPOINT_API StartCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API StartCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom description of the condition.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartCondition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EventStartCondition& GetEventStartCondition() const { return m_eventStartCondition; }
    inline bool EventStartConditionHasBeenSet() const { return m_eventStartConditionHasBeenSet; }
    template<typename EventStartConditionT = EventStartCondition>
    void SetEventStartCondition(EventStartConditionT&& value) { m_eventStartConditionHasBeenSet = true; m_eventStartCondition = std::forward<EventStartConditionT>(value); }
    template<typename EventStartConditionT = EventStartCondition>
    StartCondition& WithEventStartCondition(EventStartConditionT&& value) { SetEventStartCondition(std::forward<EventStartConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment that's associated with the first activity in the journey. This
     * segment determines which users are participants in the journey.</p>
     */
    inline const SegmentCondition& GetSegmentStartCondition() const { return m_segmentStartCondition; }
    inline bool SegmentStartConditionHasBeenSet() const { return m_segmentStartConditionHasBeenSet; }
    template<typename SegmentStartConditionT = SegmentCondition>
    void SetSegmentStartCondition(SegmentStartConditionT&& value) { m_segmentStartConditionHasBeenSet = true; m_segmentStartCondition = std::forward<SegmentStartConditionT>(value); }
    template<typename SegmentStartConditionT = SegmentCondition>
    StartCondition& WithSegmentStartCondition(SegmentStartConditionT&& value) { SetSegmentStartCondition(std::forward<SegmentStartConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EventStartCondition m_eventStartCondition;
    bool m_eventStartConditionHasBeenSet = false;

    SegmentCondition m_segmentStartCondition;
    bool m_segmentStartConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
