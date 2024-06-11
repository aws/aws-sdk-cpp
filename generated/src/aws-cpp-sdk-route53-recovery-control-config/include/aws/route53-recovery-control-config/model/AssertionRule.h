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
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRule();
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
    inline const Aws::Vector<Aws::String>& GetAssertedControls() const{ return m_assertedControls; }
    inline bool AssertedControlsHasBeenSet() const { return m_assertedControlsHasBeenSet; }
    inline void SetAssertedControls(const Aws::Vector<Aws::String>& value) { m_assertedControlsHasBeenSet = true; m_assertedControls = value; }
    inline void SetAssertedControls(Aws::Vector<Aws::String>&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls = std::move(value); }
    inline AssertionRule& WithAssertedControls(const Aws::Vector<Aws::String>& value) { SetAssertedControls(value); return *this;}
    inline AssertionRule& WithAssertedControls(Aws::Vector<Aws::String>&& value) { SetAssertedControls(std::move(value)); return *this;}
    inline AssertionRule& AddAssertedControls(const Aws::String& value) { m_assertedControlsHasBeenSet = true; m_assertedControls.push_back(value); return *this; }
    inline AssertionRule& AddAssertedControls(Aws::String&& value) { m_assertedControlsHasBeenSet = true; m_assertedControls.push_back(std::move(value)); return *this; }
    inline AssertionRule& AddAssertedControls(const char* value) { m_assertedControlsHasBeenSet = true; m_assertedControls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const{ return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    inline void SetControlPanelArn(const Aws::String& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = value; }
    inline void SetControlPanelArn(Aws::String&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::move(value); }
    inline void SetControlPanelArn(const char* value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn.assign(value); }
    inline AssertionRule& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}
    inline AssertionRule& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}
    inline AssertionRule& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the assertion rule. You can use any non-white space character in the
     * name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssertionRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssertionRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssertionRule& WithName(const char* value) { SetName(value); return *this;}
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
    inline const RuleConfig& GetRuleConfig() const{ return m_ruleConfig; }
    inline bool RuleConfigHasBeenSet() const { return m_ruleConfigHasBeenSet; }
    inline void SetRuleConfig(const RuleConfig& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = value; }
    inline void SetRuleConfig(RuleConfig&& value) { m_ruleConfigHasBeenSet = true; m_ruleConfig = std::move(value); }
    inline AssertionRule& WithRuleConfig(const RuleConfig& value) { SetRuleConfig(value); return *this;}
    inline AssertionRule& WithRuleConfig(RuleConfig&& value) { SetRuleConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the assertion rule.</p>
     */
    inline const Aws::String& GetSafetyRuleArn() const{ return m_safetyRuleArn; }
    inline bool SafetyRuleArnHasBeenSet() const { return m_safetyRuleArnHasBeenSet; }
    inline void SetSafetyRuleArn(const Aws::String& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = value; }
    inline void SetSafetyRuleArn(Aws::String&& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = std::move(value); }
    inline void SetSafetyRuleArn(const char* value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn.assign(value); }
    inline AssertionRule& WithSafetyRuleArn(const Aws::String& value) { SetSafetyRuleArn(value); return *this;}
    inline AssertionRule& WithSafetyRuleArn(Aws::String&& value) { SetSafetyRuleArn(std::move(value)); return *this;}
    inline AssertionRule& WithSafetyRuleArn(const char* value) { SetSafetyRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of an assertion rule. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssertionRule& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline AssertionRule& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An evaluation period, in milliseconds (ms), during which any request against
     * the target routing controls will fail. This helps prevent "flapping" of state.
     * The wait period is 5000 ms by default, but you can choose a custom value.</p>
     */
    inline int GetWaitPeriodMs() const{ return m_waitPeriodMs; }
    inline bool WaitPeriodMsHasBeenSet() const { return m_waitPeriodMsHasBeenSet; }
    inline void SetWaitPeriodMs(int value) { m_waitPeriodMsHasBeenSet = true; m_waitPeriodMs = value; }
    inline AssertionRule& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the assertion rule owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline AssertionRule& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline AssertionRule& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline AssertionRule& WithOwner(const char* value) { SetOwner(value); return *this;}
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

    Status m_status;
    bool m_statusHasBeenSet = false;

    int m_waitPeriodMs;
    bool m_waitPeriodMsHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
