/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

DestinationConfiguration::DestinationConfiguration() : 
    m_destinationIpHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_outboundIpHasBeenSet(false)
{
}

DestinationConfiguration::DestinationConfiguration(JsonView jsonValue) : 
    m_destinationIpHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_outboundIpHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfiguration& DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationIp"))
  {
    m_destinationIp = jsonValue.GetString("destinationIp");

    m_destinationIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationPort"))
  {
    m_destinationPort = jsonValue.GetInteger("destinationPort");

    m_destinationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interface"))
  {
    m_interface = jsonValue.GetObject("interface");

    m_interfaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outboundIp"))
  {
    m_outboundIp = jsonValue.GetString("outboundIp");

    m_outboundIpHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationIpHasBeenSet)
  {
   payload.WithString("destinationIp", m_destinationIp);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithInteger("destinationPort", m_destinationPort);

  }

  if(m_interfaceHasBeenSet)
  {
   payload.WithObject("interface", m_interface.Jsonize());

  }

  if(m_outboundIpHasBeenSet)
  {
   payload.WithString("outboundIp", m_outboundIp);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
