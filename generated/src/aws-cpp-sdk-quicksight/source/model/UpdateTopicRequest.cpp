/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateTopicRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTopicRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_topicHasBeenSet)
  {
   payload.WithObject("Topic", m_topic.Jsonize());

  }

  if(m_customInstructionsHasBeenSet)
  {
   payload.WithObject("CustomInstructions", m_customInstructions.Jsonize());

  }

  return payload.View().WriteReadable();
}




