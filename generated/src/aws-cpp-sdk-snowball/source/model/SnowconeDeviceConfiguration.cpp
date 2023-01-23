/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/SnowconeDeviceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

SnowconeDeviceConfiguration::SnowconeDeviceConfiguration() : 
    m_wirelessConnectionHasBeenSet(false)
{
}

SnowconeDeviceConfiguration::SnowconeDeviceConfiguration(JsonView jsonValue) : 
    m_wirelessConnectionHasBeenSet(false)
{
  *this = jsonValue;
}

SnowconeDeviceConfiguration& SnowconeDeviceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WirelessConnection"))
  {
    m_wirelessConnection = jsonValue.GetObject("WirelessConnection");

    m_wirelessConnectionHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowconeDeviceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_wirelessConnectionHasBeenSet)
  {
   payload.WithObject("WirelessConnection", m_wirelessConnection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
