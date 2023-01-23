/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/OverallVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

OverallVolume::OverallVolume() : 
    m_volumeStatisticsHasBeenSet(false),
    m_readRatePercent(0.0),
    m_readRatePercentHasBeenSet(false),
    m_domainIspPlacementsHasBeenSet(false)
{
}

OverallVolume::OverallVolume(JsonView jsonValue) : 
    m_volumeStatisticsHasBeenSet(false),
    m_readRatePercent(0.0),
    m_readRatePercentHasBeenSet(false),
    m_domainIspPlacementsHasBeenSet(false)
{
  *this = jsonValue;
}

OverallVolume& OverallVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeStatistics"))
  {
    m_volumeStatistics = jsonValue.GetObject("VolumeStatistics");

    m_volumeStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadRatePercent"))
  {
    m_readRatePercent = jsonValue.GetDouble("ReadRatePercent");

    m_readRatePercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainIspPlacements"))
  {
    Aws::Utils::Array<JsonView> domainIspPlacementsJsonList = jsonValue.GetArray("DomainIspPlacements");
    for(unsigned domainIspPlacementsIndex = 0; domainIspPlacementsIndex < domainIspPlacementsJsonList.GetLength(); ++domainIspPlacementsIndex)
    {
      m_domainIspPlacements.push_back(domainIspPlacementsJsonList[domainIspPlacementsIndex].AsObject());
    }
    m_domainIspPlacementsHasBeenSet = true;
  }

  return *this;
}

JsonValue OverallVolume::Jsonize() const
{
  JsonValue payload;

  if(m_volumeStatisticsHasBeenSet)
  {
   payload.WithObject("VolumeStatistics", m_volumeStatistics.Jsonize());

  }

  if(m_readRatePercentHasBeenSet)
  {
   payload.WithDouble("ReadRatePercent", m_readRatePercent);

  }

  if(m_domainIspPlacementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainIspPlacementsJsonList(m_domainIspPlacements.size());
   for(unsigned domainIspPlacementsIndex = 0; domainIspPlacementsIndex < domainIspPlacementsJsonList.GetLength(); ++domainIspPlacementsIndex)
   {
     domainIspPlacementsJsonList[domainIspPlacementsIndex].AsObject(m_domainIspPlacements[domainIspPlacementsIndex].Jsonize());
   }
   payload.WithArray("DomainIspPlacements", std::move(domainIspPlacementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
