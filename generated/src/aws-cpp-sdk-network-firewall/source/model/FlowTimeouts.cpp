/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FlowTimeouts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

FlowTimeouts::FlowTimeouts(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTimeouts& FlowTimeouts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TcpIdleTimeoutSeconds"))
  {
    m_tcpIdleTimeoutSeconds = jsonValue.GetInteger("TcpIdleTimeoutSeconds");
    m_tcpIdleTimeoutSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTimeouts::Jsonize() const
{
  JsonValue payload;

  if(m_tcpIdleTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("TcpIdleTimeoutSeconds", m_tcpIdleTimeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
