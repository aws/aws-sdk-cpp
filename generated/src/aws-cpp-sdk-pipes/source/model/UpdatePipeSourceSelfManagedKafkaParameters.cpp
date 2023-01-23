/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/UpdatePipeSourceSelfManagedKafkaParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

UpdatePipeSourceSelfManagedKafkaParameters::UpdatePipeSourceSelfManagedKafkaParameters() : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_serverRootCaCertificateHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

UpdatePipeSourceSelfManagedKafkaParameters::UpdatePipeSourceSelfManagedKafkaParameters(JsonView jsonValue) : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_serverRootCaCertificateHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
  *this = jsonValue;
}

UpdatePipeSourceSelfManagedKafkaParameters& UpdatePipeSourceSelfManagedKafkaParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");

    m_credentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");

    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerRootCaCertificate"))
  {
    m_serverRootCaCertificate = jsonValue.GetString("ServerRootCaCertificate");

    m_serverRootCaCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vpc"))
  {
    m_vpc = jsonValue.GetObject("Vpc");

    m_vpcHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdatePipeSourceSelfManagedKafkaParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_serverRootCaCertificateHasBeenSet)
  {
   payload.WithString("ServerRootCaCertificate", m_serverRootCaCertificate);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("Vpc", m_vpc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
