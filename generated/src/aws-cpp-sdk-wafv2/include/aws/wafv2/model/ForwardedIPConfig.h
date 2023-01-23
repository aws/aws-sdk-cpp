/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/FallbackBehavior.h>
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
   * <p>The configuration for inspecting IP addresses in an HTTP header that you
   * specify, instead of using the IP address that's reported by the web request
   * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
   * any header name. </p>  <p>If the specified header isn't present in the
   * request, WAF doesn't apply the rule to the web request at all.</p> 
   * <p>This configuration is used for <a>GeoMatchStatement</a> and
   * <a>RateBasedStatement</a>. For <a>IPSetReferenceStatement</a>, use
   * <a>IPSetForwardedIPConfig</a> instead. </p> <p>WAF only evaluates the first IP
   * address found in the specified HTTP header. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ForwardedIPConfig">AWS
   * API Reference</a></p>
   */
  class ForwardedIPConfig
  {
  public:
    AWS_WAFV2_API ForwardedIPConfig();
    AWS_WAFV2_API ForwardedIPConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ForwardedIPConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline ForwardedIPConfig& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline ForwardedIPConfig& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline ForwardedIPConfig& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}


    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * valid IP address in the specified position.</p>  <p>If the specified
     * header isn't present in the request, WAF doesn't apply the rule to the web
     * request at all.</p>  <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> </ul>
     */
    inline const FallbackBehavior& GetFallbackBehavior() const{ return m_fallbackBehavior; }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * valid IP address in the specified position.</p>  <p>If the specified
     * header isn't present in the request, WAF doesn't apply the rule to the web
     * request at all.</p>  <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> </ul>
     */
    inline bool FallbackBehaviorHasBeenSet() const { return m_fallbackBehaviorHasBeenSet; }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * valid IP address in the specified position.</p>  <p>If the specified
     * header isn't present in the request, WAF doesn't apply the rule to the web
     * request at all.</p>  <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> </ul>
     */
    inline void SetFallbackBehavior(const FallbackBehavior& value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = value; }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * valid IP address in the specified position.</p>  <p>If the specified
     * header isn't present in the request, WAF doesn't apply the rule to the web
     * request at all.</p>  <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> </ul>
     */
    inline void SetFallbackBehavior(FallbackBehavior&& value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = std::move(value); }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * valid IP address in the specified position.</p>  <p>If the specified
     * header isn't present in the request, WAF doesn't apply the rule to the web
     * request at all.</p>  <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> </ul>
     */
    inline ForwardedIPConfig& WithFallbackBehavior(const FallbackBehavior& value) { SetFallbackBehavior(value); return *this;}

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * valid IP address in the specified position.</p>  <p>If the specified
     * header isn't present in the request, WAF doesn't apply the rule to the web
     * request at all.</p>  <p>You can specify the following fallback
     * behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat the web request as
     * matching the rule statement. WAF applies the rule action to the request.</p>
     * </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as not matching the
     * rule statement.</p> </li> </ul>
     */
    inline ForwardedIPConfig& WithFallbackBehavior(FallbackBehavior&& value) { SetFallbackBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    FallbackBehavior m_fallbackBehavior;
    bool m_fallbackBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
