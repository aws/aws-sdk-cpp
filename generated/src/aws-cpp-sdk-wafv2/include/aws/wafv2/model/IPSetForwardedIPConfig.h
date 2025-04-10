﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/FallbackBehavior.h>
#include <aws/wafv2/model/ForwardedIPPosition.h>
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
   * <p>This configuration is used only for <a>IPSetReferenceStatement</a>. For
   * <a>GeoMatchStatement</a> and <a>RateBasedStatement</a>, use
   * <a>ForwardedIPConfig</a> instead. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/IPSetForwardedIPConfig">AWS
   * API Reference</a></p>
   */
  class IPSetForwardedIPConfig
  {
  public:
    AWS_WAFV2_API IPSetForwardedIPConfig() = default;
    AWS_WAFV2_API IPSetForwardedIPConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API IPSetForwardedIPConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the HTTP header to use for the IP address. For example, to use
     * the X-Forwarded-For (XFF) header, set this to <code>X-Forwarded-For</code>.</p>
     *  <p>If the specified header isn't present in the request, WAF doesn't
     * apply the rule to the web request at all.</p> 
     */
    inline const Aws::String& GetHeaderName() const { return m_headerName; }
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }
    template<typename HeaderNameT = Aws::String>
    void SetHeaderName(HeaderNameT&& value) { m_headerNameHasBeenSet = true; m_headerName = std::forward<HeaderNameT>(value); }
    template<typename HeaderNameT = Aws::String>
    IPSetForwardedIPConfig& WithHeaderName(HeaderNameT&& value) { SetHeaderName(std::forward<HeaderNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline FallbackBehavior GetFallbackBehavior() const { return m_fallbackBehavior; }
    inline bool FallbackBehaviorHasBeenSet() const { return m_fallbackBehaviorHasBeenSet; }
    inline void SetFallbackBehavior(FallbackBehavior value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = value; }
    inline IPSetForwardedIPConfig& WithFallbackBehavior(FallbackBehavior value) { SetFallbackBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in the header to search for the IP address. The header can
     * contain IP addresses of the original client and also of proxies. For example,
     * the header value could be <code>10.1.1.1, 127.0.0.0, 10.10.10.10</code> where
     * the first IP address identifies the original client and the rest identify
     * proxies that the request went through. </p> <p>The options for this setting are
     * the following: </p> <ul> <li> <p>FIRST - Inspect the first IP address in the
     * list of IP addresses in the header. This is usually the client's original
     * IP.</p> </li> <li> <p>LAST - Inspect the last IP address in the list of IP
     * addresses in the header.</p> </li> <li> <p>ANY - Inspect all IP addresses in the
     * header for a match. If the header contains more than 10 IP addresses, WAF
     * inspects the last 10.</p> </li> </ul>
     */
    inline ForwardedIPPosition GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(ForwardedIPPosition value) { m_positionHasBeenSet = true; m_position = value; }
    inline IPSetForwardedIPConfig& WithPosition(ForwardedIPPosition value) { SetPosition(value); return *this;}
    ///@}
  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    FallbackBehavior m_fallbackBehavior{FallbackBehavior::NOT_SET};
    bool m_fallbackBehaviorHasBeenSet = false;

    ForwardedIPPosition m_position{ForwardedIPPosition::NOT_SET};
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
