/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AccessEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

AccessEndpoint::AccessEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessEndpoint& AccessEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessEndpointType"))
  {
    m_accessEndpointType = AccessEndpointTypeMapper::GetAccessEndpointTypeForName(jsonValue.GetString("AccessEndpointType"));
    m_accessEndpointTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_accessEndpointTypeHasBeenSet)
  {
   payload.WithString("AccessEndpointType", AccessEndpointTypeMapper::GetNameForAccessEndpointType(m_accessEndpointType));
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
