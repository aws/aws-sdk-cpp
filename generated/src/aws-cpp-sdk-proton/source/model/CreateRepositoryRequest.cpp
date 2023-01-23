/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateRepositoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRepositoryRequest::CreateRepositoryRequest() : 
    m_connectionArnHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(RepositoryProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRepositoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("connectionArn", m_connectionArn);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", RepositoryProviderMapper::GetNameForRepositoryProvider(m_provider));
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRepositoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateRepository"));
  return headers;

}




