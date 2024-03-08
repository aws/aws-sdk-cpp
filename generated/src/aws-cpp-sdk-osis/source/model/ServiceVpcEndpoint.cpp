/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ServiceVpcEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

ServiceVpcEndpoint::ServiceVpcEndpoint() : 
    m_serviceName(VpcEndpointServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
}

ServiceVpcEndpoint::ServiceVpcEndpoint(JsonView jsonValue) : 
    m_serviceName(VpcEndpointServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceVpcEndpoint& ServiceVpcEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = VpcEndpointServiceNameMapper::GetVpcEndpointServiceNameForName(jsonValue.GetString("ServiceName"));

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceVpcEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", VpcEndpointServiceNameMapper::GetNameForVpcEndpointServiceName(m_serviceName));
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
