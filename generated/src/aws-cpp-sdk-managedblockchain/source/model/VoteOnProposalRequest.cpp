/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/VoteOnProposalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String VoteOnProposalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_voterMemberIdHasBeenSet)
  {
   payload.WithString("VoterMemberId", m_voterMemberId);

  }

  if(m_voteHasBeenSet)
  {
   payload.WithString("Vote", VoteValueMapper::GetNameForVoteValue(m_vote));
  }

  return payload.View().WriteReadable();
}




