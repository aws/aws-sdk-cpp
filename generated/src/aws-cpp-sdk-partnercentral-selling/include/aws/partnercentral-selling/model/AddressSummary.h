/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/CountryCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>An object that contains an <code>Address</code> object's subset of
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AddressSummary">AWS
   * API Reference</a></p>
   */
  class AddressSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AddressSummary() = default;
    AWS_PARTNERCENTRALSELLING_API AddressSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AddressSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s city associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    AddressSummary& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s postal code associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetPostalCode() const { return m_postalCode; }
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }
    template<typename PostalCodeT = Aws::String>
    void SetPostalCode(PostalCodeT&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::forward<PostalCodeT>(value); }
    template<typename PostalCodeT = Aws::String>
    AddressSummary& WithPostalCode(PostalCodeT&& value) { SetPostalCode(std::forward<PostalCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s state or region associated with the
     * <code>Opportunity</code>.</p> <p>Valid values: <code>Alabama | Alaska | American
     * Samoa | Arizona | Arkansas | California | Colorado | Connecticut | Delaware |
     * Dist. of Columbia | Federated States of Micronesia | Florida | Georgia | Guam |
     * Hawaii | Idaho | Illinois | Indiana | Iowa | Kansas | Kentucky | Louisiana |
     * Maine | Marshall Islands | Maryland | Massachusetts | Michigan | Minnesota |
     * Mississippi | Missouri | Montana | Nebraska | Nevada | New Hampshire | New
     * Jersey | New Mexico | New York | North Carolina | North Dakota | Northern
     * Mariana Islands | Ohio | Oklahoma | Oregon | Palau | Pennsylvania | Puerto Rico
     * | Rhode Island | South Carolina | South Dakota | Tennessee | Texas | Utah |
     * Vermont | Virginia | Virgin Islands | Washington | West Virginia | Wisconsin |
     * Wyoming | APO/AE | AFO/FPO | FPO, AP</code> </p>
     */
    inline const Aws::String& GetStateOrRegion() const { return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    template<typename StateOrRegionT = Aws::String>
    void SetStateOrRegion(StateOrRegionT&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::forward<StateOrRegionT>(value); }
    template<typename StateOrRegionT = Aws::String>
    AddressSummary& WithStateOrRegion(StateOrRegionT&& value) { SetStateOrRegion(std::forward<StateOrRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the end <code>Customer</code>'s country associated with the
     * <code>Opportunity</code>.</p>
     */
    inline CountryCode GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(CountryCode value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline AddressSummary& WithCountryCode(CountryCode value) { SetCountryCode(value); return *this;}
    ///@}
  private:

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;

    CountryCode m_countryCode{CountryCode::NOT_SET};
    bool m_countryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
