/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/NdiConfig.h>
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

NdiConfig::NdiConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

NdiConfig& NdiConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ndiState"))
  {
    m_ndiState = NdiStateMapper::GetNdiStateForName(jsonValue.GetString("ndiState"));
    m_ndiStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("machineName"))
  {
    m_machineName = jsonValue.GetString("machineName");
    m_machineNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ndiDiscoveryServers"))
  {
    Aws::Utils::Array<JsonView> ndiDiscoveryServersJsonList = jsonValue.GetArray("ndiDiscoveryServers");
    for(unsigned ndiDiscoveryServersIndex = 0; ndiDiscoveryServersIndex < ndiDiscoveryServersJsonList.GetLength(); ++ndiDiscoveryServersIndex)
    {
      m_ndiDiscoveryServers.push_back(ndiDiscoveryServersJsonList[ndiDiscoveryServersIndex].AsObject());
    }
    m_ndiDiscoveryServersHasBeenSet = true;
  }
  return *this;
}

JsonValue NdiConfig::Jsonize() const
{
  JsonValue payload;

  if(m_ndiStateHasBeenSet)
  {
   payload.WithString("ndiState", NdiStateMapper::GetNameForNdiState(m_ndiState));
  }

  if(m_machineNameHasBeenSet)
  {
   payload.WithString("machineName", m_machineName);

  }

  if(m_ndiDiscoveryServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ndiDiscoveryServersJsonList(m_ndiDiscoveryServers.size());
   for(unsigned ndiDiscoveryServersIndex = 0; ndiDiscoveryServersIndex < ndiDiscoveryServersJsonList.GetLength(); ++ndiDiscoveryServersIndex)
   {
     ndiDiscoveryServersJsonList[ndiDiscoveryServersIndex].AsObject(m_ndiDiscoveryServers[ndiDiscoveryServersIndex].Jsonize());
   }
   payload.WithArray("ndiDiscoveryServers", std::move(ndiDiscoveryServersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
