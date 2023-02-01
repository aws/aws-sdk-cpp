/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ProposalActions.h>
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

ProposalActions::ProposalActions() : 
    m_invitationsHasBeenSet(false),
    m_removalsHasBeenSet(false)
{
}

ProposalActions::ProposalActions(JsonView jsonValue) : 
    m_invitationsHasBeenSet(false),
    m_removalsHasBeenSet(false)
{
  *this = jsonValue;
}

ProposalActions& ProposalActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Invitations"))
  {
    Aws::Utils::Array<JsonView> invitationsJsonList = jsonValue.GetArray("Invitations");
    for(unsigned invitationsIndex = 0; invitationsIndex < invitationsJsonList.GetLength(); ++invitationsIndex)
    {
      m_invitations.push_back(invitationsJsonList[invitationsIndex].AsObject());
    }
    m_invitationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Removals"))
  {
    Aws::Utils::Array<JsonView> removalsJsonList = jsonValue.GetArray("Removals");
    for(unsigned removalsIndex = 0; removalsIndex < removalsJsonList.GetLength(); ++removalsIndex)
    {
      m_removals.push_back(removalsJsonList[removalsIndex].AsObject());
    }
    m_removalsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProposalActions::Jsonize() const
{
  JsonValue payload;

  if(m_invitationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invitationsJsonList(m_invitations.size());
   for(unsigned invitationsIndex = 0; invitationsIndex < invitationsJsonList.GetLength(); ++invitationsIndex)
   {
     invitationsJsonList[invitationsIndex].AsObject(m_invitations[invitationsIndex].Jsonize());
   }
   payload.WithArray("Invitations", std::move(invitationsJsonList));

  }

  if(m_removalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removalsJsonList(m_removals.size());
   for(unsigned removalsIndex = 0; removalsIndex < removalsJsonList.GetLength(); ++removalsIndex)
   {
     removalsJsonList[removalsIndex].AsObject(m_removals[removalsIndex].Jsonize());
   }
   payload.WithArray("Removals", std::move(removalsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
