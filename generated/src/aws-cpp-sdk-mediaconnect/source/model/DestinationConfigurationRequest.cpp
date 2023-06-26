/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DestinationConfigurationRequest.h>
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

DestinationConfigurationRequest::DestinationConfigurationRequest() : 
    m_destinationIpHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_interfaceHasBeenSet(false)
{
}

DestinationConfigurationRequest::DestinationConfigurationRequest(JsonView jsonValue) : 
    m_destinationIpHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_interfaceHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfigurationRequest& DestinationConfigurationRequest::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue DestinationConfigurationRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
