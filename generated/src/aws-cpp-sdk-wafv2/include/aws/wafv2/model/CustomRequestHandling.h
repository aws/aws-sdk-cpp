/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
   * <p>Custom request handling behavior that inserts custom headers into a web
   * request. You can add custom request handling for WAF to use when the rule action
   * doesn't block the request. For example, <code>CaptchaAction</code> for requests
   * with valid t okens, and <code>AllowAction</code>. </p> <p>For information about
   * customizing web requests and responses, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
   * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CustomRequestHandling">AWS
   * API Reference</a></p>
   */
  class CustomRequestHandling
  {
  public:
    AWS_WAFV2_API CustomRequestHandling() = default;
    AWS_WAFV2_API CustomRequestHandling(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CustomRequestHandling& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP headers to insert into the request. Duplicate header names are not
     * allowed. </p> <p>For information about the limits on count and size for custom
     * request and response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Vector<CustomHTTPHeader>& GetInsertHeaders() const { return m_insertHeaders; }
    inline bool InsertHeadersHasBeenSet() const { return m_insertHeadersHasBeenSet; }
    template<typename InsertHeadersT = Aws::Vector<CustomHTTPHeader>>
    void SetInsertHeaders(InsertHeadersT&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders = std::forward<InsertHeadersT>(value); }
    template<typename InsertHeadersT = Aws::Vector<CustomHTTPHeader>>
    CustomRequestHandling& WithInsertHeaders(InsertHeadersT&& value) { SetInsertHeaders(std::forward<InsertHeadersT>(value)); return *this;}
    template<typename InsertHeadersT = CustomHTTPHeader>
    CustomRequestHandling& AddInsertHeaders(InsertHeadersT&& value) { m_insertHeadersHasBeenSet = true; m_insertHeaders.emplace_back(std::forward<InsertHeadersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CustomHTTPHeader> m_insertHeaders;
    bool m_insertHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
