/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains the partner's headquarters location using International Organization
 * for Standardization (ISO) 3166 country and subdivision codes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/Headquarters">AWS
 * API Reference</a></p>
 */
class Headquarters {
 public:
  AWS_PARTNERCENTRALACCOUNT_API Headquarters() = default;
  AWS_PARTNERCENTRALACCOUNT_API Headquarters(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Headquarters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ISO 3166-1 alpha-2 country code of the partner's headquarters. For
   * example, <code>US</code>, <code>BR</code>, or <code>DE</code>.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  Headquarters& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subdivision portion of the ISO 3166-2 code for the partner's headquarters
   * (for example, <code>SP</code> from <code>BR-SP</code>, <code>NSW</code> from
   * <code>AU-NSW</code>, or <code>13</code> from <code>JP-13</code>).</p>
   */
  inline const Aws::String& GetSubdivisionCode() const { return m_subdivisionCode; }
  inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }
  template <typename SubdivisionCodeT = Aws::String>
  void SetSubdivisionCode(SubdivisionCodeT&& value) {
    m_subdivisionCodeHasBeenSet = true;
    m_subdivisionCode = std::forward<SubdivisionCodeT>(value);
  }
  template <typename SubdivisionCodeT = Aws::String>
  Headquarters& WithSubdivisionCode(SubdivisionCodeT&& value) {
    SetSubdivisionCode(std::forward<SubdivisionCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_countryCode;

  Aws::String m_subdivisionCode;
  bool m_countryCodeHasBeenSet = false;
  bool m_subdivisionCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
