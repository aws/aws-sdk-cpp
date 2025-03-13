/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Id3SegmentTaggingScheduleActionSettings.h>
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

Id3SegmentTaggingScheduleActionSettings::Id3SegmentTaggingScheduleActionSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

Id3SegmentTaggingScheduleActionSettings& Id3SegmentTaggingScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id3"))
  {
    m_id3 = jsonValue.GetString("id3");
    m_id3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("tag"))
  {
    m_tag = jsonValue.GetString("tag");
    m_tagHasBeenSet = true;
  }
  return *this;
}

JsonValue Id3SegmentTaggingScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_id3HasBeenSet)
  {
   payload.WithString("id3", m_id3);

  }

  if(m_tagHasBeenSet)
  {
   payload.WithString("tag", m_tag);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
