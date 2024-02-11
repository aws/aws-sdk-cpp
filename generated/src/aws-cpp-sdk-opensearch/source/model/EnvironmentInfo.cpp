/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/EnvironmentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

EnvironmentInfo::EnvironmentInfo() : 
    m_availabilityZoneInformationHasBeenSet(false)
{
}

EnvironmentInfo::EnvironmentInfo(JsonView jsonValue) : 
    m_availabilityZoneInformationHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentInfo& EnvironmentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZoneInformation"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneInformationJsonList = jsonValue.GetArray("AvailabilityZoneInformation");
    for(unsigned availabilityZoneInformationIndex = 0; availabilityZoneInformationIndex < availabilityZoneInformationJsonList.GetLength(); ++availabilityZoneInformationIndex)
    {
      m_availabilityZoneInformation.push_back(availabilityZoneInformationJsonList[availabilityZoneInformationIndex].AsObject());
    }
    m_availabilityZoneInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneInformationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZoneInformationJsonList(m_availabilityZoneInformation.size());
   for(unsigned availabilityZoneInformationIndex = 0; availabilityZoneInformationIndex < availabilityZoneInformationJsonList.GetLength(); ++availabilityZoneInformationIndex)
   {
     availabilityZoneInformationJsonList[availabilityZoneInformationIndex].AsObject(m_availabilityZoneInformation[availabilityZoneInformationIndex].Jsonize());
   }
   payload.WithArray("AvailabilityZoneInformation", std::move(availabilityZoneInformationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
