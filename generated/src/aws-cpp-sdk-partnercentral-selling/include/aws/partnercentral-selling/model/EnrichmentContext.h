/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/InvitationProspectingResultAws.h>
#include <aws/partnercentral-selling/model/LeadInsights.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains enrichment data for engagement invitations. You can view propensity
 * scores, program eligibility, and lead readiness insights directly in the
 * invitation, before you take action on the invitation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EnrichmentContext">AWS
 * API Reference</a></p>
 */
class EnrichmentContext {
 public:
  AWS_PARTNERCENTRALSELLING_API EnrichmentContext() = default;
  AWS_PARTNERCENTRALSELLING_API EnrichmentContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EnrichmentContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The customer account data and propensity insights for the prospected account.
   * It includes geographic, industry, and segment classifications, along with
   * engagement and solution scoring.</p>
   */
  inline const InvitationProspectingResultAws& GetProspectingResultAws() const { return m_prospectingResultAws; }
  inline bool ProspectingResultAwsHasBeenSet() const { return m_prospectingResultAwsHasBeenSet; }
  template <typename ProspectingResultAwsT = InvitationProspectingResultAws>
  void SetProspectingResultAws(ProspectingResultAwsT&& value) {
    m_prospectingResultAwsHasBeenSet = true;
    m_prospectingResultAws = std::forward<ProspectingResultAwsT>(value);
  }
  template <typename ProspectingResultAwsT = InvitationProspectingResultAws>
  EnrichmentContext& WithProspectingResultAws(ProspectingResultAwsT&& value) {
    SetProspectingResultAws(std::forward<ProspectingResultAwsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI-generated lead readiness score for this lead. Use this score to assess
   * lead quality and prioritize engagement efforts.</p>
   */
  inline const LeadInsights& GetLeadInsights() const { return m_leadInsights; }
  inline bool LeadInsightsHasBeenSet() const { return m_leadInsightsHasBeenSet; }
  template <typename LeadInsightsT = LeadInsights>
  void SetLeadInsights(LeadInsightsT&& value) {
    m_leadInsightsHasBeenSet = true;
    m_leadInsights = std::forward<LeadInsightsT>(value);
  }
  template <typename LeadInsightsT = LeadInsights>
  EnrichmentContext& WithLeadInsights(LeadInsightsT&& value) {
    SetLeadInsights(std::forward<LeadInsightsT>(value));
    return *this;
  }
  ///@}
 private:
  InvitationProspectingResultAws m_prospectingResultAws;

  LeadInsights m_leadInsights;
  bool m_prospectingResultAwsHasBeenSet = false;
  bool m_leadInsightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
