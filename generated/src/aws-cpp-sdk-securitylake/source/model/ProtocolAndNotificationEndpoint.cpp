/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ProtocolAndNotificationEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

ProtocolAndNotificationEndpoint::ProtocolAndNotificationEndpoint() : 
    m_endpointHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

ProtocolAndNotificationEndpoint::ProtocolAndNotificationEndpoint(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

ProtocolAndNotificationEndpoint& ProtocolAndNotificationEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = jsonValue.GetString("protocol");

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtocolAndNotificationEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", m_protocol);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
