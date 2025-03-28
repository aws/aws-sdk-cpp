/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TotalHits.h>
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

TotalHits::TotalHits(JsonView jsonValue)
{
  *this = jsonValue;
}

TotalHits& TotalHits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Relation"))
  {
    m_relation = RelationMapper::GetRelationForName(jsonValue.GetString("Relation"));
    m_relationHasBeenSet = true;
  }
  return *this;
}

JsonValue TotalHits::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  if(m_relationHasBeenSet)
  {
   payload.WithString("Relation", RelationMapper::GetNameForRelation(m_relation));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
