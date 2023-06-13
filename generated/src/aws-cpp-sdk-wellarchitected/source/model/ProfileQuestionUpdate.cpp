/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileQuestionUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ProfileQuestionUpdate::ProfileQuestionUpdate() : 
    m_questionIdHasBeenSet(false),
    m_selectedChoiceIdsHasBeenSet(false)
{
}

ProfileQuestionUpdate::ProfileQuestionUpdate(JsonView jsonValue) : 
    m_questionIdHasBeenSet(false),
    m_selectedChoiceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileQuestionUpdate& ProfileQuestionUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedChoiceIds"))
  {
    Aws::Utils::Array<JsonView> selectedChoiceIdsJsonList = jsonValue.GetArray("SelectedChoiceIds");
    for(unsigned selectedChoiceIdsIndex = 0; selectedChoiceIdsIndex < selectedChoiceIdsJsonList.GetLength(); ++selectedChoiceIdsIndex)
    {
      m_selectedChoiceIds.push_back(selectedChoiceIdsJsonList[selectedChoiceIdsIndex].AsString());
    }
    m_selectedChoiceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileQuestionUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_selectedChoiceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedChoiceIdsJsonList(m_selectedChoiceIds.size());
   for(unsigned selectedChoiceIdsIndex = 0; selectedChoiceIdsIndex < selectedChoiceIdsJsonList.GetLength(); ++selectedChoiceIdsIndex)
   {
     selectedChoiceIdsJsonList[selectedChoiceIdsIndex].AsString(m_selectedChoiceIds[selectedChoiceIdsIndex]);
   }
   payload.WithArray("SelectedChoiceIds", std::move(selectedChoiceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
