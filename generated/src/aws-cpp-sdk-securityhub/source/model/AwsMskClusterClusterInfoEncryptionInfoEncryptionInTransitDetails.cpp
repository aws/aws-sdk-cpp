/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails.h>
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

AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails::AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails() : 
    m_inCluster(false),
    m_inClusterHasBeenSet(false),
    m_clientBrokerHasBeenSet(false)
{
}

AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails::AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails(JsonView jsonValue) : 
    m_inCluster(false),
    m_inClusterHasBeenSet(false),
    m_clientBrokerHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails& AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InCluster"))
  {
    m_inCluster = jsonValue.GetBool("InCluster");

    m_inClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientBroker"))
  {
    m_clientBroker = jsonValue.GetString("ClientBroker");

    m_clientBrokerHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterClusterInfoEncryptionInfoEncryptionInTransitDetails::Jsonize() const
{
  JsonValue payload;

  if(m_inClusterHasBeenSet)
  {
   payload.WithBool("InCluster", m_inCluster);

  }

  if(m_clientBrokerHasBeenSet)
  {
   payload.WithString("ClientBroker", m_clientBroker);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
