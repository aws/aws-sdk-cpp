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

  if(m_folderArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderArnsJsonList(m_folderArns.size());
   for(unsigned folderArnsIndex = 0; folderArnsIndex < folderArnsJsonList.GetLength(); ++folderArnsIndex)
   {
     folderArnsJsonList[folderArnsIndex].AsString(m_folderArns[folderArnsIndex]);
   }
   payload.WithArray("FolderArns", std::move(folderArnsJsonList));

  }

  if(m_customInstructionsHasBeenSet)
  {
   payload.WithObject("CustomInstructions", m_customInstructions.Jsonize());

  }

  return payload.View().WriteReadable();
}




