/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TextTranslationJobProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

TextTranslationJobProperties::TextTranslationJobProperties() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_terminologyNamesHasBeenSet(false),
    m_parallelDataNamesHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_submittedTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

TextTranslationJobProperties::TextTranslationJobProperties(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_terminologyNamesHasBeenSet(false),
    m_parallelDataNamesHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_submittedTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

TextTranslationJobProperties& TextTranslationJobProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobDetails"))
  {
    m_jobDetails = jsonValue.GetObject("JobDetails");

    m_jobDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLanguageCode"))
  {
    m_sourceLanguageCode = jsonValue.GetString("SourceLanguageCode");

    m_sourceLanguageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetLanguageCodes"))
  {
    Aws::Utils::Array<JsonView> targetLanguageCodesJsonList = jsonValue.GetArray("TargetLanguageCodes");
    for(unsigned targetLanguageCodesIndex = 0; targetLanguageCodesIndex < targetLanguageCodesJsonList.GetLength(); ++targetLanguageCodesIndex)
    {
      m_targetLanguageCodes.push_back(targetLanguageCodesJsonList[targetLanguageCodesIndex].AsString());
    }
    m_targetLanguageCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminologyNames"))
  {
    Aws::Utils::Array<JsonView> terminologyNamesJsonList = jsonValue.GetArray("TerminologyNames");
    for(unsigned terminologyNamesIndex = 0; terminologyNamesIndex < terminologyNamesJsonList.GetLength(); ++terminologyNamesIndex)
    {
      m_terminologyNames.push_back(terminologyNamesJsonList[terminologyNamesIndex].AsString());
    }
    m_terminologyNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelDataNames"))
  {
    Aws::Utils::Array<JsonView> parallelDataNamesJsonList = jsonValue.GetArray("ParallelDataNames");
    for(unsigned parallelDataNamesIndex = 0; parallelDataNamesIndex < parallelDataNamesJsonList.GetLength(); ++parallelDataNamesIndex)
    {
      m_parallelDataNames.push_back(parallelDataNamesJsonList[parallelDataNamesIndex].AsString());
    }
    m_parallelDataNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmittedTime"))
  {
    m_submittedTime = jsonValue.GetDouble("SubmittedTime");

    m_submittedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue TextTranslationJobProperties::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_jobDetailsHasBeenSet)
  {
   payload.WithObject("JobDetails", m_jobDetails.Jsonize());

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

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_submittedTimeHasBeenSet)
  {
   payload.WithDouble("SubmittedTime", m_submittedTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
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

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
