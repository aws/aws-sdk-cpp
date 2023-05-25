/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationExecutionTargetsFilter.h>
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

AssociationExecutionTargetsFilter::AssociationExecutionTargetsFilter() : 
    m_key(AssociationExecutionTargetsFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AssociationExecutionTargetsFilter::AssociationExecutionTargetsFilter(JsonView jsonValue) : 
    m_key(AssociationExecutionTargetsFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationExecutionTargetsFilter& AssociationExecutionTargetsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = AssociationExecutionTargetsFilterKeyMapper::GetAssociationExecutionTargetsFilterKeyForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationExecutionTargetsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", AssociationExecutionTargetsFilterKeyMapper::GetNameForAssociationExecutionTargetsFilterKey(m_key));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
