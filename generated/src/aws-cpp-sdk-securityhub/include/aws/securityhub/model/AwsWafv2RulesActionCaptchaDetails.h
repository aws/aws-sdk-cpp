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
   * <p> Specifies that WAF should run a CAPTCHA check against the request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2RulesActionCaptchaDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2RulesActionCaptchaDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2RulesActionCaptchaDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2RulesActionCaptchaDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RulesActionCaptchaDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Defines custom handling for the web request, used when the CAPTCHA
     * inspection determines that the request's token is valid and unexpired. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide.</i>. </p>
     */
    inline const AwsWafv2CustomRequestHandlingDetails& GetCustomRequestHandling() const { return m_customRequestHandling; }
    inline bool CustomRequestHandlingHasBeenSet() const { return m_customRequestHandlingHasBeenSet; }
    template<typename CustomRequestHandlingT = AwsWafv2CustomRequestHandlingDetails>
    void SetCustomRequestHandling(CustomRequestHandlingT&& value) { m_customRequestHandlingHasBeenSet = true; m_customRequestHandling = std::forward<CustomRequestHandlingT>(value); }
    template<typename CustomRequestHandlingT = AwsWafv2CustomRequestHandlingDetails>
    AwsWafv2RulesActionCaptchaDetails& WithCustomRequestHandling(CustomRequestHandlingT&& value) { SetCustomRequestHandling(std::forward<CustomRequestHandlingT>(value)); return *this;}
    ///@}
  private:

    AwsWafv2CustomRequestHandlingDetails m_customRequestHandling;
    bool m_customRequestHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
