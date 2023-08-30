/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GremlinQueryStatus.h>
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

GremlinQueryStatus::GremlinQueryStatus() : 
    m_queryIdHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_queryEvalStatsHasBeenSet(false)
{
}

GremlinQueryStatus::GremlinQueryStatus(JsonView jsonValue) : 
    m_queryIdHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_queryEvalStatsHasBeenSet(false)
{
  *this = jsonValue;
}

GremlinQueryStatus& GremlinQueryStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryId"))
  {
    m_queryId = jsonValue.GetString("queryId");

    m_queryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryEvalStats"))
  {
    m_queryEvalStats = jsonValue.GetObject("queryEvalStats");

    m_queryEvalStatsHasBeenSet = true;
  }

  return *this;
}

JsonValue GremlinQueryStatus::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("queryId", m_queryId);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_queryEvalStatsHasBeenSet)
  {
   payload.WithObject("queryEvalStats", m_queryEvalStats.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
