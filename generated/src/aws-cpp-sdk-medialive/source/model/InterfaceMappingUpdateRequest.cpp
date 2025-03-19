/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InterfaceMappingUpdateRequest.h>
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

InterfaceMappingUpdateRequest::InterfaceMappingUpdateRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InterfaceMappingUpdateRequest& InterfaceMappingUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logicalInterfaceName"))
  {
    m_logicalInterfaceName = jsonValue.GetString("logicalInterfaceName");
    m_logicalInterfaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkId"))
  {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InterfaceMappingUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_logicalInterfaceNameHasBeenSet)
  {
   payload.WithString("logicalInterfaceName", m_logicalInterfaceName);

  }

  if(m_networkIdHasBeenSet)
  {
   payload.WithString("networkId", m_networkId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
