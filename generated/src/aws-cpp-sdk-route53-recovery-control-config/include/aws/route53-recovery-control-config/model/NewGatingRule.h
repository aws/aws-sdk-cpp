/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/RuleConfig.h>
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
   * <p>A new gating rule for a control panel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/NewGatingRule">AWS
   * API Reference</a></p>
   */
  class NewGatingRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewGatingRule() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewGatingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewGatingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    NewGatingRule& WithControlPanelArn(ControlPanelArnT&& value) { SetControlPanelArn(std::forward<ControlPanelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gating controls for the new gating rule. That is, routing controls that
     * are evaluated by the rule configuration that you specify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatingControls() const { return m_gatingControls; }
    inline bool GatingControlsHasBeenSet() const { return m_gatingControlsHasBeenSet; }
    template<typename GatingControlsT = Aws::Vector<Aws::String>>
    void SetGatingControls(GatingControlsT&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls = std::forward<GatingControlsT>(value); }
    template<typename GatingControlsT = Aws::Vector<Aws::String>>
    NewGatingRule& WithGatingControls(GatingControlsT&& value) { SetGatingControls(std::forward<GatingControlsT>(value)); return *this;}
    template<typename GatingControlsT = Aws::String>
    NewGatingRule& AddGatingControls(GatingControlsT&& value) { m_gatingControlsHasBeenSet = true; m_gatingControls.emplace_back(std::forward<GatingControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the new gating rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NewGatingRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that you set for specific gating controls (routing controls)
     * that designate how many control states must be ON to allow you to change (set or
     * unset) the target control states.</p>
     */
    inline const RuleConfig& GetRuleConfig() const { return m_ruleConfig; }
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }
    template<typename RuleConfigT = RuleConfig>
    void SetRuleConfig(RuleConfigT&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::forward<RuleConfigT>(value); }
    template<typename RuleConfigT = RuleConfig>
    NewGatingRule& WithRuleConfig(RuleConfigT&& value) { SetRuleConfig(std::forward<RuleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Routing controls that can only be set or unset if the specified RuleConfig
     * evaluates to true for the specified GatingControls. For example, say you have
     * three gating controls, one for each of three Amazon Web Services Regions. Now
     * you specify ATLEAST 2 as your RuleConfig. With these settings, you can only
     * change (set or unset) the routing controls that you have specified as
     * TargetControls if that rule evaluates to true.</p> <p>In other words, your
     * ability to change the routing controls that you have specified as TargetControls
     * is gated by the rule that you set for the routing controls in
     * GatingControls.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetControls() const { return m_targetControls; }
    inline bool TargetControlsHasBeenSet() const { return m_targetControlsHasBeenSet; }
    template<typename TargetControlsT = Aws::Vector<Aws::String>>
    void SetTargetControls(TargetControlsT&& value) { m_targetControlsHasBeenSet = true; m_targetControls = std::forward<TargetControlsT>(value); }
    template<typename TargetControlsT = Aws::Vector<Aws::String>>
    NewGatingRule& WithTargetControls(TargetControlsT&& value) { SetTargetControls(std::forward<TargetControlsT>(value)); return *this;}
    template<typename TargetControlsT = Aws::String>
    NewGatingRule& AddTargetControls(TargetControlsT&& value) { m_targetControlsHasBeenSet = true; m_targetControls.emplace_back(std::forward<TargetControlsT>(value)); return *this; }
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
    inline NewGatingRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}
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

    Aws::Vector<Aws::String> m_targetControls;
    bool m_targetControlsHasBeenSet = false;

    int m_waitPeriodMs{0};
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
