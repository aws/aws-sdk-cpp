/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/LockConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

LockConfiguration::LockConfiguration() : 
    m_unlockDelayHasBeenSet(false)
{
}

LockConfiguration::LockConfiguration(JsonView jsonValue) : 
    m_unlockDelayHasBeenSet(false)
{
  *this = jsonValue;
}

LockConfiguration& LockConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UnlockDelay"))
  {
    m_unlockDelay = jsonValue.GetObject("UnlockDelay");

    m_unlockDelayHasBeenSet = true;
  }

  return *this;
}

JsonValue LockConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_unlockDelayHasBeenSet)
  {
   payload.WithObject("UnlockDelay", m_unlockDelay.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
