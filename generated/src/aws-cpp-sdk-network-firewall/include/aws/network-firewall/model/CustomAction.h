/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/ActionDefinition.h>
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
   * <p>An optional, non-standard action to use for stateless packet handling. You
   * can define this in addition to the standard action that you must specify. </p>
   * <p>You define and name the custom actions that you want to be able to use, and
   * then you reference them by name in your actions settings. </p> <p>You can use
   * custom actions in the following places: </p> <ul> <li> <p>In a rule group's
   * <a>StatelessRulesAndCustomActions</a> specification. The custom actions are
   * available for use by name inside the <code>StatelessRulesAndCustomActions</code>
   * where you define them. You can use them for your stateless rule actions to
   * specify what to do with a packet that matches the rule's match attributes. </p>
   * </li> <li> <p>In a <a>FirewallPolicy</a> specification, in
   * <code>StatelessCustomActions</code>. The custom actions are available for use
   * inside the policy where you define them. You can use them for the policy's
   * default stateless actions settings to specify what to do with packets that don't
   * match any of the policy's stateless rules. </p> </li> </ul><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CustomAction">AWS
   * API Reference</a></p>
   */
  class CustomAction
  {
  public:
    AWS_NETWORKFIREWALL_API CustomAction() = default;
    AWS_NETWORKFIREWALL_API CustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API CustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The descriptive name of the custom action. You can't change the name of a
     * custom action after you create it.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    CustomAction& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom action associated with the action name.</p>
     */
    inline const ActionDefinition& GetActionDefinition() const { return m_actionDefinition; }
    inline bool ActionDefinitionHasBeenSet() const { return m_actionDefinitionHasBeenSet; }
    template<typename ActionDefinitionT = ActionDefinition>
    void SetActionDefinition(ActionDefinitionT&& value) { m_actionDefinitionHasBeenSet = true; m_actionDefinition = std::forward<ActionDefinitionT>(value); }
    template<typename ActionDefinitionT = ActionDefinition>
    CustomAction& WithActionDefinition(ActionDefinitionT&& value) { SetActionDefinition(std::forward<ActionDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    ActionDefinition m_actionDefinition;
    bool m_actionDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
