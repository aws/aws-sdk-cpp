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
    AWS_ROUTE53_API GeoLocationDetails();
    AWS_ROUTE53_API GeoLocationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API GeoLocationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The two-letter code for the continent.</p>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::move(value); }
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }
    inline GeoLocationDetails& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}
    inline GeoLocationDetails& WithContinentCode(Aws::String&& value) { SetContinentCode(std::move(value)); return *this;}
    inline GeoLocationDetails& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the continent.</p>
     */
    inline const Aws::String& GetContinentName() const{ return m_continentName; }
    inline bool ContinentNameHasBeenSet() const { return m_continentNameHasBeenSet; }
    inline void SetContinentName(const Aws::String& value) { m_continentNameHasBeenSet = true; m_continentName = value; }
    inline void SetContinentName(Aws::String&& value) { m_continentNameHasBeenSet = true; m_continentName = std::move(value); }
    inline void SetContinentName(const char* value) { m_continentNameHasBeenSet = true; m_continentName.assign(value); }
    inline GeoLocationDetails& WithContinentName(const Aws::String& value) { SetContinentName(value); return *this;}
    inline GeoLocationDetails& WithContinentName(Aws::String&& value) { SetContinentName(std::move(value)); return *this;}
    inline GeoLocationDetails& WithContinentName(const char* value) { SetContinentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-letter code for the country.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }
    inline GeoLocationDetails& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}
    inline GeoLocationDetails& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}
    inline GeoLocationDetails& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country.</p>
     */
    inline const Aws::String& GetCountryName() const{ return m_countryName; }
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }
    inline void SetCountryName(const Aws::String& value) { m_countryNameHasBeenSet = true; m_countryName = value; }
    inline void SetCountryName(Aws::String&& value) { m_countryNameHasBeenSet = true; m_countryName = std::move(value); }
    inline void SetCountryName(const char* value) { m_countryNameHasBeenSet = true; m_countryName.assign(value); }
    inline GeoLocationDetails& WithCountryName(const Aws::String& value) { SetCountryName(value); return *this;}
    inline GeoLocationDetails& WithCountryName(Aws::String&& value) { SetCountryName(std::move(value)); return *this;}
    inline GeoLocationDetails& WithCountryName(const char* value) { SetCountryName(value); return *this;}
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
    inline const Aws::String& GetSubdivisionCode() const{ return m_subdivisionCode; }
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::move(value); }
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }
    inline GeoLocationDetails& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}
    inline GeoLocationDetails& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}
    inline GeoLocationDetails& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the subdivision. Route 53 currently supports only states in
     * the United States.</p>
     */
    inline const Aws::String& GetSubdivisionName() const{ return m_subdivisionName; }
    inline bool SubdivisionNameHasBeenSet() const { return m_subdivisionNameHasBeenSet; }
    inline void SetSubdivisionName(const Aws::String& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = value; }
    inline void SetSubdivisionName(Aws::String&& value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName = std::move(value); }
    inline void SetSubdivisionName(const char* value) { m_subdivisionNameHasBeenSet = true; m_subdivisionName.assign(value); }
    inline GeoLocationDetails& WithSubdivisionName(const Aws::String& value) { SetSubdivisionName(value); return *this;}
    inline GeoLocationDetails& WithSubdivisionName(Aws::String&& value) { SetSubdivisionName(std::move(value)); return *this;}
    inline GeoLocationDetails& WithSubdivisionName(const char* value) { SetSubdivisionName(value); return *this;}
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
