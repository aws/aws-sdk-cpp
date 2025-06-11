/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/AWSManagedRulesBotControlRuleSet.h>
#include <aws/wafv2/model/AWSManagedRulesATPRuleSet.h>
#include <aws/wafv2/model/AWSManagedRulesACFPRuleSet.h>
#include <aws/wafv2/model/AWSManagedRulesAntiDDoSRuleSet.h>
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
   * groups don't require this.</p> <p>The rule groups used for intelligent threat
   * mitigation require additional configuration: </p> <ul> <li> <p>Use the
   * <code>AWSManagedRulesACFPRuleSet</code> configuration object to configure the
   * account creation fraud prevention managed rule group. The configuration includes
   * the registration and sign-up pages of your application and the locations in the
   * account creation request payload of data, such as the user email and phone
   * number fields. </p> </li> <li> <p>Use the
   * <code>AWSManagedRulesAntiDDoSRuleSet</code> configuration object to configure
   * the anti-DDoS managed rule group. The configuration includes the sensitivity
   * levels to use in the rules that typically block and challenge requests that
   * might be participating in DDoS attacks and the specification to use to indicate
   * whether a request can handle a silent browser challenge. </p> </li> <li> <p>Use
   * the <code>AWSManagedRulesATPRuleSet</code> configuration object to configure the
   * account takeover prevention managed rule group. The configuration includes the
   * sign-in page of your application and the locations in the login request payload
   * of data such as the username and password. </p> </li> <li> <p>Use the
   * <code>AWSManagedRulesBotControlRuleSet</code> configuration object to configure
   * the protection level that you want the Bot Control rule group to use. </p> </li>
   * </ul> <p>For example specifications, see the examples section of
   * <a>CreateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupConfig">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupConfig
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupConfig() = default;
    AWS_WAFV2_API ManagedRuleGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const AWSManagedRulesBotControlRuleSet& GetAWSManagedRulesBotControlRuleSet() const { return m_aWSManagedRulesBotControlRuleSet; }
    inline bool AWSManagedRulesBotControlRuleSetHasBeenSet() const { return m_aWSManagedRulesBotControlRuleSetHasBeenSet; }
    template<typename AWSManagedRulesBotControlRuleSetT = AWSManagedRulesBotControlRuleSet>
    void SetAWSManagedRulesBotControlRuleSet(AWSManagedRulesBotControlRuleSetT&& value) { m_aWSManagedRulesBotControlRuleSetHasBeenSet = true; m_aWSManagedRulesBotControlRuleSet = std::forward<AWSManagedRulesBotControlRuleSetT>(value); }
    template<typename AWSManagedRulesBotControlRuleSetT = AWSManagedRulesBotControlRuleSet>
    ManagedRuleGroupConfig& WithAWSManagedRulesBotControlRuleSet(AWSManagedRulesBotControlRuleSetT&& value) { SetAWSManagedRulesBotControlRuleSet(std::forward<AWSManagedRulesBotControlRuleSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional configuration for using the account takeover prevention (ATP)
     * managed rule group, <code>AWSManagedRulesATPRuleSet</code>. Use this to provide
     * login request information to the rule group. For web ACLs that protect
     * CloudFront distributions, use this to also provide the information about how
     * your distribution responds to login requests. </p> <p>This configuration
     * replaces the individual configuration fields in
     * <code>ManagedRuleGroupConfig</code> and provides additional feature
     * configuration. </p> <p>For information about using the ATP managed rule group,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-atp.html">WAF
     * Fraud Control account takeover prevention (ATP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-atp.html">WAF
     * Fraud Control account takeover prevention (ATP)</a> in the <i>WAF Developer
     * Guide</i>.</p>
     */
    inline const AWSManagedRulesATPRuleSet& GetAWSManagedRulesATPRuleSet() const { return m_aWSManagedRulesATPRuleSet; }
    inline bool AWSManagedRulesATPRuleSetHasBeenSet() const { return m_aWSManagedRulesATPRuleSetHasBeenSet; }
    template<typename AWSManagedRulesATPRuleSetT = AWSManagedRulesATPRuleSet>
    void SetAWSManagedRulesATPRuleSet(AWSManagedRulesATPRuleSetT&& value) { m_aWSManagedRulesATPRuleSetHasBeenSet = true; m_aWSManagedRulesATPRuleSet = std::forward<AWSManagedRulesATPRuleSetT>(value); }
    template<typename AWSManagedRulesATPRuleSetT = AWSManagedRulesATPRuleSet>
    ManagedRuleGroupConfig& WithAWSManagedRulesATPRuleSet(AWSManagedRulesATPRuleSetT&& value) { SetAWSManagedRulesATPRuleSet(std::forward<AWSManagedRulesATPRuleSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional configuration for using the account creation fraud prevention
     * (ACFP) managed rule group, <code>AWSManagedRulesACFPRuleSet</code>. Use this to
     * provide account creation request information to the rule group. For web ACLs
     * that protect CloudFront distributions, use this to also provide the information
     * about how your distribution responds to account creation requests. </p> <p>For
     * information about using the ACFP managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-acfp.html">WAF
     * Fraud Control account creation fraud prevention (ACFP) rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-acfp.html">WAF
     * Fraud Control account creation fraud prevention (ACFP)</a> in the <i>WAF
     * Developer Guide</i>.</p>
     */
    inline const AWSManagedRulesACFPRuleSet& GetAWSManagedRulesACFPRuleSet() const { return m_aWSManagedRulesACFPRuleSet; }
    inline bool AWSManagedRulesACFPRuleSetHasBeenSet() const { return m_aWSManagedRulesACFPRuleSetHasBeenSet; }
    template<typename AWSManagedRulesACFPRuleSetT = AWSManagedRulesACFPRuleSet>
    void SetAWSManagedRulesACFPRuleSet(AWSManagedRulesACFPRuleSetT&& value) { m_aWSManagedRulesACFPRuleSetHasBeenSet = true; m_aWSManagedRulesACFPRuleSet = std::forward<AWSManagedRulesACFPRuleSetT>(value); }
    template<typename AWSManagedRulesACFPRuleSetT = AWSManagedRulesACFPRuleSet>
    ManagedRuleGroupConfig& WithAWSManagedRulesACFPRuleSet(AWSManagedRulesACFPRuleSetT&& value) { SetAWSManagedRulesACFPRuleSet(std::forward<AWSManagedRulesACFPRuleSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional configuration for using the anti-DDoS managed rule group,
     * <code>AWSManagedRulesAntiDDoSRuleSet</code>. Use this to configure anti-DDoS
     * behavior for the rule group. </p> <p>For information about using the anti-DDoS
     * managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-anti-ddos.html">WAF
     * Anti-DDoS rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-anti-ddos.html">Distributed
     * Denial of Service (DDoS) prevention</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const AWSManagedRulesAntiDDoSRuleSet& GetAWSManagedRulesAntiDDoSRuleSet() const { return m_aWSManagedRulesAntiDDoSRuleSet; }
    inline bool AWSManagedRulesAntiDDoSRuleSetHasBeenSet() const { return m_aWSManagedRulesAntiDDoSRuleSetHasBeenSet; }
    template<typename AWSManagedRulesAntiDDoSRuleSetT = AWSManagedRulesAntiDDoSRuleSet>
    void SetAWSManagedRulesAntiDDoSRuleSet(AWSManagedRulesAntiDDoSRuleSetT&& value) { m_aWSManagedRulesAntiDDoSRuleSetHasBeenSet = true; m_aWSManagedRulesAntiDDoSRuleSet = std::forward<AWSManagedRulesAntiDDoSRuleSetT>(value); }
    template<typename AWSManagedRulesAntiDDoSRuleSetT = AWSManagedRulesAntiDDoSRuleSet>
    ManagedRuleGroupConfig& WithAWSManagedRulesAntiDDoSRuleSet(AWSManagedRulesAntiDDoSRuleSetT&& value) { SetAWSManagedRulesAntiDDoSRuleSet(std::forward<AWSManagedRulesAntiDDoSRuleSetT>(value)); return *this;}
    ///@}
  private:

    AWSManagedRulesBotControlRuleSet m_aWSManagedRulesBotControlRuleSet;
    bool m_aWSManagedRulesBotControlRuleSetHasBeenSet = false;

    AWSManagedRulesATPRuleSet m_aWSManagedRulesATPRuleSet;
    bool m_aWSManagedRulesATPRuleSetHasBeenSet = false;

    AWSManagedRulesACFPRuleSet m_aWSManagedRulesACFPRuleSet;
    bool m_aWSManagedRulesACFPRuleSetHasBeenSet = false;

    AWSManagedRulesAntiDDoSRuleSet m_aWSManagedRulesAntiDDoSRuleSet;
    bool m_aWSManagedRulesAntiDDoSRuleSetHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
