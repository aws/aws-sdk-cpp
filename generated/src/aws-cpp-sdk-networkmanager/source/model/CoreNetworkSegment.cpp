/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CoreNetworkSegment::CoreNetworkSegment() : 
    m_nameHasBeenSet(false),
    m_edgeLocationsHasBeenSet(false),
    m_sharedSegmentsHasBeenSet(false)
{
}

CoreNetworkSegment::CoreNetworkSegment(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_edgeLocationsHasBeenSet(false),
    m_sharedSegmentsHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkSegment& CoreNetworkSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeLocations"))
  {
    Aws::Utils::Array<JsonView> edgeLocationsJsonList = jsonValue.GetArray("EdgeLocations");
    for(unsigned edgeLocationsIndex = 0; edgeLocationsIndex < edgeLocationsJsonList.GetLength(); ++edgeLocationsIndex)
    {
      m_edgeLocations.push_back(edgeLocationsJsonList[edgeLocationsIndex].AsString());
    }
    m_edgeLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedSegments"))
  {
    Aws::Utils::Array<JsonView> sharedSegmentsJsonList = jsonValue.GetArray("SharedSegments");
    for(unsigned sharedSegmentsIndex = 0; sharedSegmentsIndex < sharedSegmentsJsonList.GetLength(); ++sharedSegmentsIndex)
    {
      m_sharedSegments.push_back(sharedSegmentsJsonList[sharedSegmentsIndex].AsString());
    }
    m_sharedSegmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkSegment::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_edgeLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgeLocationsJsonList(m_edgeLocations.size());
   for(unsigned edgeLocationsIndex = 0; edgeLocationsIndex < edgeLocationsJsonList.GetLength(); ++edgeLocationsIndex)
   {
     edgeLocationsJsonList[edgeLocationsIndex].AsString(m_edgeLocations[edgeLocationsIndex]);
   }
   payload.WithArray("EdgeLocations", std::move(edgeLocationsJsonList));

  }

  if(m_sharedSegmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sharedSegmentsJsonList(m_sharedSegments.size());
   for(unsigned sharedSegmentsIndex = 0; sharedSegmentsIndex < sharedSegmentsJsonList.GetLength(); ++sharedSegmentsIndex)
   {
     sharedSegmentsJsonList[sharedSegmentsIndex].AsString(m_sharedSegments[sharedSegmentsIndex]);
   }
   payload.WithArray("SharedSegments", std::move(sharedSegmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
