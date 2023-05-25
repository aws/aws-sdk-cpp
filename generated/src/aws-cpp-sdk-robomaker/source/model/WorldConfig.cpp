/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

WorldConfig::WorldConfig() : 
    m_worldHasBeenSet(false)
{
}

WorldConfig::WorldConfig(JsonView jsonValue) : 
    m_worldHasBeenSet(false)
{
  *this = jsonValue;
}

WorldConfig& WorldConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("world"))
  {
    m_world = jsonValue.GetString("world");

    m_worldHasBeenSet = true;
  }

  return *this;
}

JsonValue WorldConfig::Jsonize() const
{
  JsonValue payload;

  if(m_worldHasBeenSet)
  {
   payload.WithString("world", m_world);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
