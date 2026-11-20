/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>The postal address of a legal entity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/Address">AWS
 * API Reference</a></p>
 */
class Address {
 public:
  AWS_PARTNERCENTRALCHANNEL_API Address() = default;
  AWS_PARTNERCENTRALCHANNEL_API Address(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Address& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The city or locality.</p>
   */
  inline const Aws::String& GetCity() const { return m_city; }
  inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
  template <typename CityT = Aws::String>
  void SetCity(CityT&& value) {
    m_cityHasBeenSet = true;
    m_city = std::forward<CityT>(value);
  }
  template <typename CityT = Aws::String>
  Address& WithCity(CityT&& value) {
    SetCity(std::forward<CityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state, province, or prefecture.</p>
   */
  inline const Aws::String& GetStateOrRegion() const { return m_stateOrRegion; }
  inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
  template <typename StateOrRegionT = Aws::String>
  void SetStateOrRegion(StateOrRegionT&& value) {
    m_stateOrRegionHasBeenSet = true;
    m_stateOrRegion = std::forward<StateOrRegionT>(value);
  }
  template <typename StateOrRegionT = Aws::String>
  Address& WithStateOrRegion(StateOrRegionT&& value) {
    SetStateOrRegion(std::forward<StateOrRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The postal code.</p>
   */
  inline const Aws::String& GetPostalCode() const { return m_postalCode; }
  inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
  template <typename PostalCodeT = Aws::String>
  void SetPostalCode(PostalCodeT&& value) {
    m_postalCodeHasBeenSet = true;
    m_postalCode = std::forward<PostalCodeT>(value);
  }
  template <typename PostalCodeT = Aws::String>
  Address& WithPostalCode(PostalCodeT&& value) {
    SetPostalCode(std::forward<PostalCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The two-letter ISO 3166-1 country code.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  Address& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first line of the street address.</p>
   */
  inline const Aws::String& GetAddressLine() const { return m_addressLine; }
  inline bool AddressLineHasBeenSet() const { return m_addressLineHasBeenSet; }
  template <typename AddressLineT = Aws::String>
  void SetAddressLine(AddressLineT&& value) {
    m_addressLineHasBeenSet = true;
    m_addressLine = std::forward<AddressLineT>(value);
  }
  template <typename AddressLineT = Aws::String>
  Address& WithAddressLine(AddressLineT&& value) {
    SetAddressLine(std::forward<AddressLineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The second line of the street address.</p>
   */
  inline const Aws::String& GetAddressLine2() const { return m_addressLine2; }
  inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
  template <typename AddressLine2T = Aws::String>
  void SetAddressLine2(AddressLine2T&& value) {
    m_addressLine2HasBeenSet = true;
    m_addressLine2 = std::forward<AddressLine2T>(value);
  }
  template <typename AddressLine2T = Aws::String>
  Address& WithAddressLine2(AddressLine2T&& value) {
    SetAddressLine2(std::forward<AddressLine2T>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_city;

  Aws::String m_stateOrRegion;

  Aws::String m_postalCode;

  Aws::String m_countryCode;

  Aws::String m_addressLine;

  Aws::String m_addressLine2;
  bool m_cityHasBeenSet = false;
  bool m_stateOrRegionHasBeenSet = false;
  bool m_postalCodeHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
  bool m_addressLineHasBeenSet = false;
  bool m_addressLine2HasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
