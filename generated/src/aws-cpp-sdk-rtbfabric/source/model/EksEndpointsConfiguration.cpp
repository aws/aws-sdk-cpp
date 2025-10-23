/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/EksEndpointsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

EksEndpointsConfiguration::EksEndpointsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EksEndpointsConfiguration& EksEndpointsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpointsResourceName"))
  {
    m_endpointsResourceName = jsonValue.GetString("endpointsResourceName");
    m_endpointsResourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointsResourceNamespace"))
  {
    m_endpointsResourceNamespace = jsonValue.GetString("endpointsResourceNamespace");
    m_endpointsResourceNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterApiServerEndpointUri"))
  {
    m_clusterApiServerEndpointUri = jsonValue.GetString("clusterApiServerEndpointUri");
    m_clusterApiServerEndpointUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterApiServerCaCertificateChain"))
  {
    m_clusterApiServerCaCertificateChain = jsonValue.GetString("clusterApiServerCaCertificateChain");
    m_clusterApiServerCaCertificateChainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EksEndpointsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_endpointsResourceNameHasBeenSet)
  {
   payload.WithString("endpointsResourceName", m_endpointsResourceName);

  }

  if(m_endpointsResourceNamespaceHasBeenSet)
  {
   payload.WithString("endpointsResourceNamespace", m_endpointsResourceNamespace);

  }

  if(m_clusterApiServerEndpointUriHasBeenSet)
  {
   payload.WithString("clusterApiServerEndpointUri", m_clusterApiServerEndpointUri);

  }

  if(m_clusterApiServerCaCertificateChainHasBeenSet)
  {
   payload.WithString("clusterApiServerCaCertificateChain", m_clusterApiServerCaCertificateChain);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
