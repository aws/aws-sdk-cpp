/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/QuestionDifference.h>
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

QuestionDifference::QuestionDifference() : 
    m_questionIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_differenceStatus(DifferenceStatus::NOT_SET),
    m_differenceStatusHasBeenSet(false)
{
}

QuestionDifference::QuestionDifference(JsonView jsonValue) : 
    m_questionIdHasBeenSet(false),
    m_questionTitleHasBeenSet(false),
    m_differenceStatus(DifferenceStatus::NOT_SET),
    m_differenceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

QuestionDifference& QuestionDifference::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DifferenceStatus"))
  {
    m_differenceStatus = DifferenceStatusMapper::GetDifferenceStatusForName(jsonValue.GetString("DifferenceStatus"));

    m_differenceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue QuestionDifference::Jsonize() const
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

  if(m_differenceStatusHasBeenSet)
  {
   payload.WithString("DifferenceStatus", DifferenceStatusMapper::GetNameForDifferenceStatus(m_differenceStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
