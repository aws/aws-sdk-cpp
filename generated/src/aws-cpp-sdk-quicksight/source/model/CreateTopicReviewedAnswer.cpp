/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateTopicReviewedAnswer.h>
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

CreateTopicReviewedAnswer::CreateTopicReviewedAnswer(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateTopicReviewedAnswer& CreateTopicReviewedAnswer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnswerId"))
  {
    m_answerId = jsonValue.GetString("AnswerId");
    m_answerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Question"))
  {
    m_question = jsonValue.GetString("Question");
    m_questionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mir"))
  {
    m_mir = jsonValue.GetObject("Mir");
    m_mirHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryVisual"))
  {
    m_primaryVisual = jsonValue.GetObject("PrimaryVisual");
    m_primaryVisualHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Template"))
  {
    m_template = jsonValue.GetObject("Template");
    m_templateHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateTopicReviewedAnswer::Jsonize() const
{
  JsonValue payload;

  if(m_answerIdHasBeenSet)
  {
   payload.WithString("AnswerId", m_answerId);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_questionHasBeenSet)
  {
   payload.WithString("Question", m_question);

  }

  if(m_mirHasBeenSet)
  {
   payload.WithObject("Mir", m_mir.Jsonize());

  }

  if(m_primaryVisualHasBeenSet)
  {
   payload.WithObject("PrimaryVisual", m_primaryVisual.Jsonize());

  }

  if(m_templateHasBeenSet)
  {
   payload.WithObject("Template", m_template.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
