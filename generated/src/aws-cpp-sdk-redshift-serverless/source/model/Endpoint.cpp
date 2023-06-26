/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Endpoint.h>
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

Endpoint::Endpoint() : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcEndpointsHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcEndpointsHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetString("address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcEndpoints"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointsJsonList = jsonValue.GetArray("vpcEndpoints");
    for(unsigned vpcEndpointsIndex = 0; vpcEndpointsIndex < vpcEndpointsJsonList.GetLength(); ++vpcEndpointsIndex)
    {
      m_vpcEndpoints.push_back(vpcEndpointsJsonList[vpcEndpointsIndex].AsObject());
    }
    m_vpcEndpointsHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("address", m_address);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_vpcEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcEndpointsJsonList(m_vpcEndpoints.size());
   for(unsigned vpcEndpointsIndex = 0; vpcEndpointsIndex < vpcEndpointsJsonList.GetLength(); ++vpcEndpointsIndex)
   {
     vpcEndpointsJsonList[vpcEndpointsIndex].AsObject(m_vpcEndpoints[vpcEndpointsIndex].Jsonize());
   }
   payload.WithArray("vpcEndpoints", std::move(vpcEndpointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
