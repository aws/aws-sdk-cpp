/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsId3SegmentTaggingScheduleActionSettings.h>
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

HlsId3SegmentTaggingScheduleActionSettings::HlsId3SegmentTaggingScheduleActionSettings() : 
    m_tagHasBeenSet(false)
{
}

HlsId3SegmentTaggingScheduleActionSettings::HlsId3SegmentTaggingScheduleActionSettings(JsonView jsonValue) : 
    m_tagHasBeenSet(false)
{
  *this = jsonValue;
}

HlsId3SegmentTaggingScheduleActionSettings& HlsId3SegmentTaggingScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tag"))
  {
    m_tag = jsonValue.GetString("tag");

    m_tagHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsId3SegmentTaggingScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_tagHasBeenSet)
  {
   payload.WithString("tag", m_tag);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
