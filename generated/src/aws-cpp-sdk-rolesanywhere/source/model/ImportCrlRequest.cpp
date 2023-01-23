/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ImportCrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCrlRequest::ImportCrlRequest() : 
    m_crlDataHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trustAnchorArnHasBeenSet(false)
{
}

Aws::String ImportCrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crlDataHasBeenSet)
  {
   payload.WithString("crlData", HashingUtils::Base64Encode(m_crlData));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_trustAnchorArnHasBeenSet)
  {
   payload.WithString("trustAnchorArn", m_trustAnchorArn);

  }

  return payload.View().WriteReadable();
}




