/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/PropertygraphSummaryValueMap.h>
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

PropertygraphSummaryValueMap::PropertygraphSummaryValueMap() : 
    m_versionHasBeenSet(false),
    m_lastStatisticsComputationTimeHasBeenSet(false),
    m_graphSummaryHasBeenSet(false)
{
}

PropertygraphSummaryValueMap::PropertygraphSummaryValueMap(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_lastStatisticsComputationTimeHasBeenSet(false),
    m_graphSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

PropertygraphSummaryValueMap& PropertygraphSummaryValueMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatisticsComputationTime"))
  {
    m_lastStatisticsComputationTime = jsonValue.GetString("lastStatisticsComputationTime");

    m_lastStatisticsComputationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("graphSummary"))
  {
    m_graphSummary = jsonValue.GetObject("graphSummary");

    m_graphSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertygraphSummaryValueMap::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_lastStatisticsComputationTimeHasBeenSet)
  {
   payload.WithString("lastStatisticsComputationTime", m_lastStatisticsComputationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_graphSummaryHasBeenSet)
  {
   payload.WithObject("graphSummary", m_graphSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
