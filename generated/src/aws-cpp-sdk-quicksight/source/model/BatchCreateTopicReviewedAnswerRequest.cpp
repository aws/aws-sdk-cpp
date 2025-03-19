/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BatchCreateTopicReviewedAnswerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateTopicReviewedAnswerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_answersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> answersJsonList(m_answers.size());
   for(unsigned answersIndex = 0; answersIndex < answersJsonList.GetLength(); ++answersIndex)
   {
     answersJsonList[answersIndex].AsObject(m_answers[answersIndex].Jsonize());
   }
   payload.WithArray("Answers", std::move(answersJsonList));

  }

  return payload.View().WriteReadable();
}




