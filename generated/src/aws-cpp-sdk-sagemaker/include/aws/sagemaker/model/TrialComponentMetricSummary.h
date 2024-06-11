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
    AWS_SAGEMAKER_API TrialComponentMetricSummary();
    AWS_SAGEMAKER_API TrialComponentMetricSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentMetricSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline TrialComponentMetricSummary& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline TrialComponentMetricSummary& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline TrialComponentMetricSummary& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline TrialComponentMetricSummary& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline TrialComponentMetricSummary& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline TrialComponentMetricSummary& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the metric was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const{ return m_timeStamp; }
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }
    inline void SetTimeStamp(const Aws::Utils::DateTime& value) { m_timeStampHasBeenSet = true; m_timeStamp = value; }
    inline void SetTimeStamp(Aws::Utils::DateTime&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::move(value); }
    inline TrialComponentMetricSummary& WithTimeStamp(const Aws::Utils::DateTime& value) { SetTimeStamp(value); return *this;}
    inline TrialComponentMetricSummary& WithTimeStamp(Aws::Utils::DateTime&& value) { SetTimeStamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the metric.</p>
     */
    inline double GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline TrialComponentMetricSummary& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of the metric.</p>
     */
    inline double GetMin() const{ return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline TrialComponentMetricSummary& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent value of the metric.</p>
     */
    inline double GetLast() const{ return m_last; }
    inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }
    inline void SetLast(double value) { m_lastHasBeenSet = true; m_last = value; }
    inline TrialComponentMetricSummary& WithLast(double value) { SetLast(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of samples used to generate the metric.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline TrialComponentMetricSummary& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average value of the metric.</p>
     */
    inline double GetAvg() const{ return m_avg; }
    inline bool AvgHasBeenSet() const { return m_avgHasBeenSet; }
    inline void SetAvg(double value) { m_avgHasBeenSet = true; m_avg = value; }
    inline TrialComponentMetricSummary& WithAvg(double value) { SetAvg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard deviation of the metric.</p>
     */
    inline double GetStdDev() const{ return m_stdDev; }
    inline bool StdDevHasBeenSet() const { return m_stdDevHasBeenSet; }
    inline void SetStdDev(double value) { m_stdDevHasBeenSet = true; m_stdDev = value; }
    inline TrialComponentMetricSummary& WithStdDev(double value) { SetStdDev(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_timeStamp;
    bool m_timeStampHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;

    double m_min;
    bool m_minHasBeenSet = false;

    double m_last;
    bool m_lastHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    double m_avg;
    bool m_avgHasBeenSet = false;

    double m_stdDev;
    bool m_stdDevHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
