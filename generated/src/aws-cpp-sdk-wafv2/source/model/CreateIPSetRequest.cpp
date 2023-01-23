/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CreateIPSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIPSetRequest::CreateIPSetRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iPAddressVersion(IPAddressVersion::NOT_SET),
    m_iPAddressVersionHasBeenSet(false),
    m_addressesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateIPSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_iPAddressVersionHasBeenSet)
  {
   payload.WithString("IPAddressVersion", IPAddressVersionMapper::GetNameForIPAddressVersion(m_iPAddressVersion));
  }

  if(m_addressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressesJsonList(m_addresses.size());
   for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
   {
     addressesJsonList[addressesIndex].AsString(m_addresses[addressesIndex]);
   }
   payload.WithArray("Addresses", std::move(addressesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIPSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.CreateIPSet"));
  return headers;

}




