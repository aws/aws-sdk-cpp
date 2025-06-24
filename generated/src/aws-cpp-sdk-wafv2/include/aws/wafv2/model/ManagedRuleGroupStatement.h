/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ExcludedRule.h>
#include <aws/wafv2/model/ManagedRuleGroupConfig.h>
#include <aws/wafv2/model/RuleActionOverride.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
  class Statement;

  /**
   * <p>A rule statement used to run the rules that are defined in a managed rule
   * group. To use this, provide the vendor name and the name of the rule group in
   * this statement. You can retrieve the required names by calling
   * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
   * <code>ManagedRuleGroupStatement</code>, for example for use inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. You cannot use a managed
   * rule group inside another rule group. You can only reference a managed rule
   * group as a top-level statement within a rule that you define in a web ACL.</p>
   *  <p>You are charged additional fees when you use the WAF Bot Control
   * managed rule group <code>AWSManagedRulesBotControlRuleSet</code>, the WAF Fraud
   * Control account takeover prevention (ATP) managed rule group
   * <code>AWSManagedRulesATPRuleSet</code>, or the WAF Fraud Control account
   * creation fraud prevention (ACFP) managed rule group
   * <code>AWSManagedRulesACFPRuleSet</code>. For more information, see <a
   * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupStatement">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupStatement
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupStatement() = default;
    AWS_WAFV2_API ManagedRuleGroupStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify a rule group.</p>
     */
    inline const Aws::String& GetVendorName() const { return m_vendorName; }
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
    template<typename VendorNameT = Aws::String>
    void SetVendorName(VendorNameT&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::forward<VendorNameT>(value); }
    template<typename VendorNameT = Aws::String>
    ManagedRuleGroupStatement& WithVendorName(VendorNameT&& value) { SetVendorName(std::forward<VendorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ManagedRuleGroupStatement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ManagedRuleGroupStatement& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline const Aws::Vector<ExcludedRule>& GetExcludedRules() const { return m_excludedRules; }
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }
    template<typename ExcludedRulesT = Aws::Vector<ExcludedRule>>
    void SetExcludedRules(ExcludedRulesT&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::forward<ExcludedRulesT>(value); }
    template<typename ExcludedRulesT = Aws::Vector<ExcludedRule>>
    ManagedRuleGroupStatement& WithExcludedRules(ExcludedRulesT&& value) { SetExcludedRules(std::forward<ExcludedRulesT>(value)); return *this;}
    template<typename ExcludedRulesT = ExcludedRule>
    ManagedRuleGroupStatement& AddExcludedRules(ExcludedRulesT&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.emplace_back(std::forward<ExcludedRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    inline const Statement& GetScopeDownStatement() const{
      return *m_scopeDownStatement;
    }
    inline bool ScopeDownStatementHasBeenSet() const { return m_scopeDownStatementHasBeenSet; }
    template<typename ScopeDownStatementT = Statement>
    void SetScopeDownStatement(ScopeDownStatementT&& value) {
      m_scopeDownStatementHasBeenSet = true; 
      m_scopeDownStatement = Aws::MakeShared<Statement>("ManagedRuleGroupStatement", std::forward<ScopeDownStatementT>(value));
    }
    template<typename ScopeDownStatementT = Statement>
    ManagedRuleGroupStatement& WithScopeDownStatement(ScopeDownStatementT&& value) { SetScopeDownStatement(std::forward<ScopeDownStatementT>(value)); return *this;}
    ///@}

    ///@{
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
     * </ul>
     */
    inline const Aws::Vector<ManagedRuleGroupConfig>& GetManagedRuleGroupConfigs() const { return m_managedRuleGroupConfigs; }
    inline bool ManagedRuleGroupConfigsHasBeenSet() const { return m_managedRuleGroupConfigsHasBeenSet; }
    template<typename ManagedRuleGroupConfigsT = Aws::Vector<ManagedRuleGroupConfig>>
    void SetManagedRuleGroupConfigs(ManagedRuleGroupConfigsT&& value) { m_managedRuleGroupConfigsHasBeenSet = true; m_managedRuleGroupConfigs = std::forward<ManagedRuleGroupConfigsT>(value); }
    template<typename ManagedRuleGroupConfigsT = Aws::Vector<ManagedRuleGroupConfig>>
    ManagedRuleGroupStatement& WithManagedRuleGroupConfigs(ManagedRuleGroupConfigsT&& value) { SetManagedRuleGroupConfigs(std::forward<ManagedRuleGroupConfigsT>(value)); return *this;}
    template<typename ManagedRuleGroupConfigsT = ManagedRuleGroupConfig>
    ManagedRuleGroupStatement& AddManagedRuleGroupConfigs(ManagedRuleGroupConfigsT&& value) { m_managedRuleGroupConfigsHasBeenSet = true; m_managedRuleGroupConfigs.emplace_back(std::forward<ManagedRuleGroupConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p>  <p>Verify the rule names in your overrides
     * carefully. With managed rule groups, WAF silently ignores any override that uses
     * an invalid rule name. With customer-owned rule groups, invalid rule names in
     * your overrides will cause web ACL updates to fail. An invalid rule name is any
     * name that doesn't exactly match the case-sensitive name of an existing rule in
     * the rule group.</p>  <p>You can use overrides for testing, for example
     * you can override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline const Aws::Vector<RuleActionOverride>& GetRuleActionOverrides() const { return m_ruleActionOverrides; }
    inline bool RuleActionOverridesHasBeenSet() const { return m_ruleActionOverridesHasBeenSet; }
    template<typename RuleActionOverridesT = Aws::Vector<RuleActionOverride>>
    void SetRuleActionOverrides(RuleActionOverridesT&& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides = std::forward<RuleActionOverridesT>(value); }
    template<typename RuleActionOverridesT = Aws::Vector<RuleActionOverride>>
    ManagedRuleGroupStatement& WithRuleActionOverrides(RuleActionOverridesT&& value) { SetRuleActionOverrides(std::forward<RuleActionOverridesT>(value)); return *this;}
    template<typename RuleActionOverridesT = RuleActionOverride>
    ManagedRuleGroupStatement& AddRuleActionOverrides(RuleActionOverridesT&& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides.emplace_back(std::forward<RuleActionOverridesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<ExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet = false;

    std::shared_ptr<Statement> m_scopeDownStatement;
    bool m_scopeDownStatementHasBeenSet = false;

    Aws::Vector<ManagedRuleGroupConfig> m_managedRuleGroupConfigs;
    bool m_managedRuleGroupConfigsHasBeenSet = false;

    Aws::Vector<RuleActionOverride> m_ruleActionOverrides;
    bool m_ruleActionOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
