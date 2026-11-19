/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentCustomer.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentInsights.h>

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
 * <p>The information that we provide about the matched customer, in addition to
 * the details that you supplied. Present only when <code>EnrichmentStatus</code>
 * is <code>ENRICHED</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsEnrichment">AWS
 * API Reference</a></p>
 */
class AwsEnrichment {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsEnrichment() = default;
  AWS_PARTNERCENTRALSELLING_API AwsEnrichment(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsEnrichment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the customer that AWS provides.</p>
   */
  inline const AwsEnrichmentCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = AwsEnrichmentCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = AwsEnrichmentCustomer>
  AwsEnrichment& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Insights that AWS computes for the customer.</p>
   */
  inline const AwsEnrichmentInsights& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = AwsEnrichmentInsights>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = AwsEnrichmentInsights>
  AwsEnrichment& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}
 private:
  AwsEnrichmentCustomer m_customer;

  AwsEnrichmentInsights m_insights;
  bool m_customerHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
