/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateAnswerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAnswerRequest::UpdateAnswerRequest() : 
    m_workloadIdHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_selectedChoicesHasBeenSet(false),
    m_choiceUpdatesHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_isApplicable(false),
    m_isApplicableHasBeenSet(false),
    m_reason(AnswerReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

Aws::String UpdateAnswerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_selectedChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedChoicesJsonList(m_selectedChoices.size());
   for(unsigned selectedChoicesIndex = 0; selectedChoicesIndex < selectedChoicesJsonList.GetLength(); ++selectedChoicesIndex)
   {
     selectedChoicesJsonList[selectedChoicesIndex].AsString(m_selectedChoices[selectedChoicesIndex]);
   }
   payload.WithArray("SelectedChoices", std::move(selectedChoicesJsonList));

  }

  if(m_choiceUpdatesHasBeenSet)
  {
   JsonValue choiceUpdatesJsonMap;
   for(auto& choiceUpdatesItem : m_choiceUpdates)
   {
     choiceUpdatesJsonMap.WithObject(choiceUpdatesItem.first, choiceUpdatesItem.second.Jsonize());
   }
   payload.WithObject("ChoiceUpdates", std::move(choiceUpdatesJsonMap));

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_isApplicableHasBeenSet)
  {
   payload.WithBool("IsApplicable", m_isApplicable);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", AnswerReasonMapper::GetNameForAnswerReason(m_reason));
  }

  return payload.View().WriteReadable();
}




