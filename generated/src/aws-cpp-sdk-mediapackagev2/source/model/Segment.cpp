/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/Segment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

Segment::Segment() : 
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_tsUseAudioRenditionGroup(false),
    m_tsUseAudioRenditionGroupHasBeenSet(false),
    m_includeIframeOnlyStreams(false),
    m_includeIframeOnlyStreamsHasBeenSet(false),
    m_tsIncludeDvbSubtitles(false),
    m_tsIncludeDvbSubtitlesHasBeenSet(false),
    m_scteHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

Segment::Segment(JsonView jsonValue) : 
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_tsUseAudioRenditionGroup(false),
    m_tsUseAudioRenditionGroupHasBeenSet(false),
    m_includeIframeOnlyStreams(false),
    m_includeIframeOnlyStreamsHasBeenSet(false),
    m_tsIncludeDvbSubtitles(false),
    m_tsIncludeDvbSubtitlesHasBeenSet(false),
    m_scteHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

Segment& Segment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("SegmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TsUseAudioRenditionGroup"))
  {
    m_tsUseAudioRenditionGroup = jsonValue.GetBool("TsUseAudioRenditionGroup");

    m_tsUseAudioRenditionGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeIframeOnlyStreams"))
  {
    m_includeIframeOnlyStreams = jsonValue.GetBool("IncludeIframeOnlyStreams");

    m_includeIframeOnlyStreamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TsIncludeDvbSubtitles"))
  {
    m_tsIncludeDvbSubtitles = jsonValue.GetBool("TsIncludeDvbSubtitles");

    m_tsIncludeDvbSubtitlesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scte"))
  {
    m_scte = jsonValue.GetObject("Scte");

    m_scteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Segment::Jsonize() const
{
  JsonValue payload;

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("SegmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  if(m_tsUseAudioRenditionGroupHasBeenSet)
  {
   payload.WithBool("TsUseAudioRenditionGroup", m_tsUseAudioRenditionGroup);

  }

  if(m_includeIframeOnlyStreamsHasBeenSet)
  {
   payload.WithBool("IncludeIframeOnlyStreams", m_includeIframeOnlyStreams);

  }

  if(m_tsIncludeDvbSubtitlesHasBeenSet)
  {
   payload.WithBool("TsIncludeDvbSubtitles", m_tsIncludeDvbSubtitles);

  }

  if(m_scteHasBeenSet)
  {
   payload.WithObject("Scte", m_scte.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
