/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/SynthesisTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Polly
{
namespace Model
{

SynthesisTask::SynthesisTask() : 
    m_engine(Engine::NOT_SET),
    m_engineHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_taskStatusReasonHasBeenSet(false),
    m_outputUriHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_requestCharacters(0),
    m_requestCharactersHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_lexiconNamesHasBeenSet(false),
    m_outputFormat(OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_speechMarkTypesHasBeenSet(false),
    m_textType(TextType::NOT_SET),
    m_textTypeHasBeenSet(false),
    m_voiceId(VoiceId::NOT_SET),
    m_voiceIdHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
}

SynthesisTask::SynthesisTask(JsonView jsonValue) : 
    m_engine(Engine::NOT_SET),
    m_engineHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_taskStatusReasonHasBeenSet(false),
    m_outputUriHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_requestCharacters(0),
    m_requestCharactersHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_lexiconNamesHasBeenSet(false),
    m_outputFormat(OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_speechMarkTypesHasBeenSet(false),
    m_textType(TextType::NOT_SET),
    m_textTypeHasBeenSet(false),
    m_voiceId(VoiceId::NOT_SET),
    m_voiceIdHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

SynthesisTask& SynthesisTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = EngineMapper::GetEngineForName(jsonValue.GetString("Engine"));

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskStatus"))
  {
    m_taskStatus = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("TaskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskStatusReason"))
  {
    m_taskStatusReason = jsonValue.GetString("TaskStatusReason");

    m_taskStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUri"))
  {
    m_outputUri = jsonValue.GetString("OutputUri");

    m_outputUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestCharacters"))
  {
    m_requestCharacters = jsonValue.GetInteger("RequestCharacters");

    m_requestCharactersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LexiconNames"))
  {
    Aws::Utils::Array<JsonView> lexiconNamesJsonList = jsonValue.GetArray("LexiconNames");
    for(unsigned lexiconNamesIndex = 0; lexiconNamesIndex < lexiconNamesJsonList.GetLength(); ++lexiconNamesIndex)
    {
      m_lexiconNames.push_back(lexiconNamesJsonList[lexiconNamesIndex].AsString());
    }
    m_lexiconNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputFormat"))
  {
    m_outputFormat = OutputFormatMapper::GetOutputFormatForName(jsonValue.GetString("OutputFormat"));

    m_outputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleRate"))
  {
    m_sampleRate = jsonValue.GetString("SampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpeechMarkTypes"))
  {
    Aws::Utils::Array<JsonView> speechMarkTypesJsonList = jsonValue.GetArray("SpeechMarkTypes");
    for(unsigned speechMarkTypesIndex = 0; speechMarkTypesIndex < speechMarkTypesJsonList.GetLength(); ++speechMarkTypesIndex)
    {
      m_speechMarkTypes.push_back(SpeechMarkTypeMapper::GetSpeechMarkTypeForName(speechMarkTypesJsonList[speechMarkTypesIndex].AsString()));
    }
    m_speechMarkTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextType"))
  {
    m_textType = TextTypeMapper::GetTextTypeForName(jsonValue.GetString("TextType"));

    m_textTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceId"))
  {
    m_voiceId = VoiceIdMapper::GetVoiceIdForName(jsonValue.GetString("VoiceId"));

    m_voiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue SynthesisTask::Jsonize() const
{
  JsonValue payload;

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", EngineMapper::GetNameForEngine(m_engine));
  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("TaskStatus", TaskStatusMapper::GetNameForTaskStatus(m_taskStatus));
  }

  if(m_taskStatusReasonHasBeenSet)
  {
   payload.WithString("TaskStatusReason", m_taskStatusReason);

  }

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("OutputUri", m_outputUri);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_requestCharactersHasBeenSet)
  {
   payload.WithInteger("RequestCharacters", m_requestCharacters);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_lexiconNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lexiconNamesJsonList(m_lexiconNames.size());
   for(unsigned lexiconNamesIndex = 0; lexiconNamesIndex < lexiconNamesJsonList.GetLength(); ++lexiconNamesIndex)
   {
     lexiconNamesJsonList[lexiconNamesIndex].AsString(m_lexiconNames[lexiconNamesIndex]);
   }
   payload.WithArray("LexiconNames", std::move(lexiconNamesJsonList));

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("OutputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithString("SampleRate", m_sampleRate);

  }

  if(m_speechMarkTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> speechMarkTypesJsonList(m_speechMarkTypes.size());
   for(unsigned speechMarkTypesIndex = 0; speechMarkTypesIndex < speechMarkTypesJsonList.GetLength(); ++speechMarkTypesIndex)
   {
     speechMarkTypesJsonList[speechMarkTypesIndex].AsString(SpeechMarkTypeMapper::GetNameForSpeechMarkType(m_speechMarkTypes[speechMarkTypesIndex]));
   }
   payload.WithArray("SpeechMarkTypes", std::move(speechMarkTypesJsonList));

  }

  if(m_textTypeHasBeenSet)
  {
   payload.WithString("TextType", TextTypeMapper::GetNameForTextType(m_textType));
  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws
