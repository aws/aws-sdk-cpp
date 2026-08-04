/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

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
 * <p>The address information for a lead customer, including city, state or region,
 * postal code, and country code.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadAddress">AWS
 * API Reference</a></p>
 */
class LeadAddress {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadAddress() = default;
  AWS_PARTNERCENTRALSELLING_API LeadAddress(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The city of the lead customer's address.</p>
   */
  inline const Aws::String& GetCity() const { return m_city; }
  inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
  template <typename CityT = Aws::String>
  void SetCity(CityT&& value) {
    m_cityHasBeenSet = true;
    m_city = std::forward<CityT>(value);
  }
  template <typename CityT = Aws::String>
  LeadAddress& WithCity(CityT&& value) {
    SetCity(std::forward<CityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The postal code of the lead customer's address.</p>
   */
  inline const Aws::String& GetPostalCode() const { return m_postalCode; }
  inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
  template <typename PostalCodeT = Aws::String>
  void SetPostalCode(PostalCodeT&& value) {
    m_postalCodeHasBeenSet = true;
    m_postalCode = std::forward<PostalCodeT>(value);
  }
  template <typename PostalCodeT = Aws::String>
  LeadAddress& WithPostalCode(PostalCodeT&& value) {
    SetPostalCode(std::forward<PostalCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state or region of the lead customer's address.</p>
   */
  inline const Aws::String& GetStateOrRegion() const { return m_stateOrRegion; }
  inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
  template <typename StateOrRegionT = Aws::String>
  void SetStateOrRegion(StateOrRegionT&& value) {
    m_stateOrRegionHasBeenSet = true;
    m_stateOrRegion = std::forward<StateOrRegionT>(value);
  }
  template <typename StateOrRegionT = Aws::String>
  LeadAddress& WithStateOrRegion(StateOrRegionT&& value) {
    SetStateOrRegion(std::forward<StateOrRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country code of the lead customer's address.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  LeadAddress& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_city;

  Aws::String m_postalCode;

  Aws::String m_stateOrRegion;

  Aws::String m_countryCode;
  bool m_cityHasBeenSet = false;
  bool m_postalCodeHasBeenSet = false;
  bool m_stateOrRegionHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
