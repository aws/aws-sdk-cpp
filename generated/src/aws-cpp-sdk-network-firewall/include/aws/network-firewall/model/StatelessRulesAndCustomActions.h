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
    AWS_NETWORKFIREWALL_API StatelessRulesAndCustomActions() = default;
    AWS_NETWORKFIREWALL_API StatelessRulesAndCustomActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatelessRulesAndCustomActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the set of stateless rules for use in a stateless rule group. </p>
     */
    inline const Aws::Vector<StatelessRule>& GetStatelessRules() const { return m_statelessRules; }
    inline bool StatelessRulesHasBeenSet() const { return m_statelessRulesHasBeenSet; }
    template<typename StatelessRulesT = Aws::Vector<StatelessRule>>
    void SetStatelessRules(StatelessRulesT&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules = std::forward<StatelessRulesT>(value); }
    template<typename StatelessRulesT = Aws::Vector<StatelessRule>>
    StatelessRulesAndCustomActions& WithStatelessRules(StatelessRulesT&& value) { SetStatelessRules(std::forward<StatelessRulesT>(value)); return *this;}
    template<typename StatelessRulesT = StatelessRule>
    StatelessRulesAndCustomActions& AddStatelessRules(StatelessRulesT&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules.emplace_back(std::forward<StatelessRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines an array of individual custom action definitions that are available
     * for use by the stateless rules in this
     * <code>StatelessRulesAndCustomActions</code> specification. You name each custom
     * action that you define, and then you can use it by name in your
     * <a>StatelessRule</a> <a>RuleDefinition</a> <code>Actions</code>
     * specification.</p>
     */
    inline const Aws::Vector<CustomAction>& GetCustomActions() const { return m_customActions; }
    inline bool CustomActionsHasBeenSet() const { return m_customActionsHasBeenSet; }
    template<typename CustomActionsT = Aws::Vector<CustomAction>>
    void SetCustomActions(CustomActionsT&& value) { m_customActionsHasBeenSet = true; m_customActions = std::forward<CustomActionsT>(value); }
    template<typename CustomActionsT = Aws::Vector<CustomAction>>
    StatelessRulesAndCustomActions& WithCustomActions(CustomActionsT&& value) { SetCustomActions(std::forward<CustomActionsT>(value)); return *this;}
    template<typename CustomActionsT = CustomAction>
    StatelessRulesAndCustomActions& AddCustomActions(CustomActionsT&& value) { m_customActionsHasBeenSet = true; m_customActions.emplace_back(std::forward<CustomActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StatelessRule> m_statelessRules;
    bool m_statelessRulesHasBeenSet = false;

    Aws::Vector<CustomAction> m_customActions;
    bool m_customActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
