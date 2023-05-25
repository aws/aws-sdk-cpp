/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/ApprovalThresholdPolicy.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p> The voting rules for the network to decide if a proposal is accepted </p>
   * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VotingPolicy">AWS
   * API Reference</a></p>
   */
  class VotingPolicy
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API VotingPolicy();
    AWS_MANAGEDBLOCKCHAIN_API VotingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API VotingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline const ApprovalThresholdPolicy& GetApprovalThresholdPolicy() const{ return m_approvalThresholdPolicy; }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline bool ApprovalThresholdPolicyHasBeenSet() const { return m_approvalThresholdPolicyHasBeenSet; }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline void SetApprovalThresholdPolicy(const ApprovalThresholdPolicy& value) { m_approvalThresholdPolicyHasBeenSet = true; m_approvalThresholdPolicy = value; }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline void SetApprovalThresholdPolicy(ApprovalThresholdPolicy&& value) { m_approvalThresholdPolicyHasBeenSet = true; m_approvalThresholdPolicy = std::move(value); }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline VotingPolicy& WithApprovalThresholdPolicy(const ApprovalThresholdPolicy& value) { SetApprovalThresholdPolicy(value); return *this;}

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline VotingPolicy& WithApprovalThresholdPolicy(ApprovalThresholdPolicy&& value) { SetApprovalThresholdPolicy(std::move(value)); return *this;}

  private:

    ApprovalThresholdPolicy m_approvalThresholdPolicy;
    bool m_approvalThresholdPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
