/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/AWSManagedRulesBotControlRuleSet.h>
#include <aws/wafv2/model/AWSManagedRulesATPRuleSet.h>
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
   * <p>Additional information that's used by a managed rule group. Many managed rule
   * groups don't require this.</p> <p>Use the <code>AWSManagedRulesATPRuleSet</code>
   * configuration object for the account takeover prevention managed rule group, to
   * provide information such as the sign-in page of your application and the type of
   * content to accept or reject from the client. </p> <p>Use the
   * <code>AWSManagedRulesBotControlRuleSet</code> configuration object to configure
   * the protection level that you want the Bot Control rule group to use. </p>
   * <p>For example specifications, see the examples section of
   * <a>CreateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupConfig">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupConfig
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupConfig();
    AWS_WAFV2_API ManagedRuleGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const AWSManagedRulesBotControlRuleSet& GetAWSManagedRulesBotControlRuleSet() const{ return m_aWSManagedRulesBotControlRuleSet; }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline bool AWSManagedRulesBotControlRuleSetHasBeenSet() const { return m_aWSManagedRulesBotControlRuleSetHasBeenSet; }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetAWSManagedRulesBotControlRuleSet(const AWSManagedRulesBotControlRuleSet& value) { m_aWSManagedRulesBotControlRuleSetHasBeenSet = true; m_aWSManagedRulesBotControlRuleSet = value; }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetAWSManagedRulesBotControlRuleSet(AWSManagedRulesBotControlRuleSet&& value) { m_aWSManagedRulesBotControlRuleSetHasBeenSet = true; m_aWSManagedRulesBotControlRuleSet = std::move(value); }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline ManagedRuleGroupConfig& WithAWSManagedRulesBotControlRuleSet(const AWSManagedRulesBotControlRuleSet& value) { SetAWSManagedRulesBotControlRuleSet(value); return *this;}

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline ManagedRuleGroupConfig& WithAWSManagedRulesBotControlRuleSet(AWSManagedRulesBotControlRuleSet&& value) { SetAWSManagedRulesBotControlRuleSet(std::move(value)); return *this;}


    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. This configuration replaces the
     * individual configuration fields in <code>ManagedRuleGroupConfig</code> and
     * provides additional feature configuration. </p> <p>For information about using
     * the ATP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline const AWSManagedRulesATPRuleSet& GetAWSManagedRulesATPRuleSet() const{ return m_aWSManagedRulesATPRuleSet; }

    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. This configuration replaces the
     * individual configuration fields in <code>ManagedRuleGroupConfig</code> and
     * provides additional feature configuration. </p> <p>For information about using
     * the ATP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline bool AWSManagedRulesATPRuleSetHasBeenSet() const { return m_aWSManagedRulesATPRuleSetHasBeenSet; }

    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. This configuration replaces the
     * individual configuration fields in <code>ManagedRuleGroupConfig</code> and
     * provides additional feature configuration. </p> <p>For information about using
     * the ATP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline void SetAWSManagedRulesATPRuleSet(const AWSManagedRulesATPRuleSet& value) { m_aWSManagedRulesATPRuleSetHasBeenSet = true; m_aWSManagedRulesATPRuleSet = value; }

    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. This configuration replaces the
     * individual configuration fields in <code>ManagedRuleGroupConfig</code> and
     * provides additional feature configuration. </p> <p>For information about using
     * the ATP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline void SetAWSManagedRulesATPRuleSet(AWSManagedRulesATPRuleSet&& value) { m_aWSManagedRulesATPRuleSetHasBeenSet = true; m_aWSManagedRulesATPRuleSet = std::move(value); }

    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. This configuration replaces the
     * individual configuration fields in <code>ManagedRuleGroupConfig</code> and
     * provides additional feature configuration. </p> <p>For information about using
     * the ATP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline ManagedRuleGroupConfig& WithAWSManagedRulesATPRuleSet(const AWSManagedRulesATPRuleSet& value) { SetAWSManagedRulesATPRuleSet(value); return *this;}

    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. This configuration replaces the
     * individual configuration fields in <code>ManagedRuleGroupConfig</code> and
     * provides additional feature configuration. </p> <p>For information about using
     * the ATP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline ManagedRuleGroupConfig& WithAWSManagedRulesATPRuleSet(AWSManagedRulesATPRuleSet&& value) { SetAWSManagedRulesATPRuleSet(std::move(value)); return *this;}

  private:

    AWSManagedRulesBotControlRuleSet m_aWSManagedRulesBotControlRuleSet;
    bool m_aWSManagedRulesBotControlRuleSetHasBeenSet = false;

    AWSManagedRulesATPRuleSet m_aWSManagedRulesATPRuleSet;
    bool m_aWSManagedRulesATPRuleSetHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
