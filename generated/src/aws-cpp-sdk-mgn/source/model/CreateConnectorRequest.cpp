/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/CreateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectorRequest::CreateConnectorRequest() : 
    m_nameHasBeenSet(false),
    m_ssmCommandConfigHasBeenSet(false),
    m_ssmInstanceIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ssmCommandConfigHasBeenSet)
  {
   payload.WithObject("ssmCommandConfig", m_ssmCommandConfig.Jsonize());

  }

  if(m_ssmInstanceIDHasBeenSet)
  {
   payload.WithString("ssmInstanceID", m_ssmInstanceID);

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

  return payload.View().WriteReadable();
}




