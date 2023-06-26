/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/GatewayNetwork.h>
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

GatewayNetwork::GatewayNetwork() : 
    m_cidrBlockHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

GatewayNetwork::GatewayNetwork(JsonView jsonValue) : 
    m_cidrBlockHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayNetwork& GatewayNetwork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("cidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayNetwork::Jsonize() const
{
  JsonValue payload;

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("cidrBlock", m_cidrBlock);

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
