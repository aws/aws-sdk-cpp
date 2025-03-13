/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

CallAnalyticsJob::CallAnalyticsJob(JsonView jsonValue)
{
  *this = jsonValue;
}

CallAnalyticsJob& CallAnalyticsJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CallAnalyticsJobName"))
  {
    m_callAnalyticsJobName = jsonValue.GetString("CallAnalyticsJobName");
    m_callAnalyticsJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CallAnalyticsJobStatus"))
  {
    m_callAnalyticsJobStatus = CallAnalyticsJobStatusMapper::GetCallAnalyticsJobStatusForName(jsonValue.GetString("CallAnalyticsJobStatus"));
    m_callAnalyticsJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CallAnalyticsJobDetails"))
  {
    m_callAnalyticsJobDetails = jsonValue.GetObject("CallAnalyticsJobDetails");
    m_callAnalyticsJobDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaSampleRateHertz"))
  {
    m_mediaSampleRateHertz = jsonValue.GetInteger("MediaSampleRateHertz");
    m_mediaSampleRateHertzHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaFormat"))
  {
    m_mediaFormat = MediaFormatMapper::GetMediaFormatForName(jsonValue.GetString("MediaFormat"));
    m_mediaFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Media"))
  {
    m_media = jsonValue.GetObject("Media");
    m_mediaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");
    m_transcriptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");
    m_dataAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentifiedLanguageScore"))
  {
    m_identifiedLanguageScore = jsonValue.GetDouble("IdentifiedLanguageScore");
    m_identifiedLanguageScoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");
    m_settingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelDefinitions"))
  {
    Aws::Utils::Array<JsonView> channelDefinitionsJsonList = jsonValue.GetArray("ChannelDefinitions");
    for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
    {
      m_channelDefinitions.push_back(channelDefinitionsJsonList[channelDefinitionsIndex].AsObject());
    }
    m_channelDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue CallAnalyticsJob::Jsonize() const
{
  JsonValue payload;

  if(m_callAnalyticsJobNameHasBeenSet)
  {
   payload.WithString("CallAnalyticsJobName", m_callAnalyticsJobName);

  }

  if(m_callAnalyticsJobStatusHasBeenSet)
  {
   payload.WithString("CallAnalyticsJobStatus", CallAnalyticsJobStatusMapper::GetNameForCallAnalyticsJobStatus(m_callAnalyticsJobStatus));
  }

  if(m_callAnalyticsJobDetailsHasBeenSet)
  {
   payload.WithObject("CallAnalyticsJobDetails", m_callAnalyticsJobDetails.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
   payload.WithInteger("MediaSampleRateHertz", m_mediaSampleRateHertz);

  }

  if(m_mediaFormatHasBeenSet)
  {
   payload.WithString("MediaFormat", MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat));
  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("Transcript", m_transcript.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_identifiedLanguageScoreHasBeenSet)
  {
   payload.WithDouble("IdentifiedLanguageScore", m_identifiedLanguageScore);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_channelDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
   for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
   {
     channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ChannelDefinitions", std::move(channelDefinitionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
