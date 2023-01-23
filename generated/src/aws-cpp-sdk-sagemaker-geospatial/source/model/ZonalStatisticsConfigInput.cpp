/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ZonalStatisticsConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

ZonalStatisticsConfigInput::ZonalStatisticsConfigInput() : 
    m_statisticsHasBeenSet(false),
    m_targetBandsHasBeenSet(false),
    m_zoneS3PathHasBeenSet(false)
{
}

ZonalStatisticsConfigInput::ZonalStatisticsConfigInput(JsonView jsonValue) : 
    m_statisticsHasBeenSet(false),
    m_targetBandsHasBeenSet(false),
    m_zoneS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

ZonalStatisticsConfigInput& ZonalStatisticsConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statistics"))
  {
    Aws::Utils::Array<JsonView> statisticsJsonList = jsonValue.GetArray("Statistics");
    for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
    {
      m_statistics.push_back(ZonalStatisticsMapper::GetZonalStatisticsForName(statisticsJsonList[statisticsIndex].AsString()));
    }
    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetBands"))
  {
    Aws::Utils::Array<JsonView> targetBandsJsonList = jsonValue.GetArray("TargetBands");
    for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
    {
      m_targetBands.push_back(targetBandsJsonList[targetBandsIndex].AsString());
    }
    m_targetBandsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneS3Path"))
  {
    m_zoneS3Path = jsonValue.GetString("ZoneS3Path");

    m_zoneS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue ZonalStatisticsConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_statisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsString(ZonalStatisticsMapper::GetNameForZonalStatistics(m_statistics[statisticsIndex]));
   }
   payload.WithArray("Statistics", std::move(statisticsJsonList));

  }

  if(m_targetBandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetBandsJsonList(m_targetBands.size());
   for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
   {
     targetBandsJsonList[targetBandsIndex].AsString(m_targetBands[targetBandsIndex]);
   }
   payload.WithArray("TargetBands", std::move(targetBandsJsonList));

  }

  if(m_zoneS3PathHasBeenSet)
  {
   payload.WithString("ZoneS3Path", m_zoneS3Path);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
