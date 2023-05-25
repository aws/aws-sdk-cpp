/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/Capacity.h>
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

Capacity::Capacity() : 
    m_available(0),
    m_availableHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false)
{
}

Capacity::Capacity(JsonView jsonValue) : 
    m_available(0),
    m_availableHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false)
{
  *this = jsonValue;
}

Capacity& Capacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("available"))
  {
    m_available = jsonValue.GetInt64("available");

    m_availableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInt64("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("used"))
  {
    m_used = jsonValue.GetInt64("used");

    m_usedHasBeenSet = true;
  }

  return *this;
}

JsonValue Capacity::Jsonize() const
{
  JsonValue payload;

  if(m_availableHasBeenSet)
  {
   payload.WithInt64("available", m_available);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInt64("total", m_total);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  if(m_usedHasBeenSet)
  {
   payload.WithInt64("used", m_used);

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
