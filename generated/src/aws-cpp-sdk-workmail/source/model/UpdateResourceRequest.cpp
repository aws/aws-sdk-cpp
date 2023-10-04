/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/UpdateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceRequest::UpdateResourceRequest() : 
    m_organizationIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bookingOptionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_hiddenFromGlobalAddressList(false),
    m_hiddenFromGlobalAddressListHasBeenSet(false)
{
}

Aws::String UpdateResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_bookingOptionsHasBeenSet)
  {
   payload.WithObject("BookingOptions", m_bookingOptions.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ResourceTypeMapper::GetNameForResourceType(m_type));
  }

  if(m_hiddenFromGlobalAddressListHasBeenSet)
  {
   payload.WithBool("HiddenFromGlobalAddressList", m_hiddenFromGlobalAddressList);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.UpdateResource"));
  return headers;

}




