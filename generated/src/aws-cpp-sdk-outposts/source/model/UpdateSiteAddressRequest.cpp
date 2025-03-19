/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/UpdateSiteAddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSiteAddressRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addressTypeHasBeenSet)
  {
   payload.WithString("AddressType", AddressTypeMapper::GetNameForAddressType(m_addressType));
  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

  }

  return payload.View().WriteReadable();
}




