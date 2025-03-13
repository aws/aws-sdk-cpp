/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/VoteValue.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p> Properties of an individual vote that a member cast for a proposal. </p>
   * <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VoteSummary">AWS
   * API Reference</a></p>
   */
  class VoteSummary
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API VoteSummary() = default;
    AWS_MANAGEDBLOCKCHAIN_API VoteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API VoteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline VoteValue GetVote() const { return m_vote; }
    inline bool VoteHasBeenSet() const { return m_voteHasBeenSet; }
    inline void SetVote(VoteValue value) { m_voteHasBeenSet = true; m_vote = value; }
    inline VoteSummary& WithVote(VoteValue value) { SetVote(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline const Aws::String& GetMemberName() const { return m_memberName; }
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }
    template<typename MemberNameT = Aws::String>
    void SetMemberName(MemberNameT&& value) { m_memberNameHasBeenSet = true; m_memberName = std::forward<MemberNameT>(value); }
    template<typename MemberNameT = Aws::String>
    VoteSummary& WithMemberName(MemberNameT&& value) { SetMemberName(std::forward<MemberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline const Aws::String& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = Aws::String>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = Aws::String>
    VoteSummary& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}
  private:

    VoteValue m_vote{VoteValue::NOT_SET};
    bool m_voteHasBeenSet = false;

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
