/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkNetworkFunctionGroupIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CoreNetworkNetworkFunctionGroupIdentifier::CoreNetworkNetworkFunctionGroupIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

CoreNetworkNetworkFunctionGroupIdentifier& CoreNetworkNetworkFunctionGroupIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");
    m_coreNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkFunctionGroupName"))
  {
    m_networkFunctionGroupName = jsonValue.GetString("NetworkFunctionGroupName");
    m_networkFunctionGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");
    m_edgeLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue CoreNetworkNetworkFunctionGroupIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_networkFunctionGroupNameHasBeenSet)
  {
   payload.WithString("NetworkFunctionGroupName", m_networkFunctionGroupName);

  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
