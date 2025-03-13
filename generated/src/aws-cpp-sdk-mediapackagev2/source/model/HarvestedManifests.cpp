/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/HarvestedManifests.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

HarvestedManifests::HarvestedManifests(JsonView jsonValue)
{
  *this = jsonValue;
}

HarvestedManifests& HarvestedManifests::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HlsManifests"))
  {
    Aws::Utils::Array<JsonView> hlsManifestsJsonList = jsonValue.GetArray("HlsManifests");
    for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
    {
      m_hlsManifests.push_back(hlsManifestsJsonList[hlsManifestsIndex].AsObject());
    }
    m_hlsManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DashManifests"))
  {
    Aws::Utils::Array<JsonView> dashManifestsJsonList = jsonValue.GetArray("DashManifests");
    for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
    {
      m_dashManifests.push_back(dashManifestsJsonList[dashManifestsIndex].AsObject());
    }
    m_dashManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LowLatencyHlsManifests"))
  {
    Aws::Utils::Array<JsonView> lowLatencyHlsManifestsJsonList = jsonValue.GetArray("LowLatencyHlsManifests");
    for(unsigned lowLatencyHlsManifestsIndex = 0; lowLatencyHlsManifestsIndex < lowLatencyHlsManifestsJsonList.GetLength(); ++lowLatencyHlsManifestsIndex)
    {
      m_lowLatencyHlsManifests.push_back(lowLatencyHlsManifestsJsonList[lowLatencyHlsManifestsIndex].AsObject());
    }
    m_lowLatencyHlsManifestsHasBeenSet = true;
  }
  return *this;
}

JsonValue HarvestedManifests::Jsonize() const
{
  JsonValue payload;

  if(m_hlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hlsManifestsJsonList(m_hlsManifests.size());
   for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
   {
     hlsManifestsJsonList[hlsManifestsIndex].AsObject(m_hlsManifests[hlsManifestsIndex].Jsonize());
   }
   payload.WithArray("HlsManifests", std::move(hlsManifestsJsonList));

  }

  if(m_dashManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashManifestsJsonList(m_dashManifests.size());
   for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
   {
     dashManifestsJsonList[dashManifestsIndex].AsObject(m_dashManifests[dashManifestsIndex].Jsonize());
   }
   payload.WithArray("DashManifests", std::move(dashManifestsJsonList));

  }

  if(m_lowLatencyHlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lowLatencyHlsManifestsJsonList(m_lowLatencyHlsManifests.size());
   for(unsigned lowLatencyHlsManifestsIndex = 0; lowLatencyHlsManifestsIndex < lowLatencyHlsManifestsJsonList.GetLength(); ++lowLatencyHlsManifestsIndex)
   {
     lowLatencyHlsManifestsJsonList[lowLatencyHlsManifestsIndex].AsObject(m_lowLatencyHlsManifests[lowLatencyHlsManifestsIndex].Jsonize());
   }
   payload.WithArray("LowLatencyHlsManifests", std::move(lowLatencyHlsManifestsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
