/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/CpuOptions.h>
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

CpuOptions::CpuOptions() : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

CpuOptions::CpuOptions(JsonView jsonValue) : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
  *this = jsonValue;
}

CpuOptions& CpuOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("coreCount"))
  {
    m_coreCount = jsonValue.GetInteger("coreCount");

    m_coreCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("threadsPerCore");

    m_threadsPerCoreHasBeenSet = true;
  }

  return *this;
}

JsonValue CpuOptions::Jsonize() const
{
  JsonValue payload;

  if(m_coreCountHasBeenSet)
  {
   payload.WithInteger("coreCount", m_coreCount);

  }

  if(m_threadsPerCoreHasBeenSet)
  {
   payload.WithInteger("threadsPerCore", m_threadsPerCore);

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
