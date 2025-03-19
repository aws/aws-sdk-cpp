/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A summary of the metrics of a trial component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentMetricSummary">AWS
   * API Reference</a></p>
   */
  class TrialComponentMetricSummary
  {
  public:
    AWS_SAGEMAKER_API TrialComponentMetricSummary() = default;
    AWS_SAGEMAKER_API TrialComponentMetricSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentMetricSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    TrialComponentMetricSummary& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    TrialComponentMetricSummary& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the metric was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const { return m_timeStamp; }
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }
    template<typename TimeStampT = Aws::Utils::DateTime>
    void SetTimeStamp(TimeStampT&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::forward<TimeStampT>(value); }
    template<typename TimeStampT = Aws::Utils::DateTime>
    TrialComponentMetricSummary& WithTimeStamp(TimeStampT&& value) { SetTimeStamp(std::forward<TimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the metric.</p>
     */
    inline double GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline TrialComponentMetricSummary& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of the metric.</p>
     */
    inline double GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline TrialComponentMetricSummary& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent value of the metric.</p>
     */
    inline double GetLast() const { return m_last; }
    inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }
    inline void SetLast(double value) { m_lastHasBeenSet = true; m_last = value; }
    inline TrialComponentMetricSummary& WithLast(double value) { SetLast(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of samples used to generate the metric.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline TrialComponentMetricSummary& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of the metric.</p>
     */
    inline double GetAvg() const { return m_avg; }
    inline bool AvgHasBeenSet() const { return m_avgHasBeenSet; }
    inline void SetAvg(double value) { m_avgHasBeenSet = true; m_avg = value; }
    inline TrialComponentMetricSummary& WithAvg(double value) { SetAvg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard deviation of the metric.</p>
     */
    inline double GetStdDev() const { return m_stdDev; }
    inline bool StdDevHasBeenSet() const { return m_stdDevHasBeenSet; }
    inline void SetStdDev(double value) { m_stdDevHasBeenSet = true; m_stdDev = value; }
    inline TrialComponentMetricSummary& WithStdDev(double value) { SetStdDev(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_timeStamp{};
    bool m_timeStampHasBeenSet = false;

    double m_max{0.0};
    bool m_maxHasBeenSet = false;

    double m_min{0.0};
    bool m_minHasBeenSet = false;

    double m_last{0.0};
    bool m_lastHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    double m_avg{0.0};
    bool m_avgHasBeenSet = false;

    double m_stdDev{0.0};
    bool m_stdDevHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
