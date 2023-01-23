/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CreateSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSiteRequest::CreateSiteRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_operatingAddressHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_rackPhysicalPropertiesHasBeenSet(false)
{
}

Aws::String CreateSiteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_operatingAddressHasBeenSet)
  {
   payload.WithObject("OperatingAddress", m_operatingAddress.Jsonize());

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithObject("ShippingAddress", m_shippingAddress.Jsonize());

  }

  if(m_rackPhysicalPropertiesHasBeenSet)
  {
   payload.WithObject("RackPhysicalProperties", m_rackPhysicalProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




