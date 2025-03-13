/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AssetInstanceTypeCapacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

AssetInstanceTypeCapacity::AssetInstanceTypeCapacity(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetInstanceTypeCapacity& AssetInstanceTypeCapacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetInstanceTypeCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
