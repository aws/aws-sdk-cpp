/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDestination::InputDestination() : 
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

InputDestination::InputDestination(JsonView jsonValue) : 
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
  *this = jsonValue;
}

InputDestination& InputDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ip"))
  {
    m_ip = jsonValue.GetString("ip");

    m_ipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetString("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetObject("vpc");

    m_vpcHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDestination::Jsonize() const
{
  JsonValue payload;

  if(m_ipHasBeenSet)
  {
   payload.WithString("ip", m_ip);

  }

  if(m_portHasBeenSet)
  {
   payload.WithString("port", m_port);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
