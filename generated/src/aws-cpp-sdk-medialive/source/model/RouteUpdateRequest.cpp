/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RouteUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

RouteUpdateRequest::RouteUpdateRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteUpdateRequest& RouteUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidr"))
  {
    m_cidr = jsonValue.GetString("cidr");
    m_cidrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gateway"))
  {
    m_gateway = jsonValue.GetString("gateway");
    m_gatewayHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("cidr", m_cidr);

  }

  if(m_gatewayHasBeenSet)
  {
   payload.WithString("gateway", m_gateway);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
