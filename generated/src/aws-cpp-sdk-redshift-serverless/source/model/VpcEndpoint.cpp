/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/VpcEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

VpcEndpoint::VpcEndpoint() : 
    m_networkInterfacesHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

VpcEndpoint::VpcEndpoint(JsonView jsonValue) : 
    m_networkInterfacesHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

VpcEndpoint& VpcEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("vpcEndpointId", m_vpcEndpointId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
