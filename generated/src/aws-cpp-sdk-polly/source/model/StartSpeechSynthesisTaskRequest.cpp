/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/StartSpeechSynthesisTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartSpeechSynthesisTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", EngineMapper::GetNameForEngine(m_engine));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
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

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("OutputS3BucketName", m_outputS3BucketName);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("OutputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithString("SampleRate", m_sampleRate);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

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

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_textTypeHasBeenSet)
  {
   payload.WithString("TextType", TextTypeMapper::GetNameForTextType(m_textType));
  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

  return payload.View().WriteReadable();
}




