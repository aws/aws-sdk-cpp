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
    AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingControlStates"; }

    AWS_ROUTE53RECOVERYCLUSTER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline const Aws::Vector<UpdateRoutingControlStateEntry>& GetUpdateRoutingControlStateEntries() const{ return m_updateRoutingControlStateEntries; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline bool UpdateRoutingControlStateEntriesHasBeenSet() const { return m_updateRoutingControlStateEntriesHasBeenSet; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline void SetUpdateRoutingControlStateEntries(const Aws::Vector<UpdateRoutingControlStateEntry>& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries = value; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline void SetUpdateRoutingControlStateEntries(Aws::Vector<UpdateRoutingControlStateEntry>&& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries = std::move(value); }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& WithUpdateRoutingControlStateEntries(const Aws::Vector<UpdateRoutingControlStateEntry>& value) { SetUpdateRoutingControlStateEntries(value); return *this;}

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& WithUpdateRoutingControlStateEntries(Aws::Vector<UpdateRoutingControlStateEntry>&& value) { SetUpdateRoutingControlStateEntries(std::move(value)); return *this;}

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddUpdateRoutingControlStateEntries(const UpdateRoutingControlStateEntry& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries.push_back(value); return *this; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddUpdateRoutingControlStateEntries(UpdateRoutingControlStateEntry&& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSafetyRulesToOverride() const{ return m_safetyRulesToOverride; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline bool SafetyRulesToOverrideHasBeenSet() const { return m_safetyRulesToOverrideHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline void SetSafetyRulesToOverride(const Aws::Vector<Aws::String>& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline void SetSafetyRulesToOverride(Aws::Vector<Aws::String>&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline UpdateRoutingControlStatesRequest& WithSafetyRulesToOverride(const Aws::Vector<Aws::String>& value) { SetSafetyRulesToOverride(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline UpdateRoutingControlStatesRequest& WithSafetyRulesToOverride(Aws::Vector<Aws::String>&& value) { SetSafetyRulesToOverride(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddSafetyRulesToOverride(const Aws::String& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddSafetyRulesToOverride(Aws::String&& value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the safety rules that you want to
     * override when you're updating routing control states. You can override one
     * safety rule or multiple safety rules by including one or more ARNs, separated by
     * commas.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html">
     * Override safety rules to reroute traffic</a> in the Amazon Route 53 Application
     * Recovery Controller Developer Guide.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddSafetyRulesToOverride(const char* value) { m_safetyRulesToOverrideHasBeenSet = true; m_safetyRulesToOverride.push_back(value); return *this; }

  private:

    Aws::Vector<UpdateRoutingControlStateEntry> m_updateRoutingControlStateEntries;
    bool m_updateRoutingControlStateEntriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_safetyRulesToOverride;
    bool m_safetyRulesToOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
