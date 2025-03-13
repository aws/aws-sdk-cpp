/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateSequenceStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSequenceStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sseConfigHasBeenSet)
  {
   payload.WithObject("sseConfig", m_sseConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_fallbackLocationHasBeenSet)
  {
   payload.WithString("fallbackLocation", m_fallbackLocation);

  }

  if(m_eTagAlgorithmFamilyHasBeenSet)
  {
   payload.WithString("eTagAlgorithmFamily", ETagAlgorithmFamilyMapper::GetNameForETagAlgorithmFamily(m_eTagAlgorithmFamily));
  }

  if(m_propagatedSetLevelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propagatedSetLevelTagsJsonList(m_propagatedSetLevelTags.size());
   for(unsigned propagatedSetLevelTagsIndex = 0; propagatedSetLevelTagsIndex < propagatedSetLevelTagsJsonList.GetLength(); ++propagatedSetLevelTagsIndex)
   {
     propagatedSetLevelTagsJsonList[propagatedSetLevelTagsIndex].AsString(m_propagatedSetLevelTags[propagatedSetLevelTagsIndex]);
   }
   payload.WithArray("propagatedSetLevelTags", std::move(propagatedSetLevelTagsJsonList));

  }

  if(m_s3AccessConfigHasBeenSet)
  {
   payload.WithObject("s3AccessConfig", m_s3AccessConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




