/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/SetDimension.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/AttributeDimension.h>
#include <aws/pinpoint/model/MetricDimension.h>
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
   * <p>Specifies the dimensions for an event filter that determines when a campaign
   * is sent or a journey activity is performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventDimensions">AWS
   * API Reference</a></p>
   */
  class EventDimensions
  {
  public:
    AWS_PINPOINT_API EventDimensions() = default;
    AWS_PINPOINT_API EventDimensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeDimension>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeDimension>>
    EventDimensions& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = AttributeDimension>
    EventDimensions& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline const SetDimension& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = SetDimension>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = SetDimension>
    EventDimensions& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline const Aws::Map<Aws::String, MetricDimension>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, MetricDimension>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, MetricDimension>>
    EventDimensions& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = MetricDimension>
    EventDimensions& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, AttributeDimension> m_attributes;
    bool m_attributesHasBeenSet = false;

    SetDimension m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Map<Aws::String, MetricDimension> m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
