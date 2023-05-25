/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMountPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsMountPoint::AwsMountPoint() : 
    m_sourceVolumeHasBeenSet(false),
    m_containerPathHasBeenSet(false)
{
}

AwsMountPoint::AwsMountPoint(JsonView jsonValue) : 
    m_sourceVolumeHasBeenSet(false),
    m_containerPathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMountPoint& AwsMountPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceVolume"))
  {
    m_sourceVolume = jsonValue.GetString("SourceVolume");

    m_sourceVolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerPath"))
  {
    m_containerPath = jsonValue.GetString("ContainerPath");

    m_containerPathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMountPoint::Jsonize() const
{
  JsonValue payload;

  if(m_sourceVolumeHasBeenSet)
  {
   payload.WithString("SourceVolume", m_sourceVolume);

  }

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("ContainerPath", m_containerPath);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
