/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkPathComponentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NetworkPathComponentDetails::NetworkPathComponentDetails() : 
    m_addressHasBeenSet(false),
    m_portRangesHasBeenSet(false)
{
}

NetworkPathComponentDetails::NetworkPathComponentDetails(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_portRangesHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkPathComponentDetails& NetworkPathComponentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    Aws::Utils::Array<JsonView> addressJsonList = jsonValue.GetArray("Address");
    for(unsigned addressIndex = 0; addressIndex < addressJsonList.GetLength(); ++addressIndex)
    {
      m_address.push_back(addressJsonList[addressIndex].AsString());
    }
    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortRanges"))
  {
    Aws::Utils::Array<JsonView> portRangesJsonList = jsonValue.GetArray("PortRanges");
    for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
    {
      m_portRanges.push_back(portRangesJsonList[portRangesIndex].AsObject());
    }
    m_portRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkPathComponentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressJsonList(m_address.size());
   for(unsigned addressIndex = 0; addressIndex < addressJsonList.GetLength(); ++addressIndex)
   {
     addressJsonList[addressIndex].AsString(m_address[addressIndex]);
   }
   payload.WithArray("Address", std::move(addressJsonList));

  }

  if(m_portRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portRangesJsonList(m_portRanges.size());
   for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
   {
     portRangesJsonList[portRangesIndex].AsObject(m_portRanges[portRangesIndex].Jsonize());
   }
   payload.WithArray("PortRanges", std::move(portRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
