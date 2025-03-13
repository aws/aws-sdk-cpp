/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafv2ActionAllowDetails.h>
#include <aws/securityhub/model/AwsWafv2ActionBlockDetails.h>
#include <aws/securityhub/model/AwsWafv2RulesActionCaptchaDetails.h>
#include <aws/securityhub/model/AwsWafv2RulesActionCountDetails.h>
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
   * <p> The action that WAF should take on a web request when it matches a rule's
   * statement. Settings at the web ACL level can override the rule action setting.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2RulesActionDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2RulesActionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2RulesActionDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2RulesActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RulesActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline const AwsWafv2ActionAllowDetails& GetAllow() const { return m_allow; }
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }
    template<typename AllowT = AwsWafv2ActionAllowDetails>
    void SetAllow(AllowT&& value) { m_allowHasBeenSet = true; m_allow = std::forward<AllowT>(value); }
    template<typename AllowT = AwsWafv2ActionAllowDetails>
    AwsWafv2RulesActionDetails& WithAllow(AllowT&& value) { SetAllow(std::forward<AllowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline const AwsWafv2ActionBlockDetails& GetBlock() const { return m_block; }
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
    template<typename BlockT = AwsWafv2ActionBlockDetails>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = AwsWafv2ActionBlockDetails>
    AwsWafv2RulesActionDetails& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline const AwsWafv2RulesActionCaptchaDetails& GetCaptcha() const { return m_captcha; }
    inline bool CaptchaHasBeenSet() const { return m_captchaHasBeenSet; }
    template<typename CaptchaT = AwsWafv2RulesActionCaptchaDetails>
    void SetCaptcha(CaptchaT&& value) { m_captchaHasBeenSet = true; m_captcha = std::forward<CaptchaT>(value); }
    template<typename CaptchaT = AwsWafv2RulesActionCaptchaDetails>
    AwsWafv2RulesActionDetails& WithCaptcha(CaptchaT&& value) { SetCaptcha(std::forward<CaptchaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline const AwsWafv2RulesActionCountDetails& GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    template<typename CountT = AwsWafv2RulesActionCountDetails>
    void SetCount(CountT&& value) { m_countHasBeenSet = true; m_count = std::forward<CountT>(value); }
    template<typename CountT = AwsWafv2RulesActionCountDetails>
    AwsWafv2RulesActionDetails& WithCount(CountT&& value) { SetCount(std::forward<CountT>(value)); return *this;}
    ///@}
  private:

    AwsWafv2ActionAllowDetails m_allow;
    bool m_allowHasBeenSet = false;

    AwsWafv2ActionBlockDetails m_block;
    bool m_blockHasBeenSet = false;

    AwsWafv2RulesActionCaptchaDetails m_captcha;
    bool m_captchaHasBeenSet = false;

    AwsWafv2RulesActionCountDetails m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
