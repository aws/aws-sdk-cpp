/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/StartTextTranslationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTextTranslationJobRequest::StartTextTranslationJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_terminologyNamesHasBeenSet(false),
    m_parallelDataNamesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_settingsHasBeenSet(false)
{
}

Aws::String StartTextTranslationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_sourceLanguageCodeHasBeenSet)
  {
   payload.WithString("SourceLanguageCode", m_sourceLanguageCode);

  }

  if(m_targetLanguageCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetLanguageCodesJsonList(m_targetLanguageCodes.size());
   for(unsigned targetLanguageCodesIndex = 0; targetLanguageCodesIndex < targetLanguageCodesJsonList.GetLength(); ++targetLanguageCodesIndex)
   {
     targetLanguageCodesJsonList[targetLanguageCodesIndex].AsString(m_targetLanguageCodes[targetLanguageCodesIndex]);
   }
   payload.WithArray("TargetLanguageCodes", std::move(targetLanguageCodesJsonList));

  }

  if(m_terminologyNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> terminologyNamesJsonList(m_terminologyNames.size());
   for(unsigned terminologyNamesIndex = 0; terminologyNamesIndex < terminologyNamesJsonList.GetLength(); ++terminologyNamesIndex)
   {
     terminologyNamesJsonList[terminologyNamesIndex].AsString(m_terminologyNames[terminologyNamesIndex]);
   }
   payload.WithArray("TerminologyNames", std::move(terminologyNamesJsonList));

  }

  if(m_parallelDataNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parallelDataNamesJsonList(m_parallelDataNames.size());
   for(unsigned parallelDataNamesIndex = 0; parallelDataNamesIndex < parallelDataNamesJsonList.GetLength(); ++parallelDataNamesIndex)
   {
     parallelDataNamesJsonList[parallelDataNamesIndex].AsString(m_parallelDataNames[parallelDataNamesIndex]);
   }
   payload.WithArray("ParallelDataNames", std::move(parallelDataNamesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartTextTranslationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.StartTextTranslationJob"));
  return headers;

}




