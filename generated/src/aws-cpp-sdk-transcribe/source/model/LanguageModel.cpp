/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/LanguageModel.h>
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

LanguageModel::LanguageModel(JsonView jsonValue)
{
  *this = jsonValue;
}

LanguageModel& LanguageModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = CLMLanguageCodeMapper::GetCLMLanguageCodeForName(jsonValue.GetString("LanguageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseModelName"))
  {
    m_baseModelName = BaseModelNameMapper::GetBaseModelNameForName(jsonValue.GetString("BaseModelName"));
    m_baseModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelStatus"))
  {
    m_modelStatus = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("ModelStatus"));
    m_modelStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpgradeAvailability"))
  {
    m_upgradeAvailability = jsonValue.GetBool("UpgradeAvailability");
    m_upgradeAvailabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");
    m_inputDataConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue LanguageModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", CLMLanguageCodeMapper::GetNameForCLMLanguageCode(m_languageCode));
  }

  if(m_baseModelNameHasBeenSet)
  {
   payload.WithString("BaseModelName", BaseModelNameMapper::GetNameForBaseModelName(m_baseModelName));
  }

  if(m_modelStatusHasBeenSet)
  {
   payload.WithString("ModelStatus", ModelStatusMapper::GetNameForModelStatus(m_modelStatus));
  }

  if(m_upgradeAvailabilityHasBeenSet)
  {
   payload.WithBool("UpgradeAvailability", m_upgradeAvailability);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
