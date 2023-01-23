/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerListener.h>
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

AwsElbLoadBalancerListener::AwsElbLoadBalancerListener() : 
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_instanceProtocolHasBeenSet(false),
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sslCertificateIdHasBeenSet(false)
{
}

AwsElbLoadBalancerListener::AwsElbLoadBalancerListener(JsonView jsonValue) : 
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_instanceProtocolHasBeenSet(false),
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sslCertificateIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerListener& AwsElbLoadBalancerListener::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstancePort"))
  {
    m_instancePort = jsonValue.GetInteger("InstancePort");

    m_instancePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProtocol"))
  {
    m_instanceProtocol = jsonValue.GetString("InstanceProtocol");

    m_instanceProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancerPort"))
  {
    m_loadBalancerPort = jsonValue.GetInteger("LoadBalancerPort");

    m_loadBalancerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslCertificateId"))
  {
    m_sslCertificateId = jsonValue.GetString("SslCertificateId");

    m_sslCertificateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerListener::Jsonize() const
{
  JsonValue payload;

  if(m_instancePortHasBeenSet)
  {
   payload.WithInteger("InstancePort", m_instancePort);

  }

  if(m_instanceProtocolHasBeenSet)
  {
   payload.WithString("InstanceProtocol", m_instanceProtocol);

  }

  if(m_loadBalancerPortHasBeenSet)
  {
   payload.WithInteger("LoadBalancerPort", m_loadBalancerPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_sslCertificateIdHasBeenSet)
  {
   payload.WithString("SslCertificateId", m_sslCertificateId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
