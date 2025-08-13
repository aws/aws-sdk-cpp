/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/EngagementInvitationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

EngagementInvitationSummary::EngagementInvitationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EngagementInvitationSummary& EngagementInvitationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PayloadType"))
  {
    m_payloadType = EngagementInvitationPayloadTypeMapper::GetEngagementInvitationPayloadTypeForName(jsonValue.GetString("PayloadType"));
    m_payloadTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementId"))
  {
    m_engagementId = jsonValue.GetString("EngagementId");
    m_engagementIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementTitle"))
  {
    m_engagementTitle = jsonValue.GetString("EngagementTitle");
    m_engagementTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = InvitationStatusMapper::GetInvitationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvitationDate"))
  {
    m_invitationDate = jsonValue.GetString("InvitationDate");
    m_invitationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderAwsAccountId"))
  {
    m_senderAwsAccountId = jsonValue.GetString("SenderAwsAccountId");
    m_senderAwsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderCompanyName"))
  {
    m_senderCompanyName = jsonValue.GetString("SenderCompanyName");
    m_senderCompanyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Receiver"))
  {
    m_receiver = jsonValue.GetObject("Receiver");
    m_receiverHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantType"))
  {
    m_participantType = ParticipantTypeMapper::GetParticipantTypeForName(jsonValue.GetString("ParticipantType"));
    m_participantTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementInvitationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_payloadTypeHasBeenSet)
  {
   payload.WithString("PayloadType", EngagementInvitationPayloadTypeMapper::GetNameForEngagementInvitationPayloadType(m_payloadType));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_engagementIdHasBeenSet)
  {
   payload.WithString("EngagementId", m_engagementId);

  }

  if(m_engagementTitleHasBeenSet)
  {
   payload.WithString("EngagementTitle", m_engagementTitle);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InvitationStatusMapper::GetNameForInvitationStatus(m_status));
  }

  if(m_invitationDateHasBeenSet)
  {
   payload.WithString("InvitationDate", m_invitationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_senderAwsAccountIdHasBeenSet)
  {
   payload.WithString("SenderAwsAccountId", m_senderAwsAccountId);

  }

  if(m_senderCompanyNameHasBeenSet)
  {
   payload.WithString("SenderCompanyName", m_senderCompanyName);

  }

  if(m_receiverHasBeenSet)
  {
   payload.WithObject("Receiver", m_receiver.Jsonize());

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_participantTypeHasBeenSet)
  {
   payload.WithString("ParticipantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
