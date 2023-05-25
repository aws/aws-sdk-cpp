/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A request for information about whether a specified geographic location is
   * supported for Amazon Route 53 geolocation resource record sets.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetGeoLocationRequest">AWS
   * API Reference</a></p>
   */
  class GetGeoLocationRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetGeoLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeoLocation"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline const Aws::String& GetContinentCode() const{ return m_continentCode; }

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline void SetContinentCode(const Aws::String& value) { m_continentCodeHasBeenSet = true; m_continentCode = value; }

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline void SetContinentCode(Aws::String&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::move(value); }

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline void SetContinentCode(const char* value) { m_continentCodeHasBeenSet = true; m_continentCode.assign(value); }

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline GetGeoLocationRequest& WithContinentCode(const Aws::String& value) { SetContinentCode(value); return *this;}

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline GetGeoLocationRequest& WithContinentCode(Aws::String&& value) { SetContinentCode(std::move(value)); return *this;}

    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline GetGeoLocationRequest& WithContinentCode(const char* value) { SetContinentCode(value); return *this;}


    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GetGeoLocationRequest& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GetGeoLocationRequest& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p>
     */
    inline GetGeoLocationRequest& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


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

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline bool SubdivisionCodeHasBeenSet() const { return m_subdivisionCodeHasBeenSet; }

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline void SetSubdivisionCode(const Aws::String& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = value; }

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline void SetSubdivisionCode(Aws::String&& value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode = std::move(value); }

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline void SetSubdivisionCode(const char* value) { m_subdivisionCodeHasBeenSet = true; m_subdivisionCode.assign(value); }

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline GetGeoLocationRequest& WithSubdivisionCode(const Aws::String& value) { SetSubdivisionCode(value); return *this;}

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline GetGeoLocationRequest& WithSubdivisionCode(Aws::String&& value) { SetSubdivisionCode(std::move(value)); return *this;}

    /**
     * <p>The code for the subdivision, such as a particular state within the United
     * States. For a list of US state abbreviations, see <a
     * href="https://pe.usps.com/text/pub28/28apb.htm">Appendix B: Two–Letter State and
     * Possession Abbreviations</a> on the United States Postal Service website. For a
     * list of all supported subdivision codes, use the <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListGeoLocations.html">ListGeoLocations</a>
     * API.</p>
     */
    inline GetGeoLocationRequest& WithSubdivisionCode(const char* value) { SetSubdivisionCode(value); return *this;}

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
