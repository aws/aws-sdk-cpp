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
    AWS_PINPOINT_API JourneyExecutionMetricsResponse();
    AWS_PINPOINT_API JourneyExecutionMetricsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyExecutionMetricsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline JourneyExecutionMetricsResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline JourneyExecutionMetricsResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline JourneyExecutionMetricsResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline const Aws::String& GetJourneyId() const{ return m_journeyId; }

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline void SetJourneyId(const Aws::String& value) { m_journeyIdHasBeenSet = true; m_journeyId = value; }

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline void SetJourneyId(Aws::String&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::move(value); }

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline void SetJourneyId(const char* value) { m_journeyIdHasBeenSet = true; m_journeyId.assign(value); }

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline JourneyExecutionMetricsResponse& WithJourneyId(const Aws::String& value) { SetJourneyId(value); return *this;}

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline JourneyExecutionMetricsResponse& WithJourneyId(Aws::String&& value) { SetJourneyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline JourneyExecutionMetricsResponse& WithJourneyId(const char* value) { SetJourneyId(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline const Aws::String& GetLastEvaluatedTime() const{ return m_lastEvaluatedTime; }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline bool LastEvaluatedTimeHasBeenSet() const { return m_lastEvaluatedTimeHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline void SetLastEvaluatedTime(const Aws::String& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline void SetLastEvaluatedTime(Aws::String&& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline void SetLastEvaluatedTime(const char* value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline JourneyExecutionMetricsResponse& WithLastEvaluatedTime(const Aws::String& value) { SetLastEvaluatedTime(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline JourneyExecutionMetricsResponse& WithLastEvaluatedTime(Aws::String&& value) { SetLastEvaluatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the journey and updated the data for the metric.</p>
     */
    inline JourneyExecutionMetricsResponse& WithLastEvaluatedTime(const char* value) { SetLastEvaluatedTime(value); return *this;}


    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& WithMetrics(const Aws::Map<Aws::String, Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& WithMetrics(Aws::Map<Aws::String, Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(const Aws::String& key, const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(Aws::String&& key, const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(const Aws::String& key, Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(Aws::String&& key, Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(const char* key, Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(Aws::String&& key, const char* value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see the <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline JourneyExecutionMetricsResponse& AddMetrics(const char* key, const char* value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

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
