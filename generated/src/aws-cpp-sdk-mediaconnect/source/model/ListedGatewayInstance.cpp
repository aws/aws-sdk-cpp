/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ListedGatewayInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

ListedGatewayInstance::ListedGatewayInstance() : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayInstanceArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceState(InstanceState::NOT_SET),
    m_instanceStateHasBeenSet(false)
{
}

ListedGatewayInstance::ListedGatewayInstance(JsonView jsonValue) : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayInstanceArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceState(InstanceState::NOT_SET),
    m_instanceStateHasBeenSet(false)
{
  *this = jsonValue;
}

ListedGatewayInstance& ListedGatewayInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");

    m_gatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayInstanceArn"))
  {
    m_gatewayInstanceArn = jsonValue.GetString("gatewayInstanceArn");

    m_gatewayInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceState"))
  {
    m_instanceState = InstanceStateMapper::GetInstanceStateForName(jsonValue.GetString("instanceState"));

    m_instanceStateHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedGatewayInstance::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("gatewayArn", m_gatewayArn);

  }

  if(m_gatewayInstanceArnHasBeenSet)
  {
   payload.WithString("gatewayInstanceArn", m_gatewayInstanceArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_instanceStateHasBeenSet)
  {
   payload.WithString("instanceState", InstanceStateMapper::GetNameForInstanceState(m_instanceState));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
