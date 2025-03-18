﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RegisterMemberToAddressListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterMemberToAddressListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_addressListIdHasBeenSet)
  {
   payload.WithString("AddressListId", m_addressListId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterMemberToAddressListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.RegisterMemberToAddressList"));
  return headers;

}




