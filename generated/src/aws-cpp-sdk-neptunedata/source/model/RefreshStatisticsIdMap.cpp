/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/RefreshStatisticsIdMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

RefreshStatisticsIdMap::RefreshStatisticsIdMap() : 
    m_statisticsIdHasBeenSet(false)
{
}

RefreshStatisticsIdMap::RefreshStatisticsIdMap(JsonView jsonValue) : 
    m_statisticsIdHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshStatisticsIdMap& RefreshStatisticsIdMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statisticsId"))
  {
    m_statisticsId = jsonValue.GetString("statisticsId");

    m_statisticsIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshStatisticsIdMap::Jsonize() const
{
  JsonValue payload;

  if(m_statisticsIdHasBeenSet)
  {
   payload.WithString("statisticsId", m_statisticsId);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
