/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileTemplateQuestion.h>
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

ProfileTemplateQuestion::ProfileTemplateQuestion() : 
    m_questionIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_questionDescriptionHasBeenSet(false),
    m_questionChoicesHasBeenSet(false),
    m_minSelectedChoices(0),
    m_minSelectedChoicesHasBeenSet(false),
    m_maxSelectedChoices(0),
    m_maxSelectedChoicesHasBeenSet(false)
{
}

ProfileTemplateQuestion::ProfileTemplateQuestion(JsonView jsonValue) : 
    m_questionIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_questionDescriptionHasBeenSet(false),
    m_questionChoicesHasBeenSet(false),
    m_minSelectedChoices(0),
    m_minSelectedChoicesHasBeenSet(false),
    m_maxSelectedChoices(0),
    m_maxSelectedChoicesHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileTemplateQuestion& ProfileTemplateQuestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionTitle"))
  {
    m_questionTitle = jsonValue.GetString("QuestionTitle");

    m_questionTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionDescription"))
  {
    m_questionDescription = jsonValue.GetString("QuestionDescription");

    m_questionDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionChoices"))
  {
    Aws::Utils::Array<JsonView> questionChoicesJsonList = jsonValue.GetArray("QuestionChoices");
    for(unsigned questionChoicesIndex = 0; questionChoicesIndex < questionChoicesJsonList.GetLength(); ++questionChoicesIndex)
    {
      m_questionChoices.push_back(questionChoicesJsonList[questionChoicesIndex].AsObject());
    }
    m_questionChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinSelectedChoices"))
  {
    m_minSelectedChoices = jsonValue.GetInteger("MinSelectedChoices");

    m_minSelectedChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSelectedChoices"))
  {
    m_maxSelectedChoices = jsonValue.GetInteger("MaxSelectedChoices");

    m_maxSelectedChoicesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileTemplateQuestion::Jsonize() const
{
  JsonValue payload;

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_questionTitleHasBeenSet)
  {
   payload.WithString("QuestionTitle", m_questionTitle);

  }

  if(m_questionDescriptionHasBeenSet)
  {
   payload.WithString("QuestionDescription", m_questionDescription);

  }

  if(m_questionChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> questionChoicesJsonList(m_questionChoices.size());
   for(unsigned questionChoicesIndex = 0; questionChoicesIndex < questionChoicesJsonList.GetLength(); ++questionChoicesIndex)
   {
     questionChoicesJsonList[questionChoicesIndex].AsObject(m_questionChoices[questionChoicesIndex].Jsonize());
   }
   payload.WithArray("QuestionChoices", std::move(questionChoicesJsonList));

  }

  if(m_minSelectedChoicesHasBeenSet)
  {
   payload.WithInteger("MinSelectedChoices", m_minSelectedChoices);

  }

  if(m_maxSelectedChoicesHasBeenSet)
  {
   payload.WithInteger("MaxSelectedChoices", m_maxSelectedChoices);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
