/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   */
  class UpdateRoutingControlStatesRequest : public Route53RecoveryClusterRequest
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingControlStates"; }

    AWS_ROUTE53RECOVERYCLUSTER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline const Aws::Vector<UpdateRoutingControlStateEntry>& GetUpdateRoutingControlStateEntries() const { return m_updateRoutingControlStateEntries; }
    inline bool UpdateRoutingControlStateEntriesHasBeenSet() const { return m_updateRoutingControlStateEntriesHasBeenSet; }
    template<typename UpdateRoutingControlStateEntriesT = Aws::Vector<UpdateRoutingControlStateEntry>>
    void SetUpdateRoutingControlStateEntries(UpdateRoutingControlStateEntriesT&& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries = std::forward<UpdateRoutingControlStateEntriesT>(value); }
    template<typename UpdateRoutingControlStateEntriesT = Aws::Vector<UpdateRoutingControlStateEntry>>
    UpdateRoutingControlStatesRequest& WithUpdateRoutingControlStateEntries(UpdateRoutingControlStateEntriesT&& value) { SetUpdateRoutingControlStateEntries(std::forward<UpdateRoutingControlStateEntriesT>(value)); return *this;}
    template<typename UpdateRoutingControlStateEntriesT = UpdateRoutingControlStateEntry>
    UpdateRoutingControlStatesRequest& AddUpdateRoutingControlStateEntries(UpdateRoutingControlStateEntriesT&& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries.emplace_back(std::forward<UpdateRoutingControlStateEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSafetyRulesToOverride() const { return m_safetyRulesToOverride; }
    inline bool SafetyRulesToOverrideHasBeenSet() const { return m_safetyRulesToOverrideHasBeenSet; }
    template<typename SafetyRulesToOverrideT = Aws::Vector<Aws::String>>
    void SetSafetyRulesToOverride(SafetyRulesToOverrideT&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride = std::forward<SafetyRulesToOverrideT>(value); }
    template<typename SafetyRulesToOverrideT = Aws::Vector<Aws::String>>
    UpdateRoutingControlStatesRequest& WithSafetyRulesToOverride(SafetyRulesToOverrideT&& value) { SetSafetyRulesToOverride(std::forward<SafetyRulesToOverrideT>(value)); return *this;}
    template<typename SafetyRulesToOverrideT = Aws::String>
    UpdateRoutingControlStatesRequest& AddSafetyRulesToOverride(SafetyRulesToOverrideT&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.emplace_back(std::forward<SafetyRulesToOverrideT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UpdateRoutingControlStateEntry> m_updateRoutingControlStateEntries;
    bool m_updateRoutingControlStateEntriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_safetyRulesToOverride;
    bool m_safetyRulesToOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
