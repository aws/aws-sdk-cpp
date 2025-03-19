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
    AWS_ROUTE53_API GetGeoLocationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeoLocation"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>For geolocation resource record sets, a two-letter abbreviation that
     * identifies a continent. Amazon Route 53 supports the following continent
     * codes:</p> <ul> <li> <p> <b>AF</b>: Africa</p> </li> <li> <p> <b>AN</b>:
     * Antarctica</p> </li> <li> <p> <b>AS</b>: Asia</p> </li> <li> <p> <b>EU</b>:
     * Europe</p> </li> <li> <p> <b>OC</b>: Oceania</p> </li> <li> <p> <b>NA</b>: North
     * America</p> </li> <li> <p> <b>SA</b>: South America</p> </li> </ul>
     */
    inline const Aws::String& GetContinentCode() const { return m_continentCode; }
    inline bool ContinentCodeHasBeenSet() const { return m_continentCodeHasBeenSet; }
    template<typename ContinentCodeT = Aws::String>
    void SetContinentCode(ContinentCodeT&& value) { m_continentCodeHasBeenSet = true; m_continentCode = std::forward<ContinentCodeT>(value); }
    template<typename ContinentCodeT = Aws::String>
    GetGeoLocationRequest& WithContinentCode(ContinentCodeT&& value) { SetContinentCode(std::forward<ContinentCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Route 53 uses the two-letter country codes that are specified in <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO standard 3166-1
     * alpha-2</a>.</p> <p>Route 53 also supports the country code <b>UA</b> for
     * Ukraine.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    GetGeoLocationRequest& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
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
    GetGeoLocationRequest& WithSubdivisionCode(SubdivisionCodeT&& value) { SetSubdivisionCode(std::forward<SubdivisionCodeT>(value)); return *this;}
    ///@}
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
