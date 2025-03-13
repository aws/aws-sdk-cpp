/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeneratedAnswerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

GeneratedAnswerResult::GeneratedAnswerResult(JsonView jsonValue)
{
  *this = jsonValue;
}

GeneratedAnswerResult& GeneratedAnswerResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionText"))
  {
    m_questionText = jsonValue.GetString("QuestionText");
    m_questionTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnswerStatus"))
  {
    m_answerStatus = GeneratedAnswerStatusMapper::GetGeneratedAnswerStatusForName(jsonValue.GetString("AnswerStatus"));
    m_answerStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TopicId"))
  {
    m_topicId = jsonValue.GetString("TopicId");
    m_topicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");
    m_topicNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Restatement"))
  {
    m_restatement = jsonValue.GetString("Restatement");
    m_restatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");
    m_questionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnswerId"))
  {
    m_answerId = jsonValue.GetString("AnswerId");
    m_answerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuestionUrl"))
  {
    m_questionUrl = jsonValue.GetString("QuestionUrl");
    m_questionUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue GeneratedAnswerResult::Jsonize() const
{
  JsonValue payload;

  if(m_questionTextHasBeenSet)
  {
   payload.WithString("QuestionText", m_questionText);

  }

  if(m_answerStatusHasBeenSet)
  {
   payload.WithString("AnswerStatus", GeneratedAnswerStatusMapper::GetNameForGeneratedAnswerStatus(m_answerStatus));
  }

  if(m_topicIdHasBeenSet)
  {
   payload.WithString("TopicId", m_topicId);

  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_restatementHasBeenSet)
  {
   payload.WithString("Restatement", m_restatement);

  }

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_answerIdHasBeenSet)
  {
   payload.WithString("AnswerId", m_answerId);

  }

  if(m_questionUrlHasBeenSet)
  {
   payload.WithString("QuestionUrl", m_questionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
