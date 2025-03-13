/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/sagemaker-metrics/model/MetricQueryResultStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMakerMetrics
{
namespace Model
{

  /**
   * <p>The result of a query to retrieve training metrics from
   * SageMaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/MetricQueryResult">AWS
   * API Reference</a></p>
   */
  class MetricQueryResult
  {
  public:
    AWS_SAGEMAKERMETRICS_API MetricQueryResult() = default;
    AWS_SAGEMAKERMETRICS_API MetricQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API MetricQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the metric query.</p>
     */
    inline MetricQueryResultStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MetricQueryResultStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MetricQueryResult& WithStatus(MetricQueryResultStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the status of the metric query.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    MetricQueryResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the x-axis of the metrics.</p>
     */
    inline const Aws::Vector<long long>& GetXAxisValues() const { return m_xAxisValues; }
    inline bool XAxisValuesHasBeenSet() const { return m_xAxisValuesHasBeenSet; }
    template<typename XAxisValuesT = Aws::Vector<long long>>
    void SetXAxisValues(XAxisValuesT&& value) { m_xAxisValuesHasBeenSet = true; m_xAxisValues = std::forward<XAxisValuesT>(value); }
    template<typename XAxisValuesT = Aws::Vector<long long>>
    MetricQueryResult& WithXAxisValues(XAxisValuesT&& value) { SetXAxisValues(std::forward<XAxisValuesT>(value)); return *this;}
    inline MetricQueryResult& AddXAxisValues(long long value) { m_xAxisValuesHasBeenSet = true; m_xAxisValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metric values retrieved by the query.</p>
     */
    inline const Aws::Vector<double>& GetMetricValues() const { return m_metricValues; }
    inline bool MetricValuesHasBeenSet() const { return m_metricValuesHasBeenSet; }
    template<typename MetricValuesT = Aws::Vector<double>>
    void SetMetricValues(MetricValuesT&& value) { m_metricValuesHasBeenSet = true; m_metricValues = std::forward<MetricValuesT>(value); }
    template<typename MetricValuesT = Aws::Vector<double>>
    MetricQueryResult& WithMetricValues(MetricValuesT&& value) { SetMetricValues(std::forward<MetricValuesT>(value)); return *this;}
    inline MetricQueryResult& AddMetricValues(double value) { m_metricValuesHasBeenSet = true; m_metricValues.push_back(value); return *this; }
    ///@}
  private:

    MetricQueryResultStatus m_status{MetricQueryResultStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<long long> m_xAxisValues;
    bool m_xAxisValuesHasBeenSet = false;

    Aws::Vector<double> m_metricValues;
    bool m_metricValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
