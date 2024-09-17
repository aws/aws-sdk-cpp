/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MonitoringConfig.h>
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

MonitoringConfig::MonitoringConfig() : 
    m_thumbnailState(ThumbnailState::NOT_SET),
    m_thumbnailStateHasBeenSet(false)
{
}

MonitoringConfig::MonitoringConfig(JsonView jsonValue)
  : MonitoringConfig()
{
  *this = jsonValue;
}

MonitoringConfig& MonitoringConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thumbnailState"))
  {
    m_thumbnailState = ThumbnailStateMapper::GetThumbnailStateForName(jsonValue.GetString("thumbnailState"));

    m_thumbnailStateHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringConfig::Jsonize() const
{
  JsonValue payload;

  if(m_thumbnailStateHasBeenSet)
  {
   payload.WithString("thumbnailState", ThumbnailStateMapper::GetNameForThumbnailState(m_thumbnailState));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
