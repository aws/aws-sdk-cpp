/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CurrencyCode.h>

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
 * <p>A curated expected-spend entry: amount and currency only. Frequency and
 * target company are omitted from search results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchExpectedCustomerSpend">AWS
 * API Reference</a></p>
 */
class OpportunitySearchExpectedCustomerSpend {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchExpectedCustomerSpend() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchExpectedCustomerSpend(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchExpectedCustomerSpend& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The estimated monthly recurring revenue amount.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  OpportunitySearchExpectedCustomerSpend& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency of the estimated amount, in ISO 4217 format.</p>
   */
  inline CurrencyCode GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  inline void SetCurrencyCode(CurrencyCode value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = value;
  }
  inline OpportunitySearchExpectedCustomerSpend& WithCurrencyCode(CurrencyCode value) {
    SetCurrencyCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_amount;

  CurrencyCode m_currencyCode{CurrencyCode::NOT_SET};
  bool m_amountHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
