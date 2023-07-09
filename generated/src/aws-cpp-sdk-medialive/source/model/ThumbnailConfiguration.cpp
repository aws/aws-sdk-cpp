/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ThumbnailConfiguration.h>
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

ThumbnailConfiguration::ThumbnailConfiguration() : 
    m_state(ThumbnailState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ThumbnailConfiguration::ThumbnailConfiguration(JsonView jsonValue) : 
    m_state(ThumbnailState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ThumbnailConfiguration& ThumbnailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = ThumbnailStateMapper::GetThumbnailStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ThumbnailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ThumbnailStateMapper::GetNameForThumbnailState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
