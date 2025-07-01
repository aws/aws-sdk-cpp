/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ServiceNetworkEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

ServiceNetworkEndpoint::ServiceNetworkEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNetworkEndpoint& ServiceNetworkEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcEndpointType"))
  {
    m_vpcEndpointType = VpcEndpointTypeMapper::GetVpcEndpointTypeForName(jsonValue.GetString("vpcEndpointType"));
    m_vpcEndpointTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNetworkEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("vpcEndpointId", m_vpcEndpointId);

  }

  if(m_vpcEndpointTypeHasBeenSet)
  {
   payload.WithString("vpcEndpointType", VpcEndpointTypeMapper::GetNameForVpcEndpointType(m_vpcEndpointType));
  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
