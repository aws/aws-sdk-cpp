/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/RuleConfig.h>
#include <aws/route53-recovery-control-config/model/Status.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>An assertion rule enforces that, when you change a routing control state,
   * that the criteria that you set in the rule configuration is met. Otherwise, the
   * change to the routing control is not accepted. For example, the criteria might
   * be that at least one routing control state is On after the transaction so that
   * traffic continues to flow to at least one cell for the application. This ensures
   * that you avoid a fail-open scenario.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/AssertionRule">AWS
   * API Reference</a></p>
   */
  class AssertionRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The routing controls that are part of transactions that are evaluated to
     * determine if a request to change a routing control state is allowed. For
     * example, you might include three routing controls, one for each of three Amazon
     * Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssertedControls() const { return m_assertedControls; }
    inline bool AssertedControlsHasBeenSet() const { return m_assertedControlsHasBeenSet; }
    template<typename AssertedControlsT = Aws::Vector<Aws::String>>
    void SetAssertedControls(AssertedControlsT&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls = std::forward<AssertedControlsT>(value); }
    template<typename AssertedControlsT = Aws::Vector<Aws::String>>
    AssertionRule& WithAssertedControls(AssertedControlsT&& value) { SetAssertedControls(std::forward<AssertedControlsT>(value)); return *this;}
    template<typename AssertedControlsT = Aws::String>
    AssertionRule& AddAssertedControls(AssertedControlsT&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls.emplace_back(std::forward<AssertedControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const { return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    template<typename ControlPanelArnT = Aws::String>
    void SetControlPanelArn(ControlPanelArnT&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::forward<ControlPanelArnT>(value); }
    template<typename ControlPanelArnT = Aws::String>
    AssertionRule& WithControlPanelArn(ControlPanelArnT&& value) { SetControlPanelArn(std::forward<ControlPanelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssertionRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that you set for specific assertion routing controls
     * (AssertedControls) that designate how many routing control states must be ON as
     * the result of a transaction. For example, if you have three assertion routing
     * controls, you might specify ATLEAST 2 for your rule configuration. This means
     * that at least two assertion routing control states must be ON, so that at least
     * two Amazon Web Services Regions have traffic flowing to them.</p>
     */
    inline const RuleConfig& GetRuleConfig() const { return m_ruleConfig; }
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }
    template<typename RuleConfigT = RuleConfig>
    void SetRuleConfig(RuleConfigT&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::forward<RuleConfigT>(value); }
    template<typename RuleConfigT = RuleConfig>
    AssertionRule& WithRuleConfig(RuleConfigT&& value) { SetRuleConfig(std::forward<RuleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline const Aws::String& GetSafetyRuleArn() const { return m_safetyRuleArn; }
    inline bool SafetyRuleArnHasBeenSet() const { return m_safetyRuleArnHasBeenSet; }
    template<typename SafetyRuleArnT = Aws::String>
    void SetSafetyRuleArn(SafetyRuleArnT&& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = std::forward<SafetyRuleArnT>(value); }
    template<typename SafetyRuleArnT = Aws::String>
    AssertionRule& WithSafetyRuleArn(SafetyRuleArnT&& value) { SetSafetyRuleArn(std::forward<SafetyRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssertionRule& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An evaluation period, in milliseconds (ms), during which any request against
     * the target routing controls will fail. This helps prevent "flapping" of state.
     * The wait period is 5000 ms by default, but you can choose a custom value.</p>
     */
    inline int GetWaitPeriodMs() const { return m_waitPeriodMs; }
    inline bool WaitPeriodMsHasBeenSet() const { return m_waitPeriodMsHasBeenSet; }
    inline void SetWaitPeriodMs(int value) { m_waitPeriodMsHasBeenSet = true; m_waitPeriodMs = value; }
    inline AssertionRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the assertion rule owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    AssertionRule& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_assertedControls;
    bool m_assertedControlsHasBeenSet = false;

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleConfig m_ruleConfig;
    bool m_ruleConfigHasBeenSet = false;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_waitPeriodMs{0};
    bool m_waitPeriodMsHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
