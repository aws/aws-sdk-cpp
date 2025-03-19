/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeviceStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DeviceStats::DeviceStats(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceStats& DeviceStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectedDeviceCount"))
  {
    m_connectedDeviceCount = jsonValue.GetInt64("ConnectedDeviceCount");
    m_connectedDeviceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegisteredDeviceCount"))
  {
    m_registeredDeviceCount = jsonValue.GetInt64("RegisteredDeviceCount");
    m_registeredDeviceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceStats::Jsonize() const
{
  JsonValue payload;

  if(m_connectedDeviceCountHasBeenSet)
  {
   payload.WithInt64("ConnectedDeviceCount", m_connectedDeviceCount);

  }

  if(m_registeredDeviceCountHasBeenSet)
  {
   payload.WithInt64("RegisteredDeviceCount", m_registeredDeviceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
