/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CountryCode.h>

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
 * <p>Contains the end customer address fields (country) returned for an
 * opportunity in search results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchAddress">AWS
 * API Reference</a></p>
 */
class OpportunitySearchAddress {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAddress() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAddress(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The country of the end customer, in ISO 3166 alpha-2 format.</p>
   */
  inline CountryCode GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  inline void SetCountryCode(CountryCode value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = value;
  }
  inline OpportunitySearchAddress& WithCountryCode(CountryCode value) {
    SetCountryCode(value);
    return *this;
  }
  ///@}
 private:
  CountryCode m_countryCode{CountryCode::NOT_SET};
  bool m_countryCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
