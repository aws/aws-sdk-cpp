/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/PropagatingVgwSetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

PropagatingVgwSetDetails::PropagatingVgwSetDetails() : 
    m_gatewayIdHasBeenSet(false)
{
}

PropagatingVgwSetDetails::PropagatingVgwSetDetails(JsonView jsonValue) : 
    m_gatewayIdHasBeenSet(false)
{
  *this = jsonValue;
}

PropagatingVgwSetDetails& PropagatingVgwSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PropagatingVgwSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
