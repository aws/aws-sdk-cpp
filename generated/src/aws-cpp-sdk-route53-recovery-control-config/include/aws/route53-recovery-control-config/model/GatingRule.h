/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A gating rule verifies that a gating routing control or set of gating routing
   * controls, evaluates as true, based on a rule configuration that you specify,
   * which allows a set of routing control state changes to complete.</p> <p>For
   * example, if you specify one gating routing control and you set the Type in the
   * rule configuration to OR, that indicates that you must set the gating routing
   * control to On for the rule to evaluate as true; that is, for the gating control
   * "switch" to be "On". When you do that, then you can update the routing control
   * states for the target routing controls that you specify in the gating
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/GatingRule">AWS
   * API Reference</a></p>
   */
  class GatingRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API GatingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const { return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    template<typename ControlPanelArnT = Aws::String>
    void SetControlPanelArn(ControlPanelArnT&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::forward<ControlPanelArnT>(value); }
    template<typename ControlPanelArnT = Aws::String>
    GatingRule& WithControlPanelArn(ControlPanelArnT&& value) { SetControlPanelArn(std::forward<ControlPanelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of gating routing control Amazon Resource Names (ARNs). For a simple
     * "on/off" switch, specify the ARN for one routing control. The gating routing
     * controls are evaluated by the rule configuration that you specify to determine
     * if the target routing control states can be changed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatingControls() const { return m_gatingControls; }
    inline bool GatingControlsHasBeenSet() const { return m_gatingControlsHasBeenSet; }
    template<typename GatingControlsT = Aws::Vector<Aws::String>>
    void SetGatingControls(GatingControlsT&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = std::forward<GatingControlsT>(value); }
    template<typename GatingControlsT = Aws::Vector<Aws::String>>
    GatingRule& WithGatingControls(GatingControlsT&& value) { SetGatingControls(std::forward<GatingControlsT>(value)); return *this;}
    template<typename GatingControlsT = Aws::String>
    GatingRule& AddGatingControls(GatingControlsT&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.emplace_back(std::forward<GatingControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the gating rule. You can use any non-white space character in
     * the name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GatingRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that you set for gating routing controls that designate how many
     * of the routing control states must be ON to allow you to update target routing
     * control states.</p>
     */
    inline const RuleConfig& GetRuleConfig() const { return m_ruleConfig; }
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }
    template<typename RuleConfigT = RuleConfig>
    void SetRuleConfig(RuleConfigT&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::forward<RuleConfigT>(value); }
    template<typename RuleConfigT = RuleConfig>
    GatingRule& WithRuleConfig(RuleConfigT&& value) { SetRuleConfig(std::forward<RuleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gating rule.</p>
     */
    inline const Aws::String& GetSafetyRuleArn() const { return m_safetyRuleArn; }
    inline bool SafetyRuleArnHasBeenSet() const { return m_safetyRuleArnHasBeenSet; }
    template<typename SafetyRuleArnT = Aws::String>
    void SetSafetyRuleArn(SafetyRuleArnT&& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = std::forward<SafetyRuleArnT>(value); }
    template<typename SafetyRuleArnT = Aws::String>
    GatingRule& WithSafetyRuleArn(SafetyRuleArnT&& value) { SetSafetyRuleArn(std::forward<SafetyRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of a gating rule. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline GatingRule& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of target routing control Amazon Resource Names (ARNs) for which the
     * states can only be updated if the rule configuration that you specify evaluates
     * to true for the gating routing control. As a simple example, if you have a
     * single gating control, it acts as an overall "on/off" switch for a set of target
     * routing controls. You can use this to manually override automated failover, for
     * example.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetControls() const { return m_targetControls; }
    inline bool TargetControlsHasBeenSet() const { return m_targetControlsHasBeenSet; }
    template<typename TargetControlsT = Aws::Vector<Aws::String>>
    void SetTargetControls(TargetControlsT&& value) { m_targetControlsHasBeenSet = true; m_targetControls = std::forward<TargetControlsT>(value); }
    template<typename TargetControlsT = Aws::Vector<Aws::String>>
    GatingRule& WithTargetControls(TargetControlsT&& value) { SetTargetControls(std::forward<TargetControlsT>(value)); return *this;}
    template<typename TargetControlsT = Aws::String>
    GatingRule& AddTargetControls(TargetControlsT&& value) { m_targetControlsHasBeenSet = true; m_targetControls.emplace_back(std::forward<TargetControlsT>(value)); return *this; }
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
    inline GatingRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the gating rule owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    GatingRule& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatingControls;
    bool m_gatingControlsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleConfig m_ruleConfig;
    bool m_ruleConfigHasBeenSet = false;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetControls;
    bool m_targetControlsHasBeenSet = false;

    int m_waitPeriodMs{0};
    bool m_waitPeriodMsHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
