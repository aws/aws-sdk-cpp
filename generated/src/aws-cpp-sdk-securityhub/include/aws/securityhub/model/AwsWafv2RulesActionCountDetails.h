/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafv2CustomRequestHandlingDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies that WAF should count the request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2RulesActionCountDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2RulesActionCountDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2RulesActionCountDetails();
    AWS_SECURITYHUB_API AwsWafv2RulesActionCountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RulesActionCountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Defines custom handling for the web request. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline const AwsWafv2CustomRequestHandlingDetails& GetCustomRequestHandling() const{ return m_customRequestHandling; }

    /**
     * <p> Defines custom handling for the web request. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline bool CustomRequestHandlingHasBeenSet() const { return m_customRequestHandlingHasBeenSet; }

    /**
     * <p> Defines custom handling for the web request. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline void SetCustomRequestHandling(const AwsWafv2CustomRequestHandlingDetails& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = value; }

    /**
     * <p> Defines custom handling for the web request. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline void SetCustomRequestHandling(AwsWafv2CustomRequestHandlingDetails&& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = std::move(value); }

    /**
     * <p> Defines custom handling for the web request. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline AwsWafv2RulesActionCountDetails& WithCustomRequestHandling(const AwsWafv2CustomRequestHandlingDetails& value) { SetCustomRequestHandling(value); return *this;}

    /**
     * <p> Defines custom handling for the web request. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline AwsWafv2RulesActionCountDetails& WithCustomRequestHandling(AwsWafv2CustomRequestHandlingDetails&& value) { SetCustomRequestHandling(std::move(value)); return *this;}

  private:

    AwsWafv2CustomRequestHandlingDetails m_customRequestHandling;
    bool m_customRequestHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
