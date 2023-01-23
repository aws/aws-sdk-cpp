/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/VolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

VolumeConfiguration::VolumeConfiguration() : 
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false)
{
}

VolumeConfiguration::VolumeConfiguration(JsonView jsonValue) : 
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeConfiguration& VolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInteger("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throughput"))
  {
    m_throughput = jsonValue.GetInteger("throughput");

    m_throughputHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("iops", m_iops);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInteger("throughput", m_throughput);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
