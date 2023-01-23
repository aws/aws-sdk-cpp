/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeFabricLogPublishingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NodeFabricLogPublishingConfiguration::NodeFabricLogPublishingConfiguration() : 
    m_chaincodeLogsHasBeenSet(false),
    m_peerLogsHasBeenSet(false)
{
}

NodeFabricLogPublishingConfiguration::NodeFabricLogPublishingConfiguration(JsonView jsonValue) : 
    m_chaincodeLogsHasBeenSet(false),
    m_peerLogsHasBeenSet(false)
{
  *this = jsonValue;
}

NodeFabricLogPublishingConfiguration& NodeFabricLogPublishingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChaincodeLogs"))
  {
    m_chaincodeLogs = jsonValue.GetObject("ChaincodeLogs");

    m_chaincodeLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerLogs"))
  {
    m_peerLogs = jsonValue.GetObject("PeerLogs");

    m_peerLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeFabricLogPublishingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_chaincodeLogsHasBeenSet)
  {
   payload.WithObject("ChaincodeLogs", m_chaincodeLogs.Jsonize());

  }

  if(m_peerLogsHasBeenSet)
  {
   payload.WithObject("PeerLogs", m_peerLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
