/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ResourceChangeDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ResourceChangeDetail::ResourceChangeDetail() : 
    m_targetHasBeenSet(false),
    m_evaluation(EvaluationType::NOT_SET),
    m_evaluationHasBeenSet(false),
    m_causingEntityHasBeenSet(false)
{
}

ResourceChangeDetail::ResourceChangeDetail(JsonView jsonValue) : 
    m_targetHasBeenSet(false),
    m_evaluation(EvaluationType::NOT_SET),
    m_evaluationHasBeenSet(false),
    m_causingEntityHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceChangeDetail& ResourceChangeDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Evaluation"))
  {
    m_evaluation = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("Evaluation"));

    m_evaluationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CausingEntity"))
  {
    m_causingEntity = jsonValue.GetString("CausingEntity");

    m_causingEntityHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceChangeDetail::Jsonize() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_evaluationHasBeenSet)
  {
   payload.WithString("Evaluation", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluation));
  }

  if(m_causingEntityHasBeenSet)
  {
   payload.WithString("CausingEntity", m_causingEntity);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
