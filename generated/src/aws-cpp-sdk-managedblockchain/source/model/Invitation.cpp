/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/Invitation.h>
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

Invitation::Invitation() : 
    m_invitationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_status(InvitationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_networkSummaryHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

Invitation::Invitation(JsonView jsonValue) : 
    m_invitationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_status(InvitationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_networkSummaryHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

Invitation& Invitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvitationId"))
  {
    m_invitationId = jsonValue.GetString("InvitationId");

    m_invitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InvitationStatusMapper::GetInvitationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSummary"))
  {
    m_networkSummary = jsonValue.GetObject("NetworkSummary");

    m_networkSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue Invitation::Jsonize() const
{
  JsonValue payload;

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InvitationStatusMapper::GetNameForInvitationStatus(m_status));
  }

  if(m_networkSummaryHasBeenSet)
  {
   payload.WithObject("NetworkSummary", m_networkSummary.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
