/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/StatelessRule.h>
#include <aws/network-firewall/model/CustomAction.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Stateless inspection criteria. Each stateless rule group uses exactly one of
   * these data types to define its stateless rules. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatelessRulesAndCustomActions">AWS
   * API Reference</a></p>
   */
  class StatelessRulesAndCustomActions
  {
  public:
    AWS_NETWORKFIREWALL_API StatelessRulesAndCustomActions();
    AWS_NETWORKFIREWALL_API StatelessRulesAndCustomActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatelessRulesAndCustomActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline const Aws::Vector<StatelessRule>& GetStatelessRules() const{ return m_statelessRules; }

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline bool StatelessRulesHasBeenSet() const { return m_statelessRulesHasBeenSet; }

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline void SetStatelessRules(const Aws::Vector<StatelessRule>& value) { m_statelessRulesHasBeenSet = true; m_statelessRules = value; }

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline void SetStatelessRules(Aws::Vector<StatelessRule>&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules = std::move(value); }

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline StatelessRulesAndCustomActions& WithStatelessRules(const Aws::Vector<StatelessRule>& value) { SetStatelessRules(value); return *this;}

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline StatelessRulesAndCustomActions& WithStatelessRules(Aws::Vector<StatelessRule>&& value) { SetStatelessRules(std::move(value)); return *this;}

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline StatelessRulesAndCustomActions& AddStatelessRules(const StatelessRule& value) { m_statelessRulesHasBeenSet = true; m_statelessRules.push_back(value); return *this; }

    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline StatelessRulesAndCustomActions& AddStatelessRules(StatelessRule&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline const Aws::Vector<CustomAction>& GetCustomActions() const{ return m_customActions; }

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline bool CustomActionsHasBeenSet() const { return m_customActionsHasBeenSet; }

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline void SetCustomActions(const Aws::Vector<CustomAction>& value) { m_customActionsHasBeenSet = true; m_customActions = value; }

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline void SetCustomActions(Aws::Vector<CustomAction>&& value) { m_customActionsHasBeenSet = true; m_customActions = std::move(value); }

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline StatelessRulesAndCustomActions& WithCustomActions(const Aws::Vector<CustomAction>& value) { SetCustomActions(value); return *this;}

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline StatelessRulesAndCustomActions& WithCustomActions(Aws::Vector<CustomAction>&& value) { SetCustomActions(std::move(value)); return *this;}

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline StatelessRulesAndCustomActions& AddCustomActions(const CustomAction& value) { m_customActionsHasBeenSet = true; m_customActions.push_back(value); return *this; }

    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline StatelessRulesAndCustomActions& AddCustomActions(CustomAction&& value) { m_customActionsHasBeenSet = true; m_customActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StatelessRule> m_statelessRules;
    bool m_statelessRulesHasBeenSet = false;

    Aws::Vector<CustomAction> m_customActions;
    bool m_customActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
