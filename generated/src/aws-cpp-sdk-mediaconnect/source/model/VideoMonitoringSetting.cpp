/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/VideoMonitoringSetting.h>
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

VideoMonitoringSetting::VideoMonitoringSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoMonitoringSetting& VideoMonitoringSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blackFrames"))
  {
    m_blackFrames = jsonValue.GetObject("blackFrames");
    m_blackFramesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frozenFrames"))
  {
    m_frozenFrames = jsonValue.GetObject("frozenFrames");
    m_frozenFramesHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoMonitoringSetting::Jsonize() const
{
  JsonValue payload;

  if(m_blackFramesHasBeenSet)
  {
   payload.WithObject("blackFrames", m_blackFrames.Jsonize());

  }

  if(m_frozenFramesHasBeenSet)
  {
   payload.WithObject("frozenFrames", m_frozenFrames.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
