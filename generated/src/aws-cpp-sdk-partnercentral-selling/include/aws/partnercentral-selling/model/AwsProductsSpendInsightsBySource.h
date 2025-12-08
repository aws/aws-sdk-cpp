/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsProductInsights.h>

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
 * <p>Source-separated spend insights that provide independent analysis for AWS
 * predictions and partner estimates</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsProductsSpendInsightsBySource">AWS
 * API Reference</a></p>
 */
class AwsProductsSpendInsightsBySource {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsProductsSpendInsightsBySource() = default;
  AWS_PARTNERCENTRALSELLING_API AwsProductsSpendInsightsBySource(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsProductsSpendInsightsBySource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Partner-sourced insights derived from Pricing Calculator URLs including
   * detailed service costs and optimizations</p>
   */
  inline const AwsProductInsights& GetPartner() const { return m_partner; }
  inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }
  template <typename PartnerT = AwsProductInsights>
  void SetPartner(PartnerT&& value) {
    m_partnerHasBeenSet = true;
    m_partner = std::forward<PartnerT>(value);
  }
  template <typename PartnerT = AwsProductInsights>
  AwsProductsSpendInsightsBySource& WithPartner(PartnerT&& value) {
    SetPartner(std::forward<PartnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI-generated insights including recommended products from AWS</p>
   */
  inline const AwsProductInsights& GetAWS() const { return m_aWS; }
  inline bool AWSHasBeenSet() const { return m_aWSHasBeenSet; }
  template <typename AWST = AwsProductInsights>
  void SetAWS(AWST&& value) {
    m_aWSHasBeenSet = true;
    m_aWS = std::forward<AWST>(value);
  }
  template <typename AWST = AwsProductInsights>
  AwsProductsSpendInsightsBySource& WithAWS(AWST&& value) {
    SetAWS(std::forward<AWST>(value));
    return *this;
  }
  ///@}
 private:
  AwsProductInsights m_partner;

  AwsProductInsights m_aWS;
  bool m_partnerHasBeenSet = false;
  bool m_aWSHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
