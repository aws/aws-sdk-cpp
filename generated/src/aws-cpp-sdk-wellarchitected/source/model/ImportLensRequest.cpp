/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ImportLensRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportLensRequest::ImportLensRequest() : 
    m_lensAliasHasBeenSet(false),
    m_jSONStringHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportLensRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_jSONStringHasBeenSet)
  {
   payload.WithString("JSONString", m_jSONString);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

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




