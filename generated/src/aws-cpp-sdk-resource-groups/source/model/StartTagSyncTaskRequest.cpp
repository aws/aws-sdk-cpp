/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/StartTagSyncTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTagSyncTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("TagValue", m_tagValue);

  }

  if(m_resourceQueryHasBeenSet)
  {
   payload.WithObject("ResourceQuery", m_resourceQuery.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




