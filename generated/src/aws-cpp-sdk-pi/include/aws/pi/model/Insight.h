/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/ContextType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pi/model/Severity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/Recommendation.h>
#include <aws/pi/model/Data.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>Retrieves the list of performance issues which are identified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/Insight">AWS API
   * Reference</a></p>
   */
  class Insight
  {
  public:
    AWS_PI_API Insight();
    AWS_PI_API Insight(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline Insight& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline Insight& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline Insight& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline const Aws::String& GetInsightType() const{ return m_insightType; }

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline bool InsightTypeHasBeenSet() const { return m_insightTypeHasBeenSet; }

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline void SetInsightType(const Aws::String& value) { m_insightTypeHasBeenSet = true; m_insightType = value; }

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline void SetInsightType(Aws::String&& value) { m_insightTypeHasBeenSet = true; m_insightType = std::move(value); }

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline void SetInsightType(const char* value) { m_insightTypeHasBeenSet = true; m_insightType.assign(value); }

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline Insight& WithInsightType(const Aws::String& value) { SetInsightType(value); return *this;}

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline Insight& WithInsightType(Aws::String&& value) { SetInsightType(std::move(value)); return *this;}

    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline Insight& WithInsightType(const char* value) { SetInsightType(value); return *this;}


    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline const ContextType& GetContext() const{ return m_context; }

    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline void SetContext(const ContextType& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline void SetContext(ContextType&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline Insight& WithContext(const ContextType& value) { SetContext(value); return *this;}

    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline Insight& WithContext(ContextType&& value) { SetContext(std::move(value)); return *this;}


    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline Insight& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline Insight& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline Insight& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline Insight& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline Insight& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline Insight& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline const Aws::Vector<Insight>& GetSupportingInsights() const{ return m_supportingInsights; }

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline bool SupportingInsightsHasBeenSet() const { return m_supportingInsightsHasBeenSet; }

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline void SetSupportingInsights(const Aws::Vector<Insight>& value) { m_supportingInsightsHasBeenSet = true; m_supportingInsights = value; }

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline void SetSupportingInsights(Aws::Vector<Insight>&& value) { m_supportingInsightsHasBeenSet = true; m_supportingInsights = std::move(value); }

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline Insight& WithSupportingInsights(const Aws::Vector<Insight>& value) { SetSupportingInsights(value); return *this;}

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline Insight& WithSupportingInsights(Aws::Vector<Insight>&& value) { SetSupportingInsights(std::move(value)); return *this;}

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline Insight& AddSupportingInsights(const Insight& value) { m_supportingInsightsHasBeenSet = true; m_supportingInsights.push_back(value); return *this; }

    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline Insight& AddSupportingInsights(Insight&& value) { m_supportingInsightsHasBeenSet = true; m_supportingInsights.push_back(std::move(value)); return *this; }


    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline Insight& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline Insight& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline Insight& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendationsHasBeenSet = true; m_recommendations = value; }

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::move(value); }

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline Insight& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline Insight& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline Insight& AddRecommendations(const Recommendation& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(value); return *this; }

    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline Insight& AddRecommendations(Recommendation&& value) { m_recommendationsHasBeenSet = true; m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline const Aws::Vector<Data>& GetInsightData() const{ return m_insightData; }

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline bool InsightDataHasBeenSet() const { return m_insightDataHasBeenSet; }

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline void SetInsightData(const Aws::Vector<Data>& value) { m_insightDataHasBeenSet = true; m_insightData = value; }

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline void SetInsightData(Aws::Vector<Data>&& value) { m_insightDataHasBeenSet = true; m_insightData = std::move(value); }

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline Insight& WithInsightData(const Aws::Vector<Data>& value) { SetInsightData(value); return *this;}

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline Insight& WithInsightData(Aws::Vector<Data>&& value) { SetInsightData(std::move(value)); return *this;}

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline Insight& AddInsightData(const Data& value) { m_insightDataHasBeenSet = true; m_insightData.push_back(value); return *this; }

    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline Insight& AddInsightData(Data&& value) { m_insightDataHasBeenSet = true; m_insightData.push_back(std::move(value)); return *this; }


    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline const Aws::Vector<Data>& GetBaselineData() const{ return m_baselineData; }

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline bool BaselineDataHasBeenSet() const { return m_baselineDataHasBeenSet; }

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline void SetBaselineData(const Aws::Vector<Data>& value) { m_baselineDataHasBeenSet = true; m_baselineData = value; }

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline void SetBaselineData(Aws::Vector<Data>&& value) { m_baselineDataHasBeenSet = true; m_baselineData = std::move(value); }

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline Insight& WithBaselineData(const Aws::Vector<Data>& value) { SetBaselineData(value); return *this;}

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline Insight& WithBaselineData(Aws::Vector<Data>&& value) { SetBaselineData(std::move(value)); return *this;}

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline Insight& AddBaselineData(const Data& value) { m_baselineDataHasBeenSet = true; m_baselineData.push_back(value); return *this; }

    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline Insight& AddBaselineData(Data&& value) { m_baselineDataHasBeenSet = true; m_baselineData.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::String m_insightType;
    bool m_insightTypeHasBeenSet = false;

    ContextType m_context;
    bool m_contextHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Vector<Insight> m_supportingInsights;
    bool m_supportingInsightsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    Aws::Vector<Data> m_insightData;
    bool m_insightDataHasBeenSet = false;

    Aws::Vector<Data> m_baselineData;
    bool m_baselineDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
