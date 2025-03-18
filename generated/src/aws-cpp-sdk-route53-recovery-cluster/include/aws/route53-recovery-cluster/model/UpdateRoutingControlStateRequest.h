/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   */
  class UpdateRoutingControlStateRequest : public Route53RecoveryClusterRequest
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingControlState"; }

    AWS_ROUTE53RECOVERYCLUSTER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the routing control that you want to
     * update the state for.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    UpdateRoutingControlStateRequest& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the routing control. You can set the value to ON or OFF.</p>
     */
    inline RoutingControlState GetRoutingControlState() const { return m_routingControlState; }
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }
    inline void SetRoutingControlState(RoutingControlState value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }
    inline UpdateRoutingControlStateRequest& WithRoutingControlState(RoutingControlState value) { SetRoutingControlState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating the state of a routing control. You can override
     * one safety rule or multiple safety rules by including one or more ARNs,
     * separated by commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSafetyRulesToOverride() const { return m_safetyRulesToOverride; }
    inline bool SafetyRulesToOverrideHasBeenSet() const { return m_safetyRulesToOverrideHasBeenSet; }
    template<typename SafetyRulesToOverrideT = Aws::Vector<Aws::String>>
    void SetSafetyRulesToOverride(SafetyRulesToOverrideT&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride = std::forward<SafetyRulesToOverrideT>(value); }
    template<typename SafetyRulesToOverrideT = Aws::Vector<Aws::String>>
    UpdateRoutingControlStateRequest& WithSafetyRulesToOverride(SafetyRulesToOverrideT&& value) { SetSafetyRulesToOverride(std::forward<SafetyRulesToOverrideT>(value)); return *this;}
    template<typename SafetyRulesToOverrideT = Aws::String>
    UpdateRoutingControlStateRequest& AddSafetyRulesToOverride(SafetyRulesToOverrideT&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.emplace_back(std::forward<SafetyRulesToOverrideT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    RoutingControlState m_routingControlState{RoutingControlState::NOT_SET};
    bool m_routingControlStateHasBeenSet = false;

    Aws::Vector<Aws::String> m_safetyRulesToOverride;
    bool m_safetyRulesToOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
