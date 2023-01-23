/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationExecutionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

AssociationExecutionFilter::AssociationExecutionFilter() : 
    m_key(AssociationExecutionFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(AssociationFilterOperatorType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AssociationExecutionFilter::AssociationExecutionFilter(JsonView jsonValue) : 
    m_key(AssociationExecutionFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(AssociationFilterOperatorType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationExecutionFilter& AssociationExecutionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = AssociationExecutionFilterKeyMapper::GetAssociationExecutionFilterKeyForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = AssociationFilterOperatorTypeMapper::GetAssociationFilterOperatorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationExecutionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", AssociationExecutionFilterKeyMapper::GetNameForAssociationExecutionFilterKey(m_key));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AssociationFilterOperatorTypeMapper::GetNameForAssociationFilterOperatorType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
