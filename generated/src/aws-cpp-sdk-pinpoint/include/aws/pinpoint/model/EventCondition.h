/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventDimensions.h>
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
   * <p>Specifies the conditions to evaluate for an event that applies to an activity
   * in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventCondition">AWS
   * API Reference</a></p>
   */
  class EventCondition
  {
  public:
    AWS_PINPOINT_API EventCondition() = default;
    AWS_PINPOINT_API EventCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimensions for the event filter to use for the activity.</p>
     */
    inline const EventDimensions& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = EventDimensions>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = EventDimensions>
    EventCondition& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message identifier (message_id) for the message to use when determining
     * whether message events meet the condition.</p>
     */
    inline const Aws::String& GetMessageActivity() const { return m_messageActivity; }
    inline bool MessageActivityHasBeenSet() const { return m_messageActivityHasBeenSet; }
    template<typename MessageActivityT = Aws::String>
    void SetMessageActivity(MessageActivityT&& value) { m_messageActivityHasBeenSet = true; m_messageActivity = std::forward<MessageActivityT>(value); }
    template<typename MessageActivityT = Aws::String>
    EventCondition& WithMessageActivity(MessageActivityT&& value) { SetMessageActivity(std::forward<MessageActivityT>(value)); return *this;}
    ///@}
  private:

    EventDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_messageActivity;
    bool m_messageActivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
