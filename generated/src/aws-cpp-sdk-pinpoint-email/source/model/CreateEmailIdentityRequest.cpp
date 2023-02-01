/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/CreateEmailIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEmailIdentityRequest::CreateEmailIdentityRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEmailIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailIdentityHasBeenSet)
  {
   payload.WithString("EmailIdentity", m_emailIdentity);

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




