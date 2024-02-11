/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateTopicRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTopicRequest::CreateTopicRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTopicRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_topicIdHasBeenSet)
  {
   payload.WithString("TopicId", m_topicId);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithObject("Topic", m_topic.Jsonize());

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




