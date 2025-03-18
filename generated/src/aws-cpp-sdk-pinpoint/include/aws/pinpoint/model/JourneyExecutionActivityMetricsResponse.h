/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Provides the results of a query that retrieved the data for a standard
   * execution metric that applies to a journey activity, and provides information
   * about that query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyExecutionActivityMetricsResponse">AWS
   * API Reference</a></p>
   */
  class JourneyExecutionActivityMetricsResponse
  {
  public:
    AWS_PINPOINT_API JourneyExecutionActivityMetricsResponse() = default;
    AWS_PINPOINT_API JourneyExecutionActivityMetricsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyExecutionActivityMetricsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of activity that the metric applies to. Possible values are:</p>
     * <ul><li><p>CONDITIONAL_SPLIT – For a yes/no split activity, which is an activity
     * that sends participants down one of two paths in a journey.</p></li>
     * <li><p>HOLDOUT – For a holdout activity, which is an activity that stops a
     * journey for a specified percentage of participants.</p></li> <li><p>MESSAGE –
     * For an email activity, which is an activity that sends an email message to
     * participants.</p></li> <li><p>MULTI_CONDITIONAL_SPLIT – For a multivariate split
     * activity, which is an activity that sends participants down one of as many as
     * five paths in a journey.</p></li> <li><p>RANDOM_SPLIT – For a random split
     * activity, which is an activity that sends specified percentages of participants
     * down one of as many as five paths in a journey.</p></li> <li><p>WAIT – For a
     * wait activity, which is an activity that waits for a certain amount of time or
     * until a specific date and time before moving participants to the next activity
     * in a journey.</p></li></ul>
     */
    inline const Aws::String& GetActivityType() const { return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    template<typename ActivityTypeT = Aws::String>
    void SetActivityType(ActivityTypeT&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::forward<ActivityTypeT>(value); }
    template<typename ActivityTypeT = Aws::String>
    JourneyExecutionActivityMetricsResponse& WithActivityType(ActivityTypeT&& value) { SetActivityType(std::forward<ActivityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    JourneyExecutionActivityMetricsResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity that the metric applies to.</p>
     */
    inline const Aws::String& GetJourneyActivityId() const { return m_journeyActivityId; }
    inline bool JourneyActivityIdHasBeenSet() const { return m_journeyActivityIdHasBeenSet; }
    template<typename JourneyActivityIdT = Aws::String>
    void SetJourneyActivityId(JourneyActivityIdT&& value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId = std::forward<JourneyActivityIdT>(value); }
    template<typename JourneyActivityIdT = Aws::String>
    JourneyExecutionActivityMetricsResponse& WithJourneyActivityId(JourneyActivityIdT&& value) { SetJourneyActivityId(std::forward<JourneyActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline const Aws::String& GetJourneyId() const { return m_journeyId; }
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }
    template<typename JourneyIdT = Aws::String>
    void SetJourneyId(JourneyIdT&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::forward<JourneyIdT>(value); }
    template<typename JourneyIdT = Aws::String>
    JourneyExecutionActivityMetricsResponse& WithJourneyId(JourneyIdT&& value) { SetJourneyId(std::forward<JourneyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the execution status of the activity and updated the data for the metric.</p>
     */
    inline const Aws::String& GetLastEvaluatedTime() const { return m_lastEvaluatedTime; }
    inline bool LastEvaluatedTimeHasBeenSet() const { return m_lastEvaluatedTimeHasBeenSet; }
    template<typename LastEvaluatedTimeT = Aws::String>
    void SetLastEvaluatedTime(LastEvaluatedTimeT&& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = std::forward<LastEvaluatedTimeT>(value); }
    template<typename LastEvaluatedTimeT = Aws::String>
    JourneyExecutionActivityMetricsResponse& WithLastEvaluatedTime(LastEvaluatedTimeT&& value) { SetLastEvaluatedTime(std::forward<LastEvaluatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains the results of the query. The results vary
     * depending on the type of activity (ActivityType). For information about the
     * structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, Aws::String>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, Aws::String>>
    JourneyExecutionActivityMetricsResponse& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = Aws::String>
    JourneyExecutionActivityMetricsResponse& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_activityType;
    bool m_activityTypeHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_journeyActivityId;
    bool m_journeyActivityIdHasBeenSet = false;

    Aws::String m_journeyId;
    bool m_journeyIdHasBeenSet = false;

    Aws::String m_lastEvaluatedTime;
    bool m_lastEvaluatedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
