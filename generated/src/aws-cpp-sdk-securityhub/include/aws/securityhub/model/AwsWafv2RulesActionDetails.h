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
    AWS_SECURITYHUB_API AwsWafv2RulesActionDetails();
    AWS_SECURITYHUB_API AwsWafv2RulesActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RulesActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline const AwsWafv2ActionAllowDetails& GetAllow() const{ return m_allow; }

    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }

    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline void SetAllow(const AwsWafv2ActionAllowDetails& value) { m_allowHasBeenSet = true; m_allow = value; }

    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline void SetAllow(AwsWafv2ActionAllowDetails&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }

    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline AwsWafv2RulesActionDetails& WithAllow(const AwsWafv2ActionAllowDetails& value) { SetAllow(value); return *this;}

    /**
     * <p> Instructs WAF to allow the web request. </p>
     */
    inline AwsWafv2RulesActionDetails& WithAllow(AwsWafv2ActionAllowDetails&& value) { SetAllow(std::move(value)); return *this;}


    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline const AwsWafv2ActionBlockDetails& GetBlock() const{ return m_block; }

    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }

    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline void SetBlock(const AwsWafv2ActionBlockDetails& value) { m_blockHasBeenSet = true; m_block = value; }

    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline void SetBlock(AwsWafv2ActionBlockDetails&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }

    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline AwsWafv2RulesActionDetails& WithBlock(const AwsWafv2ActionBlockDetails& value) { SetBlock(value); return *this;}

    /**
     * <p> Instructs WAF to block the web request. </p>
     */
    inline AwsWafv2RulesActionDetails& WithBlock(AwsWafv2ActionBlockDetails&& value) { SetBlock(std::move(value)); return *this;}


    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline const AwsWafv2RulesActionCaptchaDetails& GetCaptcha() const{ return m_captcha; }

    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline bool CaptchaHasBeenSet() const { return m_captchaHasBeenSet; }

    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline void SetCaptcha(const AwsWafv2RulesActionCaptchaDetails& value) { m_captchaHasBeenSet = true; m_captcha = value; }

    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline void SetCaptcha(AwsWafv2RulesActionCaptchaDetails&& value) { m_captchaHasBeenSet = true; m_captcha = std::move(value); }

    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline AwsWafv2RulesActionDetails& WithCaptcha(const AwsWafv2RulesActionCaptchaDetails& value) { SetCaptcha(value); return *this;}

    /**
     * <p> Instructs WAF to run a CAPTCHA check against the web request. </p>
     */
    inline AwsWafv2RulesActionDetails& WithCaptcha(AwsWafv2RulesActionCaptchaDetails&& value) { SetCaptcha(std::move(value)); return *this;}


    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline const AwsWafv2RulesActionCountDetails& GetCount() const{ return m_count; }

    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline void SetCount(const AwsWafv2RulesActionCountDetails& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline void SetCount(AwsWafv2RulesActionCountDetails&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline AwsWafv2RulesActionDetails& WithCount(const AwsWafv2RulesActionCountDetails& value) { SetCount(value); return *this;}

    /**
     * <p> Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL. </p>
     */
    inline AwsWafv2RulesActionDetails& WithCount(AwsWafv2RulesActionCountDetails&& value) { SetCount(std::move(value)); return *this;}

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
