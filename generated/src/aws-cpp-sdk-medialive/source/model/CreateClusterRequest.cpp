/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterRequest::CreateClusterRequest() : 
    m_clusterType(ClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_instanceRoleArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkSettingsHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::PseudoRandomUUID()),
    m_requestIdHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", ClusterTypeMapper::GetNameForClusterType(m_clusterType));
  }

  if(m_instanceRoleArnHasBeenSet)
  {
   payload.WithString("instanceRoleArn", m_instanceRoleArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networkSettingsHasBeenSet)
  {
   payload.WithObject("networkSettings", m_networkSettings.Jsonize());

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

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




