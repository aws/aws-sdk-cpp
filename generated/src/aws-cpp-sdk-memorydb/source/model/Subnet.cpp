/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Subnet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

Subnet::Subnet(JsonView jsonValue)
{
  *this = jsonValue;
}

Subnet& Subnet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetObject("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedNetworkTypes"))
  {
    Aws::Utils::Array<JsonView> supportedNetworkTypesJsonList = jsonValue.GetArray("SupportedNetworkTypes");
    for(unsigned supportedNetworkTypesIndex = 0; supportedNetworkTypesIndex < supportedNetworkTypesJsonList.GetLength(); ++supportedNetworkTypesIndex)
    {
      m_supportedNetworkTypes.push_back(NetworkTypeMapper::GetNetworkTypeForName(supportedNetworkTypesJsonList[supportedNetworkTypesIndex].AsString()));
    }
    m_supportedNetworkTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Subnet::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithObject("AvailabilityZone", m_availabilityZone.Jsonize());

  }

  if(m_supportedNetworkTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedNetworkTypesJsonList(m_supportedNetworkTypes.size());
   for(unsigned supportedNetworkTypesIndex = 0; supportedNetworkTypesIndex < supportedNetworkTypesJsonList.GetLength(); ++supportedNetworkTypesIndex)
   {
     supportedNetworkTypesJsonList[supportedNetworkTypesIndex].AsString(NetworkTypeMapper::GetNameForNetworkType(m_supportedNetworkTypes[supportedNetworkTypesIndex]));
   }
   payload.WithArray("SupportedNetworkTypes", std::move(supportedNetworkTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
