/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NodeInterfaceMappingCreateRequest.h>
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

NodeInterfaceMappingCreateRequest::NodeInterfaceMappingCreateRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeInterfaceMappingCreateRequest& NodeInterfaceMappingCreateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logicalInterfaceName"))
  {
    m_logicalInterfaceName = jsonValue.GetString("logicalInterfaceName");
    m_logicalInterfaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkInterfaceMode"))
  {
    m_networkInterfaceMode = NetworkInterfaceModeMapper::GetNetworkInterfaceModeForName(jsonValue.GetString("networkInterfaceMode"));
    m_networkInterfaceModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("physicalInterfaceName"))
  {
    m_physicalInterfaceName = jsonValue.GetString("physicalInterfaceName");
    m_physicalInterfaceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeInterfaceMappingCreateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_logicalInterfaceNameHasBeenSet)
  {
   payload.WithString("logicalInterfaceName", m_logicalInterfaceName);

  }

  if(m_networkInterfaceModeHasBeenSet)
  {
   payload.WithString("networkInterfaceMode", NetworkInterfaceModeMapper::GetNameForNetworkInterfaceMode(m_networkInterfaceMode));
  }

  if(m_physicalInterfaceNameHasBeenSet)
  {
   payload.WithString("physicalInterfaceName", m_physicalInterfaceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
