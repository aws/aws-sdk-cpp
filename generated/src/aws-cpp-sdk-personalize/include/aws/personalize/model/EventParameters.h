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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the parameters of events, which are used in solution
   * creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/EventParameters">AWS
   * API Reference</a></p>
   */
  class EventParameters
  {
  public:
    AWS_PERSONALIZE_API EventParameters() = default;
    AWS_PERSONALIZE_API EventParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API EventParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the event type to be considered for solution creation.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    EventParameters& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold of the event type. Only events with a value greater or equal to
     * this threshold will be considered for solution creation.</p>
     */
    inline double GetEventValueThreshold() const { return m_eventValueThreshold; }
    inline bool EventValueThresholdHasBeenSet() const { return m_eventValueThresholdHasBeenSet; }
    inline void SetEventValueThreshold(double value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold = value; }
    inline EventParameters& WithEventValueThreshold(double value) { SetEventValueThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight of the event type. A higher weight means higher importance of the
     * event type for the created solution.</p>
     */
    inline double GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }
    inline EventParameters& WithWeight(double value) { SetWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    double m_eventValueThreshold{0.0};
    bool m_eventValueThresholdHasBeenSet = false;

    double m_weight{0.0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
