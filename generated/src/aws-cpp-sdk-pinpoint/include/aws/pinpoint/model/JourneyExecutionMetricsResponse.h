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
   * execution metric that applies to a journey, and provides information about that
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyExecutionMetricsResponse">AWS
   * API Reference</a></p>
   */
  class JourneyExecutionMetricsResponse
  {
  public:
    AWS_PINPOINT_API JourneyExecutionMetricsResponse() = default;
    AWS_PINPOINT_API JourneyExecutionMetricsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyExecutionMetricsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    JourneyExecutionMetricsResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
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
    JourneyExecutionMetricsResponse& WithJourneyId(JourneyIdT&& value) { SetJourneyId(std::forward<JourneyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline const Aws::String& GetLastEvaluatedTime() const { return m_lastEvaluatedTime; }
    inline bool LastEvaluatedTimeHasBeenSet() const { return m_lastEvaluatedTimeHasBeenSet; }
    template<typename LastEvaluatedTimeT = Aws::String>
    void SetLastEvaluatedTime(LastEvaluatedTimeT&& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = std::forward<LastEvaluatedTimeT>(value); }
    template<typename LastEvaluatedTimeT = Aws::String>
    JourneyExecutionMetricsResponse& WithLastEvaluatedTime(LastEvaluatedTimeT&& value) { SetLastEvaluatedTime(std::forward<LastEvaluatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, Aws::String>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, Aws::String>>
    JourneyExecutionMetricsResponse& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = Aws::String>
    JourneyExecutionMetricsResponse& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

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
