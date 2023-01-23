/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/NetworkInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

NetworkInfo::NetworkInfo() : 
    m_interfaceNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_netMaskHasBeenSet(false)
{
}

NetworkInfo::NetworkInfo(JsonView jsonValue) : 
    m_interfaceNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_netMaskHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInfo& NetworkInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interfaceName"))
  {
    m_interfaceName = jsonValue.GetString("interfaceName");

    m_interfaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("netMask"))
  {
    m_netMask = jsonValue.GetString("netMask");

    m_netMaskHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInfo::Jsonize() const
{
  JsonValue payload;

  if(m_interfaceNameHasBeenSet)
  {
   payload.WithString("interfaceName", m_interfaceName);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("macAddress", m_macAddress);

  }

  if(m_netMaskHasBeenSet)
  {
   payload.WithString("netMask", m_netMask);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
