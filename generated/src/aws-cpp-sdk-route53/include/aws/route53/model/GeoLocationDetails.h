/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the codes and full continent, country, and
   * subdivision names for the specified <code>geolocation</code> code.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GeoLocationDetails">AWS
   * API Reference</a></p>
   */
  class GeoLocationDetails
  {
  public:
    AWS_ROUTE53_API GeoLocationDetails() = default;
    AWS_ROUTE53_API GeoLocationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API GeoLocationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline const Aws::String& GetContinentCode() const { return m_continentCode; }
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }
    template<typename ContinentCodeT = Aws::String>
    void SetContinentCode(ContinentCodeT&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::forward<ContinentCodeT>(value); }
    template<typename ContinentCodeT = Aws::String>
    GeoLocationDetails& WithContinentCode(ContinentCodeT&& value) { SetContinentCode(std::forward<ContinentCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the continent.</p>
     */
    inline const Aws::String& GetContinentName() const { return m_continentName; }
    inline bool ContinentNameHasBeenSet() const { return m_continentNameHasBeenSet; }
    template<typename ContinentNameT = Aws::String>
    void SetContinentName(ContinentNameT&& value) { m_continentNameHasBeenSet = true; m_continentName = std::forward<ContinentNameT>(value); }
    template<typename ContinentNameT = Aws::String>
    GeoLocationDetails& WithContinentName(ContinentNameT&& value) { SetContinentName(std::forward<ContinentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-letter code for the country.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    GeoLocationDetails& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country.</p>
     */
    inline const Aws::String& GetCountryName() const { return m_countryName; }
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }
    template<typename CountryNameT = Aws::String>
    void SetCountryName(CountryNameT&& value) { m_countryNameHasBeenSet = true; m_countryName = std::forward<CountryNameT>(value); }
    template<typename CountryNameT = Aws::String>
    GeoLocationDetails& WithCountryName(CountryNameT&& value) { SetCountryName(std::forward<CountryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline const Aws::String& GetSubdivisionCode() const { return m_subdivisionCode; }
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }
    template<typename SubdivisionCodeT = Aws::String>
    void SetSubdivisionCode(SubdivisionCodeT&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::forward<SubdivisionCodeT>(value); }
    template<typename SubdivisionCodeT = Aws::String>
    GeoLocationDetails& WithSubdivisionCode(SubdivisionCodeT&& value) { SetSubdivisionCode(std::forward<SubdivisionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline const Aws::String& GetSubdivisionName() const { return m_subdivisionName; }
    inline bool SubdivisionNameHasBeenSet() const { return m_subdivisionNameHasBeenSet; }
    template<typename SubdivisionNameT = Aws::String>
    void SetSubdivisionName(SubdivisionNameT&& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = std::forward<SubdivisionNameT>(value); }
    template<typename SubdivisionNameT = Aws::String>
    GeoLocationDetails& WithSubdivisionName(SubdivisionNameT&& value) { SetSubdivisionName(std::forward<SubdivisionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet = false;

    Aws::String m_continentName;
    bool m_continentNameHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_countryName;
    bool m_countryNameHasBeenSet = false;

    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet = false;

    Aws::String m_subdivisionName;
    bool m_subdivisionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
