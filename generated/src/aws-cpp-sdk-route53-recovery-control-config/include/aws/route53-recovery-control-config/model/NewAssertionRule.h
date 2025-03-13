/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A new assertion rule for a control panel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/NewAssertionRule">AWS
   * API Reference</a></p>
   */
  class NewAssertionRule
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewAssertionRule() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewAssertionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API NewAssertionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    NewAssertionRule& WithAssertedControls(AssertedControlsT&& value) { SetAssertedControls(std::forward<AssertedControlsT>(value)); return *this;}
    template<typename AssertedControlsT = Aws::String>
    NewAssertionRule& AddAssertedControls(AssertedControlsT&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls.emplace_back(std::forward<AssertedControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const { return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    template<typename ControlPanelArnT = Aws::String>
    void SetControlPanelArn(ControlPanelArnT&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::forward<ControlPanelArnT>(value); }
    template<typename ControlPanelArnT = Aws::String>
    NewAssertionRule& WithControlPanelArn(ControlPanelArnT&& value) { SetControlPanelArn(std::forward<ControlPanelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assertion rule. You can use any non-white space character in
     * the name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NewAssertionRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that you set for specific assertion controls (routing controls)
     * that designate how many control states must be ON as the result of a
     * transaction. For example, if you have three assertion controls, you might
     * specify ATLEAST 2 for your rule configuration. This means that at least two
     * assertion controls must be ON, so that at least two Amazon Web Services Regions
     * have traffic flowing to them.</p>
     */
    inline const RuleConfig& GetRuleConfig() const { return m_ruleConfig; }
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }
    template<typename RuleConfigT = RuleConfig>
    void SetRuleConfig(RuleConfigT&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::forward<RuleConfigT>(value); }
    template<typename RuleConfigT = RuleConfig>
    NewAssertionRule& WithRuleConfig(RuleConfigT&& value) { SetRuleConfig(std::forward<RuleConfigT>(value)); return *this;}
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
    inline NewAssertionRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}
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

    int m_waitPeriodMs{0};
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
