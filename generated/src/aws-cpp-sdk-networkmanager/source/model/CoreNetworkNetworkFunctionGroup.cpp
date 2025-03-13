/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkNetworkFunctionGroup.h>
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

CoreNetworkNetworkFunctionGroup::CoreNetworkNetworkFunctionGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

CoreNetworkNetworkFunctionGroup& CoreNetworkNetworkFunctionGroup::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Segments"))
  {
    m_segments = jsonValue.GetObject("Segments");
    m_segmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue CoreNetworkNetworkFunctionGroup::Jsonize() const
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

  if(m_segmentsHasBeenSet)
  {
   payload.WithObject("Segments", m_segments.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
