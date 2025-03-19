/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/route53-recovery-control-config/model/AssertionRuleUpdate.h>
#include <aws/route53-recovery-control-config/model/GatingRuleUpdate.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>A rule that you add to Application Recovery Controller to ensure that
   * recovery actions don't accidentally impair your application's
   * availability.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateSafetyRuleRequest">AWS
   * API Reference</a></p>
   */
  class UpdateSafetyRuleRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateSafetyRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSafetyRule"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The assertion rule to update.</p>
     */
    inline const AssertionRuleUpdate& GetAssertionRuleUpdate() const { return m_assertionRuleUpdate; }
    inline bool AssertionRuleUpdateHasBeenSet() const { return m_assertionRuleUpdateHasBeenSet; }
    template<typename AssertionRuleUpdateT = AssertionRuleUpdate>
    void SetAssertionRuleUpdate(AssertionRuleUpdateT&& value) { m_assertionRuleUpdateHasBeenSet = true; m_assertionRuleUpdate = std::forward<AssertionRuleUpdateT>(value); }
    template<typename AssertionRuleUpdateT = AssertionRuleUpdate>
    UpdateSafetyRuleRequest& WithAssertionRuleUpdate(AssertionRuleUpdateT&& value) { SetAssertionRuleUpdate(std::forward<AssertionRuleUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gating rule to update.</p>
     */
    inline const GatingRuleUpdate& GetGatingRuleUpdate() const { return m_gatingRuleUpdate; }
    inline bool GatingRuleUpdateHasBeenSet() const { return m_gatingRuleUpdateHasBeenSet; }
    template<typename GatingRuleUpdateT = GatingRuleUpdate>
    void SetGatingRuleUpdate(GatingRuleUpdateT&& value) { m_gatingRuleUpdateHasBeenSet = true; m_gatingRuleUpdate = std::forward<GatingRuleUpdateT>(value); }
    template<typename GatingRuleUpdateT = GatingRuleUpdate>
    UpdateSafetyRuleRequest& WithGatingRuleUpdate(GatingRuleUpdateT&& value) { SetGatingRuleUpdate(std::forward<GatingRuleUpdateT>(value)); return *this;}
    ///@}
  private:

    AssertionRuleUpdate m_assertionRuleUpdate;
    bool m_assertionRuleUpdateHasBeenSet = false;

    GatingRuleUpdate m_gatingRuleUpdate;
    bool m_gatingRuleUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
