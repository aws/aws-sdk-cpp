/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/Command.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

Command::Command() : 
    m_rebootHasBeenSet(false),
    m_unlockHasBeenSet(false)
{
}

Command::Command(JsonView jsonValue) : 
    m_rebootHasBeenSet(false),
    m_unlockHasBeenSet(false)
{
  *this = jsonValue;
}

Command& Command::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reboot"))
  {
    m_reboot = jsonValue.GetObject("reboot");

    m_rebootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unlock"))
  {
    m_unlock = jsonValue.GetObject("unlock");

    m_unlockHasBeenSet = true;
  }

  return *this;
}

JsonValue Command::Jsonize() const
{
  JsonValue payload;

  if(m_rebootHasBeenSet)
  {
   payload.WithObject("reboot", m_reboot.Jsonize());

  }

  if(m_unlockHasBeenSet)
  {
   payload.WithObject("unlock", m_unlock.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
