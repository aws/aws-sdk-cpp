/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Id3Insertion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Id3Insertion::Id3Insertion() : 
    m_id3HasBeenSet(false),
    m_timecodeHasBeenSet(false)
{
}

Id3Insertion::Id3Insertion(JsonView jsonValue) : 
    m_id3HasBeenSet(false),
    m_timecodeHasBeenSet(false)
{
  *this = jsonValue;
}

Id3Insertion& Id3Insertion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id3"))
  {
    m_id3 = jsonValue.GetString("id3");

    m_id3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecode"))
  {
    m_timecode = jsonValue.GetString("timecode");

    m_timecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue Id3Insertion::Jsonize() const
{
  JsonValue payload;

  if(m_id3HasBeenSet)
  {
   payload.WithString("id3", m_id3);

  }

  if(m_timecodeHasBeenSet)
  {
   payload.WithString("timecode", m_timecode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
