/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNamespaceRequest::CreateNamespaceRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_identityStore(IdentityStore::NOT_SET),
    m_identityStoreHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_identityStoreHasBeenSet)
  {
   payload.WithString("IdentityStore", IdentityStoreMapper::GetNameForIdentityStore(m_identityStore));
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




