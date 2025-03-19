/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   */
  class DeleteSafetyRuleRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DeleteSafetyRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSafetyRule"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the safety rule.</p>
     */
    inline const Aws::String& GetSafetyRuleArn() const { return m_safetyRuleArn; }
    inline bool SafetyRuleArnHasBeenSet() const { return m_safetyRuleArnHasBeenSet; }
    template<typename SafetyRuleArnT = Aws::String>
    void SetSafetyRuleArn(SafetyRuleArnT&& value) { m_safetyRuleArnHasBeenSet = true; m_safetyRuleArn = std::forward<SafetyRuleArnT>(value); }
    template<typename SafetyRuleArnT = Aws::String>
    DeleteSafetyRuleRequest& WithSafetyRuleArn(SafetyRuleArnT&& value) { SetSafetyRuleArn(std::forward<SafetyRuleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_safetyRuleArn;
    bool m_safetyRuleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
