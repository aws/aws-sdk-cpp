/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkEndpointAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

ServiceNetworkEndpointAssociation::ServiceNetworkEndpointAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNetworkEndpointAssociation& ServiceNetworkEndpointAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkArn"))
  {
    m_serviceNetworkArn = jsonValue.GetString("serviceNetworkArn");
    m_serviceNetworkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcEndpointOwnerId"))
  {
    m_vpcEndpointOwnerId = jsonValue.GetString("vpcEndpointOwnerId");
    m_vpcEndpointOwnerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNetworkEndpointAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_serviceNetworkArnHasBeenSet)
  {
   payload.WithString("serviceNetworkArn", m_serviceNetworkArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("vpcEndpointId", m_vpcEndpointId);

  }

  if(m_vpcEndpointOwnerIdHasBeenSet)
  {
   payload.WithString("vpcEndpointOwnerId", m_vpcEndpointOwnerId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
