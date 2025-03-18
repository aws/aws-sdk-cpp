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
    AWS_PI_API Insight() = default;
    AWS_PI_API Insight(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the insight. For example,
     * <code>insight-12345678901234567</code>.</p>
     */
    inline const Aws::String& GetInsightId() const { return m_insightId; }
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
    template<typename InsightIdT = Aws::String>
    void SetInsightId(InsightIdT&& value) { m_insightIdHasBeenSet = true; m_insightId = std::forward<InsightIdT>(value); }
    template<typename InsightIdT = Aws::String>
    Insight& WithInsightId(InsightIdT&& value) { SetInsightId(std::forward<InsightIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of insight. For example, <code>HighDBLoad</code>,
     * <code>HighCPU</code>, or <code>DominatingSQLs</code>.</p>
     */
    inline const Aws::String& GetInsightType() const { return m_insightType; }
    inline bool InsightTypeHasBeenSet() const { return m_insightTypeHasBeenSet; }
    template<typename InsightTypeT = Aws::String>
    void SetInsightType(InsightTypeT&& value) { m_insightTypeHasBeenSet = true; m_insightType = std::forward<InsightTypeT>(value); }
    template<typename InsightTypeT = Aws::String>
    Insight& WithInsightType(InsightTypeT&& value) { SetInsightType(std::forward<InsightTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the insight is causal or correlated insight.</p>
     */
    inline ContextType GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(ContextType value) { m_contextHasBeenSet = true; m_context = value; }
    inline Insight& WithContext(ContextType value) { SetContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Insight& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the insight. For example,
     * <code>2018-10-30T00:00:00Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Insight& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the insight. The values are: <code>Low</code>,
     * <code>Medium</code>, or <code>High</code>.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Insight& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of supporting insights that provide additional factors for the
     * insight.</p>
     */
    inline const Aws::Vector<Insight>& GetSupportingInsights() const { return m_supportingInsights; }
    inline bool SupportingInsightsHasBeenSet() const { return m_supportingInsightsHasBeenSet; }
    template<typename SupportingInsightsT = Aws::Vector<Insight>>
    void SetSupportingInsights(SupportingInsightsT&& value) { m_supportingInsightsHasBeenSet = true; m_supportingInsights = std::forward<SupportingInsightsT>(value); }
    template<typename SupportingInsightsT = Aws::Vector<Insight>>
    Insight& WithSupportingInsights(SupportingInsightsT&& value) { SetSupportingInsights(std::forward<SupportingInsightsT>(value)); return *this;}
    template<typename SupportingInsightsT = Insight>
    Insight& AddSupportingInsights(SupportingInsightsT&& value) { m_supportingInsightsHasBeenSet = true; m_supportingInsights.emplace_back(std::forward<SupportingInsightsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description of the insight. For example: <code>A high severity Insight found
     * between 02:00 to 02:30, where there was an unusually high DB load 600x above
     * baseline. Likely performance impact</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Insight& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of recommendations for the insight. For example, <code>Investigate the
     * following SQLs that contributed to 100% of the total DBLoad during that time
     * period: sql-id</code>.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    Insight& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    Insight& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of data objects containing metrics and references from the time range
     * while generating the insight.</p>
     */
    inline const Aws::Vector<Data>& GetInsightData() const { return m_insightData; }
    inline bool InsightDataHasBeenSet() const { return m_insightDataHasBeenSet; }
    template<typename InsightDataT = Aws::Vector<Data>>
    void SetInsightData(InsightDataT&& value) { m_insightDataHasBeenSet = true; m_insightData = std::forward<InsightDataT>(value); }
    template<typename InsightDataT = Aws::Vector<Data>>
    Insight& WithInsightData(InsightDataT&& value) { SetInsightData(std::forward<InsightDataT>(value)); return *this;}
    template<typename InsightDataT = Data>
    Insight& AddInsightData(InsightDataT&& value) { m_insightDataHasBeenSet = true; m_insightData.emplace_back(std::forward<InsightDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Metric names and values from the timeframe used as baseline to generate the
     * insight.</p>
     */
    inline const Aws::Vector<Data>& GetBaselineData() const { return m_baselineData; }
    inline bool BaselineDataHasBeenSet() const { return m_baselineDataHasBeenSet; }
    template<typename BaselineDataT = Aws::Vector<Data>>
    void SetBaselineData(BaselineDataT&& value) { m_baselineDataHasBeenSet = true; m_baselineData = std::forward<BaselineDataT>(value); }
    template<typename BaselineDataT = Aws::Vector<Data>>
    Insight& WithBaselineData(BaselineDataT&& value) { SetBaselineData(std::forward<BaselineDataT>(value)); return *this;}
    template<typename BaselineDataT = Data>
    Insight& AddBaselineData(BaselineDataT&& value) { m_baselineDataHasBeenSet = true; m_baselineData.emplace_back(std::forward<BaselineDataT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::String m_insightType;
    bool m_insightTypeHasBeenSet = false;

    ContextType m_context{ContextType::NOT_SET};
    bool m_contextHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
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
