/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateTrustStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrustStoreRequest::UpdateTrustStoreRequest() : 
    m_certificatesToAddHasBeenSet(false),
    m_certificatesToDeleteHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_trustStoreArnHasBeenSet(false)
{
}

Aws::String UpdateTrustStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificatesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificatesToAddJsonList(m_certificatesToAdd.size());
   for(unsigned certificatesToAddIndex = 0; certificatesToAddIndex < certificatesToAddJsonList.GetLength(); ++certificatesToAddIndex)
   {
     certificatesToAddJsonList[certificatesToAddIndex].AsString(HashingUtils::Base64Encode(m_certificatesToAdd[certificatesToAddIndex]));
   }
   payload.WithArray("certificatesToAdd", std::move(certificatesToAddJsonList));

  }

  if(m_certificatesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificatesToDeleteJsonList(m_certificatesToDelete.size());
   for(unsigned certificatesToDeleteIndex = 0; certificatesToDeleteIndex < certificatesToDeleteJsonList.GetLength(); ++certificatesToDeleteIndex)
   {
     certificatesToDeleteJsonList[certificatesToDeleteIndex].AsString(m_certificatesToDelete[certificatesToDeleteIndex]);
   }
   payload.WithArray("certificatesToDelete", std::move(certificatesToDeleteJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




