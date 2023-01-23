/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationFilter.h>
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

AssociationFilter::AssociationFilter() : 
    m_key(AssociationFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AssociationFilter::AssociationFilter(JsonView jsonValue) : 
    m_key(AssociationFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationFilter& AssociationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = AssociationFilterKeyMapper::GetAssociationFilterKeyForName(jsonValue.GetString("key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", AssociationFilterKeyMapper::GetNameForAssociationFilterKey(m_key));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
