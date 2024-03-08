/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoDetails.h>
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

AwsMskClusterClusterInfoDetails::AwsMskClusterClusterInfoDetails() : 
    m_encryptionInfoHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clientAuthenticationHasBeenSet(false),
    m_enhancedMonitoringHasBeenSet(false)
{
}

AwsMskClusterClusterInfoDetails::AwsMskClusterClusterInfoDetails(JsonView jsonValue) : 
    m_encryptionInfoHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clientAuthenticationHasBeenSet(false),
    m_enhancedMonitoringHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoDetails& AwsMskClusterClusterInfoDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionInfo"))
  {
    m_encryptionInfo = jsonValue.GetObject("EncryptionInfo");

    m_encryptionInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentVersion"))
  {
    m_currentVersion = jsonValue.GetString("CurrentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfBrokerNodes"))
  {
    m_numberOfBrokerNodes = jsonValue.GetInteger("NumberOfBrokerNodes");

    m_numberOfBrokerNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientAuthentication"))
  {
    m_clientAuthentication = jsonValue.GetObject("ClientAuthentication");

    m_clientAuthenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnhancedMonitoring"))
  {
    m_enhancedMonitoring = jsonValue.GetString("EnhancedMonitoring");

    m_enhancedMonitoringHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterClusterInfoDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionInfoHasBeenSet)
  {
   payload.WithObject("EncryptionInfo", m_encryptionInfo.Jsonize());

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  if(m_numberOfBrokerNodesHasBeenSet)
  {
   payload.WithInteger("NumberOfBrokerNodes", m_numberOfBrokerNodes);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_clientAuthenticationHasBeenSet)
  {
   payload.WithObject("ClientAuthentication", m_clientAuthentication.Jsonize());

  }

  if(m_enhancedMonitoringHasBeenSet)
  {
   payload.WithString("EnhancedMonitoring", m_enhancedMonitoring);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
