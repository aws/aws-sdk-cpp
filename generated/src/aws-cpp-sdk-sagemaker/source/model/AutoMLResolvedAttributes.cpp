/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLResolvedAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLResolvedAttributes::AutoMLResolvedAttributes() : 
    m_autoMLJobObjectiveHasBeenSet(false),
    m_completionCriteriaHasBeenSet(false),
    m_autoMLProblemTypeResolvedAttributesHasBeenSet(false)
{
}

AutoMLResolvedAttributes::AutoMLResolvedAttributes(JsonView jsonValue) : 
    m_autoMLJobObjectiveHasBeenSet(false),
    m_completionCriteriaHasBeenSet(false),
    m_autoMLProblemTypeResolvedAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLResolvedAttributes& AutoMLResolvedAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoMLJobObjective"))
  {
    m_autoMLJobObjective = jsonValue.GetObject("AutoMLJobObjective");

    m_autoMLJobObjectiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionCriteria"))
  {
    m_completionCriteria = jsonValue.GetObject("CompletionCriteria");

    m_completionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLProblemTypeResolvedAttributes"))
  {
    m_autoMLProblemTypeResolvedAttributes = jsonValue.GetObject("AutoMLProblemTypeResolvedAttributes");

    m_autoMLProblemTypeResolvedAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLResolvedAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_autoMLJobObjectiveHasBeenSet)
  {
   payload.WithObject("AutoMLJobObjective", m_autoMLJobObjective.Jsonize());

  }

  if(m_completionCriteriaHasBeenSet)
  {
   payload.WithObject("CompletionCriteria", m_completionCriteria.Jsonize());

  }

  if(m_autoMLProblemTypeResolvedAttributesHasBeenSet)
  {
   payload.WithObject("AutoMLProblemTypeResolvedAttributes", m_autoMLProblemTypeResolvedAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
