/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/VpcEndpoint.h>
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

VpcEndpoint::VpcEndpoint() : 
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcOptionsHasBeenSet(false)
{
}

VpcEndpoint::VpcEndpoint(JsonView jsonValue) : 
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

VpcEndpoint& VpcEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcOptions"))
  {
    m_vpcOptions = jsonValue.GetObject("VpcOptions");

    m_vpcOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_vpcOptionsHasBeenSet)
  {
   payload.WithObject("VpcOptions", m_vpcOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
