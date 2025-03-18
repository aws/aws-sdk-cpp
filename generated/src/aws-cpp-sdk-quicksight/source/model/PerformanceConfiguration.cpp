/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PerformanceConfiguration.h>
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

PerformanceConfiguration::PerformanceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PerformanceConfiguration& PerformanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UniqueKeys"))
  {
    Aws::Utils::Array<JsonView> uniqueKeysJsonList = jsonValue.GetArray("UniqueKeys");
    for(unsigned uniqueKeysIndex = 0; uniqueKeysIndex < uniqueKeysJsonList.GetLength(); ++uniqueKeysIndex)
    {
      m_uniqueKeys.push_back(uniqueKeysJsonList[uniqueKeysIndex].AsObject());
    }
    m_uniqueKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_uniqueKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> uniqueKeysJsonList(m_uniqueKeys.size());
   for(unsigned uniqueKeysIndex = 0; uniqueKeysIndex < uniqueKeysJsonList.GetLength(); ++uniqueKeysIndex)
   {
     uniqueKeysJsonList[uniqueKeysIndex].AsObject(m_uniqueKeys[uniqueKeysIndex].Jsonize());
   }
   payload.WithArray("UniqueKeys", std::move(uniqueKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
