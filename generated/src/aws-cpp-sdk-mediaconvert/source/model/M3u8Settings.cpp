/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M3u8Settings.h>
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

M3u8Settings::M3u8Settings() : 
    m_audioDuration(M3u8AudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_dataPTSControl(M3u8DataPtsControl::NOT_SET),
    m_dataPTSControlHasBeenSet(false),
    m_maxPcrInterval(0),
    m_maxPcrIntervalHasBeenSet(false),
    m_nielsenId3(M3u8NielsenId3::NOT_SET),
    m_nielsenId3HasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M3u8PcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPid(0),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPid(0),
    m_pmtPidHasBeenSet(false),
    m_privateMetadataPid(0),
    m_privateMetadataPidHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_scte35Pid(0),
    m_scte35PidHasBeenSet(false),
    m_scte35Source(M3u8Scte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_timedMetadata(TimedMetadata::NOT_SET),
    m_timedMetadataHasBeenSet(false),
    m_timedMetadataPid(0),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPid(0),
    m_videoPidHasBeenSet(false)
{
}

M3u8Settings::M3u8Settings(JsonView jsonValue) : 
    m_audioDuration(M3u8AudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_dataPTSControl(M3u8DataPtsControl::NOT_SET),
    m_dataPTSControlHasBeenSet(false),
    m_maxPcrInterval(0),
    m_maxPcrIntervalHasBeenSet(false),
    m_nielsenId3(M3u8NielsenId3::NOT_SET),
    m_nielsenId3HasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M3u8PcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPid(0),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPid(0),
    m_pmtPidHasBeenSet(false),
    m_privateMetadataPid(0),
    m_privateMetadataPidHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_scte35Pid(0),
    m_scte35PidHasBeenSet(false),
    m_scte35Source(M3u8Scte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_timedMetadata(TimedMetadata::NOT_SET),
    m_timedMetadataHasBeenSet(false),
    m_timedMetadataPid(0),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPid(0),
    m_videoPidHasBeenSet(false)
{
  *this = jsonValue;
}

M3u8Settings& M3u8Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDuration"))
  {
    m_audioDuration = M3u8AudioDurationMapper::GetM3u8AudioDurationForName(jsonValue.GetString("audioDuration"));

    m_audioDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioFramesPerPes"))
  {
    m_audioFramesPerPes = jsonValue.GetInteger("audioFramesPerPes");

    m_audioFramesPerPesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioPids"))
  {
    Aws::Utils::Array<JsonView> audioPidsJsonList = jsonValue.GetArray("audioPids");
    for(unsigned audioPidsIndex = 0; audioPidsIndex < audioPidsJsonList.GetLength(); ++audioPidsIndex)
    {
      m_audioPids.push_back(audioPidsJsonList[audioPidsIndex].AsInteger());
    }
    m_audioPidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataPTSControl"))
  {
    m_dataPTSControl = M3u8DataPtsControlMapper::GetM3u8DataPtsControlForName(jsonValue.GetString("dataPTSControl"));

    m_dataPTSControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxPcrInterval"))
  {
    m_maxPcrInterval = jsonValue.GetInteger("maxPcrInterval");

    m_maxPcrIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenId3"))
  {
    m_nielsenId3 = M3u8NielsenId3Mapper::GetM3u8NielsenId3ForName(jsonValue.GetString("nielsenId3"));

    m_nielsenId3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("patInterval"))
  {
    m_patInterval = jsonValue.GetInteger("patInterval");

    m_patIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrControl"))
  {
    m_pcrControl = M3u8PcrControlMapper::GetM3u8PcrControlForName(jsonValue.GetString("pcrControl"));

    m_pcrControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrPid"))
  {
    m_pcrPid = jsonValue.GetInteger("pcrPid");

    m_pcrPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtInterval"))
  {
    m_pmtInterval = jsonValue.GetInteger("pmtInterval");

    m_pmtIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtPid"))
  {
    m_pmtPid = jsonValue.GetInteger("pmtPid");

    m_pmtPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateMetadataPid"))
  {
    m_privateMetadataPid = jsonValue.GetInteger("privateMetadataPid");

    m_privateMetadataPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Pid"))
  {
    m_scte35Pid = jsonValue.GetInteger("scte35Pid");

    m_scte35PidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = M3u8Scte35SourceMapper::GetM3u8Scte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadata"))
  {
    m_timedMetadata = TimedMetadataMapper::GetTimedMetadataForName(jsonValue.GetString("timedMetadata"));

    m_timedMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataPid"))
  {
    m_timedMetadataPid = jsonValue.GetInteger("timedMetadataPid");

    m_timedMetadataPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamId"))
  {
    m_transportStreamId = jsonValue.GetInteger("transportStreamId");

    m_transportStreamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoPid"))
  {
    m_videoPid = jsonValue.GetInteger("videoPid");

    m_videoPidHasBeenSet = true;
  }

  return *this;
}

JsonValue M3u8Settings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDurationHasBeenSet)
  {
   payload.WithString("audioDuration", M3u8AudioDurationMapper::GetNameForM3u8AudioDuration(m_audioDuration));
  }

  if(m_audioFramesPerPesHasBeenSet)
  {
   payload.WithInteger("audioFramesPerPes", m_audioFramesPerPes);

  }

  if(m_audioPidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioPidsJsonList(m_audioPids.size());
   for(unsigned audioPidsIndex = 0; audioPidsIndex < audioPidsJsonList.GetLength(); ++audioPidsIndex)
   {
     audioPidsJsonList[audioPidsIndex].AsInteger(m_audioPids[audioPidsIndex]);
   }
   payload.WithArray("audioPids", std::move(audioPidsJsonList));

  }

  if(m_dataPTSControlHasBeenSet)
  {
   payload.WithString("dataPTSControl", M3u8DataPtsControlMapper::GetNameForM3u8DataPtsControl(m_dataPTSControl));
  }

  if(m_maxPcrIntervalHasBeenSet)
  {
   payload.WithInteger("maxPcrInterval", m_maxPcrInterval);

  }

  if(m_nielsenId3HasBeenSet)
  {
   payload.WithString("nielsenId3", M3u8NielsenId3Mapper::GetNameForM3u8NielsenId3(m_nielsenId3));
  }

  if(m_patIntervalHasBeenSet)
  {
   payload.WithInteger("patInterval", m_patInterval);

  }

  if(m_pcrControlHasBeenSet)
  {
   payload.WithString("pcrControl", M3u8PcrControlMapper::GetNameForM3u8PcrControl(m_pcrControl));
  }

  if(m_pcrPidHasBeenSet)
  {
   payload.WithInteger("pcrPid", m_pcrPid);

  }

  if(m_pmtIntervalHasBeenSet)
  {
   payload.WithInteger("pmtInterval", m_pmtInterval);

  }

  if(m_pmtPidHasBeenSet)
  {
   payload.WithInteger("pmtPid", m_pmtPid);

  }

  if(m_privateMetadataPidHasBeenSet)
  {
   payload.WithInteger("privateMetadataPid", m_privateMetadataPid);

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_scte35PidHasBeenSet)
  {
   payload.WithInteger("scte35Pid", m_scte35Pid);

  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", M3u8Scte35SourceMapper::GetNameForM3u8Scte35Source(m_scte35Source));
  }

  if(m_timedMetadataHasBeenSet)
  {
   payload.WithString("timedMetadata", TimedMetadataMapper::GetNameForTimedMetadata(m_timedMetadata));
  }

  if(m_timedMetadataPidHasBeenSet)
  {
   payload.WithInteger("timedMetadataPid", m_timedMetadataPid);

  }

  if(m_transportStreamIdHasBeenSet)
  {
   payload.WithInteger("transportStreamId", m_transportStreamId);

  }

  if(m_videoPidHasBeenSet)
  {
   payload.WithInteger("videoPid", m_videoPid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
