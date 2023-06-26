/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/StartEngagementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartEngagementRequest::StartEngagementRequest() : 
    m_contactIdHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_publicSubjectHasBeenSet(false),
    m_publicContentHasBeenSet(false),
    m_incidentIdHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String StartEngagementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_senderHasBeenSet)
  {
   payload.WithString("Sender", m_sender);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_publicSubjectHasBeenSet)
  {
   payload.WithString("PublicSubject", m_publicSubject);

  }

  if(m_publicContentHasBeenSet)
  {
   payload.WithString("PublicContent", m_publicContent);

  }

  if(m_incidentIdHasBeenSet)
  {
   payload.WithString("IncidentId", m_incidentId);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartEngagementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.StartEngagement"));
  return headers;

}




