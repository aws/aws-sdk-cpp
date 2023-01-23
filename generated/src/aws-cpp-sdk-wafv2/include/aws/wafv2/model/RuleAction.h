/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BlockAction.h>
#include <aws/wafv2/model/AllowAction.h>
#include <aws/wafv2/model/CountAction.h>
#include <aws/wafv2/model/CaptchaAction.h>
#include <aws/wafv2/model/ChallengeAction.h>
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
   * <p>The action that WAF should take on a web request when it matches a rule's
   * statement. Settings at the web ACL level can override the rule action setting.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleAction">AWS
   * API Reference</a></p>
   */
  class RuleAction
  {
  public:
    AWS_WAFV2_API RuleAction();
    AWS_WAFV2_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Instructs WAF to block the web request.</p>
     */
    inline const BlockAction& GetBlock() const{ return m_block; }

    /**
     * <p>Instructs WAF to block the web request.</p>
     */
    inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }

    /**
     * <p>Instructs WAF to block the web request.</p>
     */
    inline void SetBlock(const BlockAction& value) { m_blockHasBeenSet = true; m_block = value; }

    /**
     * <p>Instructs WAF to block the web request.</p>
     */
    inline void SetBlock(BlockAction&& value) { m_blockHasBeenSet = true; m_block = std::move(value); }

    /**
     * <p>Instructs WAF to block the web request.</p>
     */
    inline RuleAction& WithBlock(const BlockAction& value) { SetBlock(value); return *this;}

    /**
     * <p>Instructs WAF to block the web request.</p>
     */
    inline RuleAction& WithBlock(BlockAction&& value) { SetBlock(std::move(value)); return *this;}


    /**
     * <p>Instructs WAF to allow the web request.</p>
     */
    inline const AllowAction& GetAllow() const{ return m_allow; }

    /**
     * <p>Instructs WAF to allow the web request.</p>
     */
    inline bool AllowHasBeenSet() const { return m_allowHasBeenSet; }

    /**
     * <p>Instructs WAF to allow the web request.</p>
     */
    inline void SetAllow(const AllowAction& value) { m_allowHasBeenSet = true; m_allow = value; }

    /**
     * <p>Instructs WAF to allow the web request.</p>
     */
    inline void SetAllow(AllowAction&& value) { m_allowHasBeenSet = true; m_allow = std::move(value); }

    /**
     * <p>Instructs WAF to allow the web request.</p>
     */
    inline RuleAction& WithAllow(const AllowAction& value) { SetAllow(value); return *this;}

    /**
     * <p>Instructs WAF to allow the web request.</p>
     */
    inline RuleAction& WithAllow(AllowAction&& value) { SetAllow(std::move(value)); return *this;}


    /**
     * <p>Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL.</p>
     */
    inline const CountAction& GetCount() const{ return m_count; }

    /**
     * <p>Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL.</p>
     */
    inline void SetCount(const CountAction& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL.</p>
     */
    inline void SetCount(CountAction&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p>Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL.</p>
     */
    inline RuleAction& WithCount(const CountAction& value) { SetCount(value); return *this;}

    /**
     * <p>Instructs WAF to count the web request and then continue evaluating the
     * request using the remaining rules in the web ACL.</p>
     */
    inline RuleAction& WithCount(CountAction&& value) { SetCount(std::move(value)); return *this;}


    /**
     * <p>Instructs WAF to run a <code>CAPTCHA</code> check against the web
     * request.</p>
     */
    inline const CaptchaAction& GetCaptcha() const{ return m_captcha; }

    /**
     * <p>Instructs WAF to run a <code>CAPTCHA</code> check against the web
     * request.</p>
     */
    inline bool CaptchaHasBeenSet() const { return m_captchaHasBeenSet; }

    /**
     * <p>Instructs WAF to run a <code>CAPTCHA</code> check against the web
     * request.</p>
     */
    inline void SetCaptcha(const CaptchaAction& value) { m_captchaHasBeenSet = true; m_captcha = value; }

    /**
     * <p>Instructs WAF to run a <code>CAPTCHA</code> check against the web
     * request.</p>
     */
    inline void SetCaptcha(CaptchaAction&& value) { m_captchaHasBeenSet = true; m_captcha = std::move(value); }

    /**
     * <p>Instructs WAF to run a <code>CAPTCHA</code> check against the web
     * request.</p>
     */
    inline RuleAction& WithCaptcha(const CaptchaAction& value) { SetCaptcha(value); return *this;}

    /**
     * <p>Instructs WAF to run a <code>CAPTCHA</code> check against the web
     * request.</p>
     */
    inline RuleAction& WithCaptcha(CaptchaAction&& value) { SetCaptcha(std::move(value)); return *this;}


    /**
     * <p>Instructs WAF to run a <code>Challenge</code> check against the web
     * request.</p>
     */
    inline const ChallengeAction& GetChallenge() const{ return m_challenge; }

    /**
     * <p>Instructs WAF to run a <code>Challenge</code> check against the web
     * request.</p>
     */
    inline bool ChallengeHasBeenSet() const { return m_challengeHasBeenSet; }

    /**
     * <p>Instructs WAF to run a <code>Challenge</code> check against the web
     * request.</p>
     */
    inline void SetChallenge(const ChallengeAction& value) { m_challengeHasBeenSet = true; m_challenge = value; }

    /**
     * <p>Instructs WAF to run a <code>Challenge</code> check against the web
     * request.</p>
     */
    inline void SetChallenge(ChallengeAction&& value) { m_challengeHasBeenSet = true; m_challenge = std::move(value); }

    /**
     * <p>Instructs WAF to run a <code>Challenge</code> check against the web
     * request.</p>
     */
    inline RuleAction& WithChallenge(const ChallengeAction& value) { SetChallenge(value); return *this;}

    /**
     * <p>Instructs WAF to run a <code>Challenge</code> check against the web
     * request.</p>
     */
    inline RuleAction& WithChallenge(ChallengeAction&& value) { SetChallenge(std::move(value)); return *this;}

  private:

    BlockAction m_block;
    bool m_blockHasBeenSet = false;

    AllowAction m_allow;
    bool m_allowHasBeenSet = false;

    CountAction m_count;
    bool m_countHasBeenSet = false;

    CaptchaAction m_captcha;
    bool m_captchaHasBeenSet = false;

    ChallengeAction m_challenge;
    bool m_challengeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
