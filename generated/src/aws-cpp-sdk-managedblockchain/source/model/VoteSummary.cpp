/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/VoteSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

VoteSummary::VoteSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

VoteSummary& VoteSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Vote"))
  {
    m_vote = VoteValueMapper::GetVoteValueForName(jsonValue.GetString("Vote"));
    m_voteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemberName"))
  {
    m_memberName = jsonValue.GetString("MemberName");
    m_memberNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetString("MemberId");
    m_memberIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VoteSummary::Jsonize() const
{
  JsonValue payload;

  if(m_voteHasBeenSet)
  {
   payload.WithString("Vote", VoteValueMapper::GetNameForVoteValue(m_vote));
  }

  if(m_memberNameHasBeenSet)
  {
   payload.WithString("MemberName", m_memberName);

  }

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
