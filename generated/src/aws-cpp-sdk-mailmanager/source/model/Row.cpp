/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/Row.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

Row::Row(JsonView jsonValue)
{
  *this = jsonValue;
}

Row& Row::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArchivedMessageId"))
  {
    m_archivedMessageId = jsonValue.GetString("ArchivedMessageId");
    m_archivedMessageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceivedTimestamp"))
  {
    m_receivedTimestamp = jsonValue.GetDouble("ReceivedTimestamp");
    m_receivedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetString("Date");
    m_dateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("To"))
  {
    m_to = jsonValue.GetString("To");
    m_toHasBeenSet = true;
  }
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");
    m_fromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Cc"))
  {
    m_cc = jsonValue.GetString("Cc");
    m_ccHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");
    m_messageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasAttachments"))
  {
    m_hasAttachments = jsonValue.GetBool("HasAttachments");
    m_hasAttachmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceivedHeaders"))
  {
    Aws::Utils::Array<JsonView> receivedHeadersJsonList = jsonValue.GetArray("ReceivedHeaders");
    for(unsigned receivedHeadersIndex = 0; receivedHeadersIndex < receivedHeadersJsonList.GetLength(); ++receivedHeadersIndex)
    {
      m_receivedHeaders.push_back(receivedHeadersJsonList[receivedHeadersIndex].AsString());
    }
    m_receivedHeadersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InReplyTo"))
  {
    m_inReplyTo = jsonValue.GetString("InReplyTo");
    m_inReplyToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("XMailer"))
  {
    m_xMailer = jsonValue.GetString("XMailer");
    m_xMailerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("XOriginalMailer"))
  {
    m_xOriginalMailer = jsonValue.GetString("XOriginalMailer");
    m_xOriginalMailerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("XPriority"))
  {
    m_xPriority = jsonValue.GetString("XPriority");
    m_xPriorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngressPointId"))
  {
    m_ingressPointId = jsonValue.GetString("IngressPointId");
    m_ingressPointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderHostname"))
  {
    m_senderHostname = jsonValue.GetString("SenderHostname");
    m_senderHostnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderIpAddress"))
  {
    m_senderIpAddress = jsonValue.GetString("SenderIpAddress");
    m_senderIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Envelope"))
  {
    m_envelope = jsonValue.GetObject("Envelope");
    m_envelopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Row::Jsonize() const
{
  JsonValue payload;

  if(m_archivedMessageIdHasBeenSet)
  {
   payload.WithString("ArchivedMessageId", m_archivedMessageId);

  }

  if(m_receivedTimestampHasBeenSet)
  {
   payload.WithDouble("ReceivedTimestamp", m_receivedTimestamp.SecondsWithMSPrecision());
  }

  if(m_dateHasBeenSet)
  {
   payload.WithString("Date", m_date);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("To", m_to);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_ccHasBeenSet)
  {
   payload.WithString("Cc", m_cc);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_hasAttachmentsHasBeenSet)
  {
   payload.WithBool("HasAttachments", m_hasAttachments);

  }

  if(m_receivedHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> receivedHeadersJsonList(m_receivedHeaders.size());
   for(unsigned receivedHeadersIndex = 0; receivedHeadersIndex < receivedHeadersJsonList.GetLength(); ++receivedHeadersIndex)
   {
     receivedHeadersJsonList[receivedHeadersIndex].AsString(m_receivedHeaders[receivedHeadersIndex]);
   }
   payload.WithArray("ReceivedHeaders", std::move(receivedHeadersJsonList));

  }

  if(m_inReplyToHasBeenSet)
  {
   payload.WithString("InReplyTo", m_inReplyTo);

  }

  if(m_xMailerHasBeenSet)
  {
   payload.WithString("XMailer", m_xMailer);

  }

  if(m_xOriginalMailerHasBeenSet)
  {
   payload.WithString("XOriginalMailer", m_xOriginalMailer);

  }

  if(m_xPriorityHasBeenSet)
  {
   payload.WithString("XPriority", m_xPriority);

  }

  if(m_ingressPointIdHasBeenSet)
  {
   payload.WithString("IngressPointId", m_ingressPointId);

  }

  if(m_senderHostnameHasBeenSet)
  {
   payload.WithString("SenderHostname", m_senderHostname);

  }

  if(m_senderIpAddressHasBeenSet)
  {
   payload.WithString("SenderIpAddress", m_senderIpAddress);

  }

  if(m_envelopeHasBeenSet)
  {
   payload.WithObject("Envelope", m_envelope.Jsonize());

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
