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
   * <p>A complex type that contains information about a geographic
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GeoLocation">AWS
   * API Reference</a></p>
   */
  class GeoLocation
  {
  public:
    AWS_ROUTE53_API GeoLocation();
    AWS_ROUTE53_API GeoLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API GeoLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::move(value); }

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline GeoLocation& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline GeoLocation& WithContinentCode(Aws::String&& value) { SetContinentCode(std::move(value)); return *this;}

    /**
     * <p>The two-letter code for the continent.</p> <p>Amazon Route 53 supports the
     * following continent codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li>
     * <p> <b>AN</b>: Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p>
     * <b>EU</b>: Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p>
     * <b>NA</b>: North America</p> </li> <li> <p> <b>SA</b>: South America</p> </li>
     * </ul> <p>Constraint: Specifying <code>ContinentCode</code> with either
     * <code>CountryCode</code> or <code>SubdivisionCode</code> returns an
     * <code>InvalidInput</code> error.</p>
     */
    inline GeoLocation& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}


    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GeoLocation& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GeoLocation& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>For geolocation resource record sets, the two-letter code for a country.</p>
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GeoLocation& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline const Aws::String& GetSubdivisionCode() const{ return m_subdivisionCode; }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::move(value); }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline GeoLocation& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline GeoLocation& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>For geolocation resource record sets, the two-letter code for a state of the
     * United States. Route 53 doesn't support any other values for
     * <code>SubdivisionCode</code>. For a list of state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. </p>
     * <p>If you specify <code>subdivisioncode</code>, you must also specify
     * <code>US</code> for <code>CountryCode</code>. </p>
     */
    inline GeoLocation& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}

  private:

    Aws::String m_continentCode;
    bool m_continentCodeHasBeenSet = false;

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_subdivisionCode;
    bool m_subdivisionCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
