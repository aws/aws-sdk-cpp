/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/ConnectionTrackingSpecificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

ConnectionTrackingSpecificationRequest::ConnectionTrackingSpecificationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionTrackingSpecificationRequest& ConnectionTrackingSpecificationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TcpEstablishedTimeout"))
  {
    m_tcpEstablishedTimeout = jsonValue.GetInteger("TcpEstablishedTimeout");
    m_tcpEstablishedTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UdpStreamTimeout"))
  {
    m_udpStreamTimeout = jsonValue.GetInteger("UdpStreamTimeout");
    m_udpStreamTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UdpTimeout"))
  {
    m_udpTimeout = jsonValue.GetInteger("UdpTimeout");
    m_udpTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionTrackingSpecificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_tcpEstablishedTimeoutHasBeenSet)
  {
   payload.WithInteger("TcpEstablishedTimeout", m_tcpEstablishedTimeout);

  }

  if(m_udpStreamTimeoutHasBeenSet)
  {
   payload.WithInteger("UdpStreamTimeout", m_udpStreamTimeout);

  }

  if(m_udpTimeoutHasBeenSet)
  {
   payload.WithInteger("UdpTimeout", m_udpTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
