/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingInsights.h>
#include <aws/partnercentral-selling/model/ProspectingResultCustomer.h>

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
 * <p>A subset of prospecting result data visible to invitation receivers. It
 * includes customer account details and AI-generated insights.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/InvitationProspectingResultAws">AWS
 * API Reference</a></p>
 */
class InvitationProspectingResultAws {
 public:
  AWS_PARTNERCENTRALSELLING_API InvitationProspectingResultAws() = default;
  AWS_PARTNERCENTRALSELLING_API InvitationProspectingResultAws(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API InvitationProspectingResultAws& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The prospected customer account details, including geographic classification,
   * industry segmentation, company size, and program eligibility.</p>
   */
  inline const ProspectingResultCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = ProspectingResultCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = ProspectingResultCustomer>
  InvitationProspectingResultAws& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI-generated insights from the prospecting analysis, including
   * marketplace engagement scoring, solution fit assessments, and solution
   * categorization.</p>
   */
  inline const ProspectingInsights& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = ProspectingInsights>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = ProspectingInsights>
  InvitationProspectingResultAws& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}
 private:
  ProspectingResultCustomer m_customer;

  ProspectingInsights m_insights;
  bool m_customerHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
