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
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStateRequest();

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
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = value; }
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::move(value); }
    inline void SetRoutingControlArn(const char* value) { m_routingControlArnHasBeenSet = true; m_routingControlArn.assign(value); }
    inline UpdateRoutingControlStateRequest& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}
    inline UpdateRoutingControlStateRequest& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}
    inline UpdateRoutingControlStateRequest& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the routing control. You can set the value to ON or OFF.</p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = std::move(value); }
    inline UpdateRoutingControlStateRequest& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}
    inline UpdateRoutingControlStateRequest& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSafetyRulesToOverride() const{ return m_safetyRulesToOverride; }
    inline bool SafetyRulesToOverrideHasBeenSet() const { return m_safetyRulesToOverrideHasBeenSet; }
    inline void SetSafetyRulesToOverride(const Aws::Vector<Aws::String>& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride = value; }
    inline void SetSafetyRulesToOverride(Aws::Vector<Aws::String>&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride = std::move(value); }
    inline UpdateRoutingControlStateRequest& WithSafetyRulesToOverride(const Aws::Vector<Aws::String>& value) { SetSafetyRulesToOverride(value); return *this;}
    inline UpdateRoutingControlStateRequest& WithSafetyRulesToOverride(Aws::Vector<Aws::String>&& value) { SetSafetyRulesToOverride(std::move(value)); return *this;}
    inline UpdateRoutingControlStateRequest& AddSafetyRulesToOverride(const Aws::String& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.push_back(value); return *this; }
    inline UpdateRoutingControlStateRequest& AddSafetyRulesToOverride(Aws::String&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.push_back(std::move(value)); return *this; }
    inline UpdateRoutingControlStateRequest& AddSafetyRulesToOverride(const char* value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    RoutingControlState m_routingControlState;
    bool m_routingControlStateHasBeenSet = false;

    Aws::Vector<Aws::String> m_safetyRulesToOverride;
    bool m_safetyRulesToOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
