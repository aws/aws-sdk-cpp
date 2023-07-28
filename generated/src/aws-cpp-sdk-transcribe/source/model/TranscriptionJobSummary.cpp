﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/TranscriptionJobSummary.h>
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

TranscriptionJobSummary::TranscriptionJobSummary() : 
    m_transcriptionJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_outputLocationType(OutputLocationType::NOT_SET),
    m_outputLocationTypeHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_modelSettingsHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_identifiedLanguageScore(0.0),
    m_identifiedLanguageScoreHasBeenSet(false),
    m_languageCodesHasBeenSet(false),
    m_toxicityDetectionHasBeenSet(false)
{
}

TranscriptionJobSummary::TranscriptionJobSummary(JsonView jsonValue) : 
    m_transcriptionJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_outputLocationType(OutputLocationType::NOT_SET),
    m_outputLocationTypeHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_modelSettingsHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_identifiedLanguageScore(0.0),
    m_identifiedLanguageScoreHasBeenSet(false),
    m_languageCodesHasBeenSet(false),
    m_toxicityDetectionHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptionJobSummary& TranscriptionJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptionJobName"))
  {
    m_transcriptionJobName = jsonValue.GetString("TranscriptionJobName");

    m_transcriptionJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscriptionJobStatus"))
  {
    m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(jsonValue.GetString("TranscriptionJobStatus"));

    m_transcriptionJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputLocationType"))
  {
    m_outputLocationType = OutputLocationTypeMapper::GetOutputLocationTypeForName(jsonValue.GetString("OutputLocationType"));

    m_outputLocationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedaction"))
  {
    m_contentRedaction = jsonValue.GetObject("ContentRedaction");

    m_contentRedactionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelSettings"))
  {
    m_modelSettings = jsonValue.GetObject("ModelSettings");

    m_modelSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifyLanguage"))
  {
    m_identifyLanguage = jsonValue.GetBool("IdentifyLanguage");

    m_identifyLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifyMultipleLanguages"))
  {
    m_identifyMultipleLanguages = jsonValue.GetBool("IdentifyMultipleLanguages");

    m_identifyMultipleLanguagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifiedLanguageScore"))
  {
    m_identifiedLanguageScore = jsonValue.GetDouble("IdentifiedLanguageScore");

    m_identifiedLanguageScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCodes"))
  {
    Aws::Utils::Array<JsonView> languageCodesJsonList = jsonValue.GetArray("LanguageCodes");
    for(unsigned languageCodesIndex = 0; languageCodesIndex < languageCodesJsonList.GetLength(); ++languageCodesIndex)
    {
      m_languageCodes.push_back(languageCodesJsonList[languageCodesIndex].AsObject());
    }
    m_languageCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToxicityDetection"))
  {
    Aws::Utils::Array<JsonView> toxicityDetectionJsonList = jsonValue.GetArray("ToxicityDetection");
    for(unsigned toxicityDetectionIndex = 0; toxicityDetectionIndex < toxicityDetectionJsonList.GetLength(); ++toxicityDetectionIndex)
    {
      m_toxicityDetection.push_back(toxicityDetectionJsonList[toxicityDetectionIndex].AsObject());
    }
    m_toxicityDetectionHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptionJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptionJobNameHasBeenSet)
  {
   payload.WithString("TranscriptionJobName", m_transcriptionJobName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_transcriptionJobStatusHasBeenSet)
  {
   payload.WithString("TranscriptionJobStatus", TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(m_transcriptionJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_outputLocationTypeHasBeenSet)
  {
   payload.WithString("OutputLocationType", OutputLocationTypeMapper::GetNameForOutputLocationType(m_outputLocationType));
  }

  if(m_contentRedactionHasBeenSet)
  {
   payload.WithObject("ContentRedaction", m_contentRedaction.Jsonize());

  }

  if(m_modelSettingsHasBeenSet)
  {
   payload.WithObject("ModelSettings", m_modelSettings.Jsonize());

  }

  if(m_identifyLanguageHasBeenSet)
  {
   payload.WithBool("IdentifyLanguage", m_identifyLanguage);

  }

  if(m_identifyMultipleLanguagesHasBeenSet)
  {
   payload.WithBool("IdentifyMultipleLanguages", m_identifyMultipleLanguages);

  }

  if(m_identifiedLanguageScoreHasBeenSet)
  {
   payload.WithDouble("IdentifiedLanguageScore", m_identifiedLanguageScore);

  }

  if(m_languageCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languageCodesJsonList(m_languageCodes.size());
   for(unsigned languageCodesIndex = 0; languageCodesIndex < languageCodesJsonList.GetLength(); ++languageCodesIndex)
   {
     languageCodesJsonList[languageCodesIndex].AsObject(m_languageCodes[languageCodesIndex].Jsonize());
   }
   payload.WithArray("LanguageCodes", std::move(languageCodesJsonList));

  }

  if(m_toxicityDetectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toxicityDetectionJsonList(m_toxicityDetection.size());
   for(unsigned toxicityDetectionIndex = 0; toxicityDetectionIndex < toxicityDetectionJsonList.GetLength(); ++toxicityDetectionIndex)
   {
     toxicityDetectionJsonList[toxicityDetectionIndex].AsObject(m_toxicityDetection[toxicityDetectionIndex].Jsonize());
   }
   payload.WithArray("ToxicityDetection", std::move(toxicityDetectionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
