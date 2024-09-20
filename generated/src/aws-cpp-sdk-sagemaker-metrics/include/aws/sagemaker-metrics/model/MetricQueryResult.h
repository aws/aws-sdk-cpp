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
    AWS_SAGEMAKERMETRICS_API MetricQueryResult();
    AWS_SAGEMAKERMETRICS_API MetricQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API MetricQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the metric query.</p>
     */
    inline const MetricQueryResultStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MetricQueryResultStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MetricQueryResultStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MetricQueryResult& WithStatus(const MetricQueryResultStatus& value) { SetStatus(value); return *this;}
    inline MetricQueryResult& WithStatus(MetricQueryResultStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the status of the metric query.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline MetricQueryResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline MetricQueryResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline MetricQueryResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the x-axis of the metrics.</p>
     */
    inline const Aws::Vector<long long>& GetXAxisValues() const{ return m_xAxisValues; }
    inline bool XAxisValuesHasBeenSet() const { return m_xAxisValuesHasBeenSet; }
    inline void SetXAxisValues(const Aws::Vector<long long>& value) { m_xAxisValuesHasBeenSet = true; m_xAxisValues = value; }
    inline void SetXAxisValues(Aws::Vector<long long>&& value) { m_xAxisValuesHasBeenSet = true; m_xAxisValues = std::move(value); }
    inline MetricQueryResult& WithXAxisValues(const Aws::Vector<long long>& value) { SetXAxisValues(value); return *this;}
    inline MetricQueryResult& WithXAxisValues(Aws::Vector<long long>&& value) { SetXAxisValues(std::move(value)); return *this;}
    inline MetricQueryResult& AddXAxisValues(long long value) { m_xAxisValuesHasBeenSet = true; m_xAxisValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metric values retrieved by the query.</p>
     */
    inline const Aws::Vector<double>& GetMetricValues() const{ return m_metricValues; }
    inline bool MetricValuesHasBeenSet() const { return m_metricValuesHasBeenSet; }
    inline void SetMetricValues(const Aws::Vector<double>& value) { m_metricValuesHasBeenSet = true; m_metricValues = value; }
    inline void SetMetricValues(Aws::Vector<double>&& value) { m_metricValuesHasBeenSet = true; m_metricValues = std::move(value); }
    inline MetricQueryResult& WithMetricValues(const Aws::Vector<double>& value) { SetMetricValues(value); return *this;}
    inline MetricQueryResult& WithMetricValues(Aws::Vector<double>&& value) { SetMetricValues(std::move(value)); return *this;}
    inline MetricQueryResult& AddMetricValues(double value) { m_metricValuesHasBeenSet = true; m_metricValues.push_back(value); return *this; }
    ///@}
  private:

    MetricQueryResultStatus m_status;
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
