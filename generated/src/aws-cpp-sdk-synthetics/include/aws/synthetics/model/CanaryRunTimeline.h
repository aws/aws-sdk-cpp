/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains the start and end times of a single canary
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunTimeline">AWS
   * API Reference</a></p>
   */
  class CanaryRunTimeline
  {
  public:
    AWS_SYNTHETICS_API CanaryRunTimeline() = default;
    AWS_SYNTHETICS_API CanaryRunTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the run.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const { return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    template<typename StartedT = Aws::Utils::DateTime>
    void SetStarted(StartedT&& value) { m_startedHasBeenSet = true; m_started = std::forward<StartedT>(value); }
    template<typename StartedT = Aws::Utils::DateTime>
    CanaryRunTimeline& WithStarted(StartedT&& value) { SetStarted(std::forward<StartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the run.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleted() const { return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    template<typename CompletedT = Aws::Utils::DateTime>
    void SetCompleted(CompletedT&& value) { m_completedHasBeenSet = true; m_completed = std::forward<CompletedT>(value); }
    template<typename CompletedT = Aws::Utils::DateTime>
    CanaryRunTimeline& WithCompleted(CompletedT&& value) { SetCompleted(std::forward<CompletedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the metrics will be generated for this run or retries.</p>
     */
    inline const Aws::Utils::DateTime& GetMetricTimestampForRunAndRetries() const { return m_metricTimestampForRunAndRetries; }
    inline bool MetricTimestampForRunAndRetriesHasBeenSet() const { return m_metricTimestampForRunAndRetriesHasBeenSet; }
    template<typename MetricTimestampForRunAndRetriesT = Aws::Utils::DateTime>
    void SetMetricTimestampForRunAndRetries(MetricTimestampForRunAndRetriesT&& value) { m_metricTimestampForRunAndRetriesHasBeenSet = true; m_metricTimestampForRunAndRetries = std::forward<MetricTimestampForRunAndRetriesT>(value); }
    template<typename MetricTimestampForRunAndRetriesT = Aws::Utils::DateTime>
    CanaryRunTimeline& WithMetricTimestampForRunAndRetries(MetricTimestampForRunAndRetriesT&& value) { SetMetricTimestampForRunAndRetries(std::forward<MetricTimestampForRunAndRetriesT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_started{};
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_completed{};
    bool m_completedHasBeenSet = false;

    Aws::Utils::DateTime m_metricTimestampForRunAndRetries{};
    bool m_metricTimestampForRunAndRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
