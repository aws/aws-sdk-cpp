/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationAppEndpointInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

SimulationAppEndpointInfo::SimulationAppEndpointInfo() : 
    m_addressHasBeenSet(false),
    m_ingressPortMappingsHasBeenSet(false)
{
}

SimulationAppEndpointInfo::SimulationAppEndpointInfo(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_ingressPortMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationAppEndpointInfo& SimulationAppEndpointInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IngressPortMappings"))
  {
    Aws::Utils::Array<JsonView> ingressPortMappingsJsonList = jsonValue.GetArray("IngressPortMappings");
    for(unsigned ingressPortMappingsIndex = 0; ingressPortMappingsIndex < ingressPortMappingsJsonList.GetLength(); ++ingressPortMappingsIndex)
    {
      m_ingressPortMappings.push_back(ingressPortMappingsJsonList[ingressPortMappingsIndex].AsObject());
    }
    m_ingressPortMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationAppEndpointInfo::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_ingressPortMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ingressPortMappingsJsonList(m_ingressPortMappings.size());
   for(unsigned ingressPortMappingsIndex = 0; ingressPortMappingsIndex < ingressPortMappingsJsonList.GetLength(); ++ingressPortMappingsIndex)
   {
     ingressPortMappingsJsonList[ingressPortMappingsIndex].AsObject(m_ingressPortMappings[ingressPortMappingsIndex].Jsonize());
   }
   payload.WithArray("IngressPortMappings", std::move(ingressPortMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
