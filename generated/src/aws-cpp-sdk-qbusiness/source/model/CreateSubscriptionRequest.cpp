/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriptionRequest::CreateSubscriptionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_type(SubscriptionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SubscriptionTypeMapper::GetNameForSubscriptionType(m_type));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




