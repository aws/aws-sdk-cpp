/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Entity.h>
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

Entity::Entity() : 
    m_pathHasBeenSet(false)
{
}

Entity::Entity(JsonView jsonValue) : 
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
