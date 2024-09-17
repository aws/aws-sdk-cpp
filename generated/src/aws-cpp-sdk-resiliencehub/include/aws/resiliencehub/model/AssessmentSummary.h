/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AssessmentRiskRecommendation.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the AI-generated summary for the Resilience Hub assessment,
   * providing a concise overview that highlights the top risks and
   * recommendations.</p>  <p>This property is available only in the US East
   * (N. Virginia) Region.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AssessmentSummary">AWS
   * API Reference</a></p>
   */
  class AssessmentSummary
  {
  public:
    AWS_RESILIENCEHUB_API AssessmentSummary();
    AWS_RESILIENCEHUB_API AssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the top risks and recommendations identified by the Resilience Hub
     * assessment, each representing a specific risk and the corresponding
     * recommendation to address it.</p>  <p>This property is available only in
     * the US East (N. Virginia) Region.</p> 
     */
    inline const Aws::Vector<AssessmentRiskRecommendation>& GetRiskRecommendations() const{ return m_riskRecommendations; }
    inline bool RiskRecommendationsHasBeenSet() const { return m_riskRecommendationsHasBeenSet; }
    inline void SetRiskRecommendations(const Aws::Vector<AssessmentRiskRecommendation>& value) { m_riskRecommendationsHasBeenSet = true; m_riskRecommendations = value; }
    inline void SetRiskRecommendations(Aws::Vector<AssessmentRiskRecommendation>&& value) { m_riskRecommendationsHasBeenSet = true; m_riskRecommendations = std::move(value); }
    inline AssessmentSummary& WithRiskRecommendations(const Aws::Vector<AssessmentRiskRecommendation>& value) { SetRiskRecommendations(value); return *this;}
    inline AssessmentSummary& WithRiskRecommendations(Aws::Vector<AssessmentRiskRecommendation>&& value) { SetRiskRecommendations(std::move(value)); return *this;}
    inline AssessmentSummary& AddRiskRecommendations(const AssessmentRiskRecommendation& value) { m_riskRecommendationsHasBeenSet = true; m_riskRecommendations.push_back(value); return *this; }
    inline AssessmentSummary& AddRiskRecommendations(AssessmentRiskRecommendation&& value) { m_riskRecommendationsHasBeenSet = true; m_riskRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates a concise summary that provides an overview of the Resilience Hub
     * assessment.</p>  <p>This property is available only in the US East (N.
     * Virginia) Region.</p> 
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline AssessmentSummary& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline AssessmentSummary& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline AssessmentSummary& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentRiskRecommendation> m_riskRecommendations;
    bool m_riskRecommendationsHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
