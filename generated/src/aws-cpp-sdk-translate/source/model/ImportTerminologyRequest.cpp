/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ImportTerminologyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportTerminologyRequest::ImportTerminologyRequest() : 
    m_nameHasBeenSet(false),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_mergeStrategyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_terminologyDataHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportTerminologyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_mergeStrategyHasBeenSet)
  {
   payload.WithString("MergeStrategy", MergeStrategyMapper::GetNameForMergeStrategy(m_mergeStrategy));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_terminologyDataHasBeenSet)
  {
   payload.WithObject("TerminologyData", m_terminologyData.Jsonize());

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithObject("EncryptionKey", m_encryptionKey.Jsonize());

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

Aws::Http::HeaderValueCollection ImportTerminologyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.ImportTerminology"));
  return headers;

}




