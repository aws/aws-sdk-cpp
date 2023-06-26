/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ManagedRuleGroupStatement.h>
#include <aws/wafv2/model/RuleGroupReferenceStatement.h>
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
   * <p>The processing guidance for an Firewall Manager rule. This is like a regular
   * rule <a>Statement</a>, but it can only contain a single rule group
   * reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FirewallManagerStatement">AWS
   * API Reference</a></p>
   */
  class FirewallManagerStatement
  {
  public:
    AWS_WAFV2_API FirewallManagerStatement();
    AWS_WAFV2_API FirewallManagerStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FirewallManagerStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * managed rule group. This is managed by Firewall Manager for an Firewall Manager
     * WAF policy.</p>
     */
    inline const ManagedRuleGroupStatement& GetManagedRuleGroupStatement() const{ return m_managedRuleGroupStatement; }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * managed rule group. This is managed by Firewall Manager for an Firewall Manager
     * WAF policy.</p>
     */
    inline bool ManagedRuleGroupStatementHasBeenSet() const { return m_managedRuleGroupStatementHasBeenSet; }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * managed rule group. This is managed by Firewall Manager for an Firewall Manager
     * WAF policy.</p>
     */
    inline void SetManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = value; }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * managed rule group. This is managed by Firewall Manager for an Firewall Manager
     * WAF policy.</p>
     */
    inline void SetManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { m_managedRuleGroupStatementHasBeenSet = true; m_managedRuleGroupStatement = std::move(value); }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * managed rule group. This is managed by Firewall Manager for an Firewall Manager
     * WAF policy.</p>
     */
    inline FirewallManagerStatement& WithManagedRuleGroupStatement(const ManagedRuleGroupStatement& value) { SetManagedRuleGroupStatement(value); return *this;}

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * managed rule group. This is managed by Firewall Manager for an Firewall Manager
     * WAF policy.</p>
     */
    inline FirewallManagerStatement& WithManagedRuleGroupStatement(ManagedRuleGroupStatement&& value) { SetManagedRuleGroupStatement(std::move(value)); return *this;}


    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * rule group. This is managed by Firewall Manager for an Firewall Manager WAF
     * policy.</p>
     */
    inline const RuleGroupReferenceStatement& GetRuleGroupReferenceStatement() const{ return m_ruleGroupReferenceStatement; }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * rule group. This is managed by Firewall Manager for an Firewall Manager WAF
     * policy.</p>
     */
    inline bool RuleGroupReferenceStatementHasBeenSet() const { return m_ruleGroupReferenceStatementHasBeenSet; }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * rule group. This is managed by Firewall Manager for an Firewall Manager WAF
     * policy.</p>
     */
    inline void SetRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = value; }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * rule group. This is managed by Firewall Manager for an Firewall Manager WAF
     * policy.</p>
     */
    inline void SetRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { m_ruleGroupReferenceStatementHasBeenSet = true; m_ruleGroupReferenceStatement = std::move(value); }

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * rule group. This is managed by Firewall Manager for an Firewall Manager WAF
     * policy.</p>
     */
    inline FirewallManagerStatement& WithRuleGroupReferenceStatement(const RuleGroupReferenceStatement& value) { SetRuleGroupReferenceStatement(value); return *this;}

    /**
     * <p>A statement used by Firewall Manager to run the rules that are defined in a
     * rule group. This is managed by Firewall Manager for an Firewall Manager WAF
     * policy.</p>
     */
    inline FirewallManagerStatement& WithRuleGroupReferenceStatement(RuleGroupReferenceStatement&& value) { SetRuleGroupReferenceStatement(std::move(value)); return *this;}

  private:

    ManagedRuleGroupStatement m_managedRuleGroupStatement;
    bool m_managedRuleGroupStatementHasBeenSet = false;

    RuleGroupReferenceStatement m_ruleGroupReferenceStatement;
    bool m_ruleGroupReferenceStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
