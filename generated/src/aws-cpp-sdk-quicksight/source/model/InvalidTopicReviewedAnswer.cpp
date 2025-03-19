/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/InvalidTopicReviewedAnswer.h>
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

InvalidTopicReviewedAnswer::InvalidTopicReviewedAnswer(JsonView jsonValue)
{
  *this = jsonValue;
}

InvalidTopicReviewedAnswer& InvalidTopicReviewedAnswer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnswerId"))
  {
    m_answerId = jsonValue.GetString("AnswerId");
    m_answerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = ReviewedAnswerErrorCodeMapper::GetReviewedAnswerErrorCodeForName(jsonValue.GetString("Error"));
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidTopicReviewedAnswer::Jsonize() const
{
  JsonValue payload;

  if(m_answerIdHasBeenSet)
  {
   payload.WithString("AnswerId", m_answerId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", ReviewedAnswerErrorCodeMapper::GetNameForReviewedAnswerErrorCode(m_error));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
