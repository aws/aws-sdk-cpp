/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/CreateAdapterVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAdapterVersionRequest::CreateAdapterVersionRequest() : 
    m_adapterIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_datasetConfigHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAdapterVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_datasetConfigHasBeenSet)
  {
   payload.WithObject("DatasetConfig", m_datasetConfig.Jsonize());

  }

  if(m_kMSKeyIdHasBeenSet)
  {
   payload.WithString("KMSKeyId", m_kMSKeyId);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAdapterVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.CreateAdapterVersion"));
  return headers;

}




