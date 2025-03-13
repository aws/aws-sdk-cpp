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
   * <p>Contains information on a metric that a metric attribution reports on. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
   * impact of recommendations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/MetricAttribute">AWS
   * API Reference</a></p>
   */
  class MetricAttribute
  {
  public:
    AWS_PERSONALIZE_API MetricAttribute() = default;
    AWS_PERSONALIZE_API MetricAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API MetricAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric's event type.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    MetricAttribute& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric's name. The name helps you identify the metric in Amazon
     * CloudWatch or Amazon S3.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricAttribute& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute's expression. Available functions are <code>SUM()</code> or
     * <code>SAMPLECOUNT()</code>. For SUM() functions, provide the dataset type
     * (either Interactions or Items) and column to sum as a parameter. For example
     * SUM(Items.PRICE).</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    MetricAttribute& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
