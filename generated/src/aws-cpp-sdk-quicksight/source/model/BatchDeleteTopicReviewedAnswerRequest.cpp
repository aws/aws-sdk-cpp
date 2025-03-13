/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BatchDeleteTopicReviewedAnswerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteTopicReviewedAnswerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_answerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> answerIdsJsonList(m_answerIds.size());
   for(unsigned answerIdsIndex = 0; answerIdsIndex < answerIdsJsonList.GetLength(); ++answerIdsIndex)
   {
     answerIdsJsonList[answerIdsIndex].AsString(m_answerIds[answerIdsIndex]);
   }
   payload.WithArray("AnswerIds", std::move(answerIdsJsonList));

  }

  return payload.View().WriteReadable();
}




