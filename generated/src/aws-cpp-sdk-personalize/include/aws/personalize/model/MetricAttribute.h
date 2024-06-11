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
    AWS_PERSONALIZE_API MetricAttribute();
    AWS_PERSONALIZE_API MetricAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API MetricAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric's event type.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline MetricAttribute& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline MetricAttribute& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline MetricAttribute& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric's name. The name helps you identify the metric in Amazon
     * CloudWatch or Amazon S3.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline MetricAttribute& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline MetricAttribute& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline MetricAttribute& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute's expression. Available functions are <code>SUM()</code> or
     * <code>SAMPLECOUNT()</code>. For SUM() functions, provide the dataset type
     * (either Interactions or Items) and column to sum as a parameter. For example
     * SUM(Items.PRICE).</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline MetricAttribute& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline MetricAttribute& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline MetricAttribute& WithExpression(const char* value) { SetExpression(value); return *this;}
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
