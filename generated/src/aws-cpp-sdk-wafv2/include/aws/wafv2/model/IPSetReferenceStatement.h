/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/IPSetForwardedIPConfig.h>
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
   * <p>A rule statement used to detect web requests coming from particular IP
   * addresses or address ranges. To use this, create an <a>IPSet</a> that specifies
   * the addresses you want to detect, then use the ARN of that set in this
   * statement. To create an IP set, see <a>CreateIPSet</a>.</p> <p>Each IP set rule
   * statement references an IP set. You create and maintain the set independent of
   * your rules. This allows you to use the single set in multiple rules. When you
   * update the referenced set, WAF automatically updates all rules that reference
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/IPSetReferenceStatement">AWS
   * API Reference</a></p>
   */
  class IPSetReferenceStatement
  {
  public:
    AWS_WAFV2_API IPSetReferenceStatement();
    AWS_WAFV2_API IPSetReferenceStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API IPSetReferenceStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline IPSetReferenceStatement& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline IPSetReferenceStatement& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline IPSetReferenceStatement& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline const IPSetForwardedIPConfig& GetIPSetForwardedIPConfig() const{ return m_iPSetForwardedIPConfig; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline bool IPSetForwardedIPConfigHasBeenSet() const { return m_iPSetForwardedIPConfigHasBeenSet; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline void SetIPSetForwardedIPConfig(const IPSetForwardedIPConfig& value) { m_iPSetForwardedIPConfigHasBeenSet = true; m_iPSetForwardedIPConfig = value; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline void SetIPSetForwardedIPConfig(IPSetForwardedIPConfig&& value) { m_iPSetForwardedIPConfigHasBeenSet = true; m_iPSetForwardedIPConfig = std::move(value); }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline IPSetReferenceStatement& WithIPSetForwardedIPConfig(const IPSetForwardedIPConfig& value) { SetIPSetForwardedIPConfig(value); return *this;}

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     */
    inline IPSetReferenceStatement& WithIPSetForwardedIPConfig(IPSetForwardedIPConfig&& value) { SetIPSetForwardedIPConfig(std::move(value)); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    IPSetForwardedIPConfig m_iPSetForwardedIPConfig;
    bool m_iPSetForwardedIPConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
