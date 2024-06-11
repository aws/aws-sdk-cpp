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
    AWS_MANAGEDBLOCKCHAIN_API VoteSummary();
    AWS_MANAGEDBLOCKCHAIN_API VoteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API VoteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The vote value, either <code>YES</code> or <code>NO</code>. </p>
     */
    inline const VoteValue& GetVote() const{ return m_vote; }
    inline bool VoteHasBeenSet() const { return m_voteHasBeenSet; }
    inline void SetVote(const VoteValue& value) { m_voteHasBeenSet = true; m_vote = value; }
    inline void SetVote(VoteValue&& value) { m_voteHasBeenSet = true; m_vote = std::move(value); }
    inline VoteSummary& WithVote(const VoteValue& value) { SetVote(value); return *this;}
    inline VoteSummary& WithVote(VoteValue&& value) { SetVote(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the member that cast the vote. </p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }
    inline VoteSummary& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}
    inline VoteSummary& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}
    inline VoteSummary& WithMemberName(const char* value) { SetMemberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the member that cast the vote. </p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }
    inline VoteSummary& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}
    inline VoteSummary& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}
    inline VoteSummary& WithMemberId(const char* value) { SetMemberId(value); return *this;}
    ///@}
  private:

    VoteValue m_vote;
    bool m_voteHasBeenSet = false;

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
