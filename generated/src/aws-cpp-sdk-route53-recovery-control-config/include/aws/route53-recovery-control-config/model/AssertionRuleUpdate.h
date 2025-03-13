/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An update to an assertion rule. You can update the name or the evaluation
   * period (wait period). If you don't specify one of the items to update, the item
   * is unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/AssertionRuleUpdate">AWS
   * API Reference</a></p>
   */
  class AssertionRuleUpdate
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRuleUpdate() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRuleUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API AssertionRuleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    AssertionRuleUpdate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    AssertionRuleUpdate& WithSafetyRuleArn(SafetyRuleArnT&& value) { SetSafetyRuleArn(std::forward<SafetyRuleArnT>(value)); return *this;}
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
    inline AssertionRuleUpdate& WithWaitPeriodMs(int value) { SetWaitPeriodMs(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;

    int m_waitPeriodMs{0};
    bool m_waitPeriodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
