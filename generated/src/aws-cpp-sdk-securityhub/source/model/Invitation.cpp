/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Invitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Invitation::Invitation() : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_memberStatusHasBeenSet(false)
{
}

Invitation::Invitation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_invitationIdHasBeenSet(false),
    m_invitedAtHasBeenSet(false),
    m_memberStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Invitation& Invitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitationId"))
  {
    m_invitationId = jsonValue.GetString("InvitationId");

    m_invitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitedAt"))
  {
    m_invitedAt = jsonValue.GetString("InvitedAt");

    m_invitedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberStatus"))
  {
    m_memberStatus = jsonValue.GetString("MemberStatus");

    m_memberStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Invitation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  if(m_invitedAtHasBeenSet)
  {
   payload.WithString("InvitedAt", m_invitedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_memberStatusHasBeenSet)
  {
   payload.WithString("MemberStatus", m_memberStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
