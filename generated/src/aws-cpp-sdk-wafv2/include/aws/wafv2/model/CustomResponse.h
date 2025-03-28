﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/CustomHTTPHeader.h>
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
   * <p>A custom response to send to the client. You can define a custom response for
   * rule actions and default web ACL actions that are set to <a>BlockAction</a>.
   * </p> <p>For information about customizing web requests and responses, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
   * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CustomResponse">AWS
   * API Reference</a></p>
   */
  class CustomResponse
  {
  public:
    AWS_WAFV2_API CustomResponse() = default;
    AWS_WAFV2_API CustomResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CustomResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP status code to return to the client. </p> <p>For a list of status
     * codes that you can use in your custom responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/customizing-the-response-status-codes.html">Supported
     * status codes for custom response</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline int GetResponseCode() const { return m_responseCode; }
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }
    inline CustomResponse& WithResponseCode(int value) { SetResponseCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>References the response body that you want WAF to return to the web request
     * client. You can define a custom response for a rule action or a default web ACL
     * action that is set to block. To do this, you first define the response body key
     * and value in the <code>CustomResponseBodies</code> setting for the <a>WebACL</a>
     * or <a>RuleGroup</a> where you want to use it. Then, in the rule action or web
     * ACL default action <code>BlockAction</code> setting, you reference the response
     * body using this key. </p>
     */
    inline const Aws::String& GetCustomResponseBodyKey() const { return m_customResponseBodyKey; }
    inline bool CustomResponseBodyKeyHasBeenSet() const { return m_customResponseBodyKeyHasBeenSet; }
    template<typename CustomResponseBodyKeyT = Aws::String>
    void SetCustomResponseBodyKey(CustomResponseBodyKeyT&& value) { m_customResponseBodyKeyHasBeenSet = true; m_customResponseBodyKey = std::forward<CustomResponseBodyKeyT>(value); }
    template<typename CustomResponseBodyKeyT = Aws::String>
    CustomResponse& WithCustomResponseBodyKey(CustomResponseBodyKeyT&& value) { SetCustomResponseBodyKey(std::forward<CustomResponseBodyKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP headers to use in the response. You can specify any header name
     * except for <code>content-type</code>. Duplicate header names are not
     * allowed.</p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Vector<CustomHTTPHeader>& GetResponseHeaders() const { return m_responseHeaders; }
    inline bool ResponseHeadersHasBeenSet() const { return m_responseHeadersHasBeenSet; }
    template<typename ResponseHeadersT = Aws::Vector<CustomHTTPHeader>>
    void SetResponseHeaders(ResponseHeadersT&& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders = std::forward<ResponseHeadersT>(value); }
    template<typename ResponseHeadersT = Aws::Vector<CustomHTTPHeader>>
    CustomResponse& WithResponseHeaders(ResponseHeadersT&& value) { SetResponseHeaders(std::forward<ResponseHeadersT>(value)); return *this;}
    template<typename ResponseHeadersT = CustomHTTPHeader>
    CustomResponse& AddResponseHeaders(ResponseHeadersT&& value) { m_responseHeadersHasBeenSet = true; m_responseHeaders.emplace_back(std::forward<ResponseHeadersT>(value)); return *this; }
    ///@}
  private:

    int m_responseCode{0};
    bool m_responseCodeHasBeenSet = false;

    Aws::String m_customResponseBodyKey;
    bool m_customResponseBodyKeyHasBeenSet = false;

    Aws::Vector<CustomHTTPHeader> m_responseHeaders;
    bool m_responseHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
