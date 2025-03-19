/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>

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
namespace MWAA
{
namespace Model
{

  /**
   * <p> <b>Internal only</b>. Represents a set of statistics that describe a
   * specific metric. To learn more about the metrics published to Amazon CloudWatch,
   * see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
   * MWAA performance metrics in Amazon CloudWatch</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/StatisticSet">AWS
   * API Reference</a></p>
   */
  class StatisticSet
  {
  public:
    AWS_MWAA_API StatisticSet() = default;
    AWS_MWAA_API StatisticSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API StatisticSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <b>Internal only</b>. The number of samples used for the statistic set.</p>
     */
    inline int GetSampleCount() const { return m_sampleCount; }
    inline bool SampleCountHasBeenSet() const { return m_sampleCountHasBeenSet; }
    inline void SetSampleCount(int value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }
    inline StatisticSet& WithSampleCount(int value) { SetSampleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The sum of values for the sample set.</p>
     */
    inline double GetSum() const { return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline StatisticSet& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The minimum value of the sample set.</p>
     */
    inline double GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline StatisticSet& WithMinimum(double value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The maximum value of the sample set.</p>
     */
    inline double GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline StatisticSet& WithMaximum(double value) { SetMaximum(value); return *this;}
    ///@}
  private:

    int m_sampleCount{0};
    bool m_sampleCountHasBeenSet = false;

    double m_sum{0.0};
    bool m_sumHasBeenSet = false;

    double m_minimum{0.0};
    bool m_minimumHasBeenSet = false;

    double m_maximum{0.0};
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
