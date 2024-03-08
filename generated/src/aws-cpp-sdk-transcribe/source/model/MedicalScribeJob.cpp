/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeJob.h>
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

MedicalScribeJob::MedicalScribeJob() : 
    m_medicalScribeJobNameHasBeenSet(false),
    m_medicalScribeJobStatus(MedicalScribeJobStatus::NOT_SET),
    m_medicalScribeJobStatusHasBeenSet(false),
    m_languageCode(MedicalScribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_medicalScribeOutputHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_channelDefinitionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

MedicalScribeJob::MedicalScribeJob(JsonView jsonValue) : 
    m_medicalScribeJobNameHasBeenSet(false),
    m_medicalScribeJobStatus(MedicalScribeJobStatus::NOT_SET),
    m_medicalScribeJobStatusHasBeenSet(false),
    m_languageCode(MedicalScribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_medicalScribeOutputHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_channelDefinitionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalScribeJob& MedicalScribeJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MedicalScribeJobName"))
  {
    m_medicalScribeJobName = jsonValue.GetString("MedicalScribeJobName");

    m_medicalScribeJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MedicalScribeJobStatus"))
  {
    m_medicalScribeJobStatus = MedicalScribeJobStatusMapper::GetMedicalScribeJobStatusForName(jsonValue.GetString("MedicalScribeJobStatus"));

    m_medicalScribeJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Media"))
  {
    m_media = jsonValue.GetObject("Media");

    m_mediaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MedicalScribeOutput"))
  {
    m_medicalScribeOutput = jsonValue.GetObject("MedicalScribeOutput");

    m_medicalScribeOutputHasBeenSet = true;
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

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
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

JsonValue MedicalScribeJob::Jsonize() const
{
  JsonValue payload;

  if(m_medicalScribeJobNameHasBeenSet)
  {
   payload.WithString("MedicalScribeJobName", m_medicalScribeJobName);

  }

  if(m_medicalScribeJobStatusHasBeenSet)
  {
   payload.WithString("MedicalScribeJobStatus", MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(m_medicalScribeJobStatus));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode));
  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_medicalScribeOutputHasBeenSet)
  {
   payload.WithObject("MedicalScribeOutput", m_medicalScribeOutput.Jsonize());

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

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

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
