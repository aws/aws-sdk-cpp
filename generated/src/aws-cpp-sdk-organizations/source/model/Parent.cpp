/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/Parent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Parent::Parent() : 
    m_idHasBeenSet(false),
    m_type(ParentType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Parent::Parent(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(ParentType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Parent& Parent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParentTypeMapper::GetParentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Parent::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParentTypeMapper::GetNameForParentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
