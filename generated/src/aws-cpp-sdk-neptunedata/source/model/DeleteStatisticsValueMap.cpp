/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/DeleteStatisticsValueMap.h>
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

DeleteStatisticsValueMap::DeleteStatisticsValueMap() : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_statisticsIdHasBeenSet(false)
{
}

DeleteStatisticsValueMap::DeleteStatisticsValueMap(JsonView jsonValue) : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_statisticsIdHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteStatisticsValueMap& DeleteStatisticsValueMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statisticsId"))
  {
    m_statisticsId = jsonValue.GetString("statisticsId");

    m_statisticsIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteStatisticsValueMap::Jsonize() const
{
  JsonValue payload;

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_statisticsIdHasBeenSet)
  {
   payload.WithString("statisticsId", m_statisticsId);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
