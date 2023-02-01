/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ForwardedIPConfig.h>
#include <aws/wafv2/model/CountryCode.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A rule statement that labels web requests by country and region and that
   * matches against web requests based on country code. A geo match rule labels
   * every request that it inspects regardless of whether it finds a match.</p> <ul>
   * <li> <p>To manage requests only by country, you can use this statement by itself
   * and specify the countries that you want to match against in the
   * <code>CountryCodes</code> array. </p> </li> <li> <p>Otherwise, configure your
   * geo match rule with Count action so that it only labels requests. Then, add one
   * or more label match rules to run after the geo match rule and configure them to
   * match against the geographic labels and handle the requests as needed. </p>
   * </li> </ul> <p>WAF labels requests using the alpha-2 country and region codes
   * from the International Organization for Standardization (ISO) 3166 standard. WAF
   * determines the codes using either the IP address in the web request origin or,
   * if you specify it, the address in the geo match <code>ForwardedIPConfig</code>.
   * </p> <p>If you use the web request origin, the label formats are
   * <code>awswaf:clientip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
   * code&gt;</code> and <code>awswaf:clientip:geo:country:&lt;ISO country
   * code&gt;</code>.</p> <p>If you use a forwarded IP address, the label formats are
   * <code>awswaf:forwardedip:geo:region:&lt;ISO country code&gt;-&lt;ISO region
   * code&gt;</code> and <code>awswaf:forwardedip:geo:country:&lt;ISO country
   * code&gt;</code>.</p> <p>For additional details, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-geo-match.html">Geographic
   * match rule statement</a> in the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
   * Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GeoMatchStatement">AWS
   * API Reference</a></p>
   */
  class GeoMatchStatement
  {
  public:
    AWS_WAFV2_API GeoMatchStatement();
    AWS_WAFV2_API GeoMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API GeoMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline const Aws::Vector<CountryCode>& GetCountryCodes() const{ return m_countryCodes; }

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline bool CountryCodesHasBeenSet() const { return m_countryCodesHasBeenSet; }

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline void SetCountryCodes(const Aws::Vector<CountryCode>& value) { m_countryCodesHasBeenSet = true; m_countryCodes = value; }

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline void SetCountryCodes(Aws::Vector<CountryCode>&& value) { m_countryCodesHasBeenSet = true; m_countryCodes = std::move(value); }

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline GeoMatchStatement& WithCountryCodes(const Aws::Vector<CountryCode>& value) { SetCountryCodes(value); return *this;}

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline GeoMatchStatement& WithCountryCodes(Aws::Vector<CountryCode>&& value) { SetCountryCodes(std::move(value)); return *this;}

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline GeoMatchStatement& AddCountryCodes(const CountryCode& value) { m_countryCodesHasBeenSet = true; m_countryCodes.push_back(value); return *this; }

    /**
     * <p>An array of two-character country codes that you want to match against, for
     * example, <code>[ "US", "CN" ]</code>, from the alpha-2 country ISO codes of the
     * ISO 3166 international standard. </p> <p>When you use a geo match statement just
     * for the region and country labels that it adds to requests, you still have to
     * supply a country code for the rule to evaluate. In this case, you configure the
     * rule to only count matching requests, but it will still generate logging and
     * count metrics for any matches. You can reduce the logging and metrics that the
     * rule produces by specifying a country that's unlikely to be a source of traffic
     * to your site.</p>
     */
    inline GeoMatchStatement& AddCountryCodes(CountryCode&& value) { m_countryCodesHasBeenSet = true; m_countryCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline const ForwardedIPConfig& GetForwardedIPConfig() const{ return m_forwardedIPConfig; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline bool ForwardedIPConfigHasBeenSet() const { return m_forwardedIPConfigHasBeenSet; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline void SetForwardedIPConfig(const ForwardedIPConfig& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = value; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline void SetForwardedIPConfig(ForwardedIPConfig&& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = std::move(value); }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline GeoMatchStatement& WithForwardedIPConfig(const ForwardedIPConfig& value) { SetForwardedIPConfig(value); return *this;}

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline GeoMatchStatement& WithForwardedIPConfig(ForwardedIPConfig&& value) { SetForwardedIPConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<CountryCode> m_countryCodes;
    bool m_countryCodesHasBeenSet = false;

    ForwardedIPConfig m_forwardedIPConfig;
    bool m_forwardedIPConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
