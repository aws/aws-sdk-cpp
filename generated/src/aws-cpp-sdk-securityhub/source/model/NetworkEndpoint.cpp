/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkEndpoint.h>
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

NetworkEndpoint::NetworkEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkEndpoint& NetworkEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");
    m_ipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetObject("Location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutonomousSystem"))
  {
    m_autonomousSystem = jsonValue.GetObject("AutonomousSystem");
    m_autonomousSystemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Connection"))
  {
    m_connection = jsonValue.GetObject("Connection");
    m_connectionHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  if(m_autonomousSystemHasBeenSet)
  {
   payload.WithObject("AutonomousSystem", m_autonomousSystem.Jsonize());

  }

  if(m_connectionHasBeenSet)
  {
   payload.WithObject("Connection", m_connection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
