/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StartTimecode.h>
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

StartTimecode::StartTimecode() : 
    m_timecodeHasBeenSet(false)
{
}

StartTimecode::StartTimecode(JsonView jsonValue) : 
    m_timecodeHasBeenSet(false)
{
  *this = jsonValue;
}

StartTimecode& StartTimecode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timecode"))
  {
    m_timecode = jsonValue.GetString("timecode");

    m_timecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTimecode::Jsonize() const
{
  JsonValue payload;

  if(m_timecodeHasBeenSet)
  {
   payload.WithString("timecode", m_timecode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
