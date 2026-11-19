/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentCustomerSummary.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentInsightsSummary.h>

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
 * <p>The AWS enrichment information for an account in search results. It carries a
 * reduced set of fields compared to the enrichment information that
 * <code>GetCustomerAccount</code> returns. Present only when
 * <code>EnrichmentStatus</code> is <code>ENRICHED</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsEnrichmentSummary">AWS
 * API Reference</a></p>
 */
class AwsEnrichmentSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentSummary() = default;
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the customer that AWS provides.</p>
   */
  inline const AwsEnrichmentCustomerSummary& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = AwsEnrichmentCustomerSummary>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = AwsEnrichmentCustomerSummary>
  AwsEnrichmentSummary& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Insights that AWS computes for the customer.</p>
   */
  inline const AwsEnrichmentInsightsSummary& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = AwsEnrichmentInsightsSummary>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = AwsEnrichmentInsightsSummary>
  AwsEnrichmentSummary& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}
 private:
  AwsEnrichmentCustomerSummary m_customer;

  AwsEnrichmentInsightsSummary m_insights;
  bool m_customerHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
