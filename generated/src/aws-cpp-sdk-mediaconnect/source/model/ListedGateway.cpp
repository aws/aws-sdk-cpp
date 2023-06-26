/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ListedGateway.h>
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

ListedGateway::ListedGateway() : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayState(GatewayState::NOT_SET),
    m_gatewayStateHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ListedGateway::ListedGateway(JsonView jsonValue) : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayState(GatewayState::NOT_SET),
    m_gatewayStateHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ListedGateway& ListedGateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");

    m_gatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayState"))
  {
    m_gatewayState = GatewayStateMapper::GetGatewayStateForName(jsonValue.GetString("gatewayState"));

    m_gatewayStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedGateway::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("gatewayArn", m_gatewayArn);

  }

  if(m_gatewayStateHasBeenSet)
  {
   payload.WithString("gatewayState", GatewayStateMapper::GetNameForGatewayState(m_gatewayState));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
