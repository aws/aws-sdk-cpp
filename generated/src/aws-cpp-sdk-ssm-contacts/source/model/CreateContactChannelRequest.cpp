/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/CreateContactChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContactChannelRequest::CreateContactChannelRequest() : 
    m_contactIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_deliveryAddressHasBeenSet(false),
    m_deferActivation(false),
    m_deferActivationHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CreateContactChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  if(m_deliveryAddressHasBeenSet)
  {
   payload.WithObject("DeliveryAddress", m_deliveryAddress.Jsonize());

  }

  if(m_deferActivationHasBeenSet)
  {
   payload.WithBool("DeferActivation", m_deferActivation);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContactChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.CreateContactChannel"));
  return headers;

}




