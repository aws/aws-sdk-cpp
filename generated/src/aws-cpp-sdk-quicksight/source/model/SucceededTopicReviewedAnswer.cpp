/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SucceededTopicReviewedAnswer.h>
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

SucceededTopicReviewedAnswer::SucceededTopicReviewedAnswer(JsonView jsonValue)
{
  *this = jsonValue;
}

SucceededTopicReviewedAnswer& SucceededTopicReviewedAnswer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnswerId"))
  {
    m_answerId = jsonValue.GetString("AnswerId");
    m_answerIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SucceededTopicReviewedAnswer::Jsonize() const
{
  JsonValue payload;

  if(m_answerIdHasBeenSet)
  {
   payload.WithString("AnswerId", m_answerId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
