/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ParallelDataProperties.h>
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

ParallelDataProperties::ParallelDataProperties() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ParallelDataStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_parallelDataConfigHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_importedDataSize(0),
    m_importedDataSizeHasBeenSet(false),
    m_importedRecordCount(0),
    m_importedRecordCountHasBeenSet(false),
    m_failedRecordCount(0),
    m_failedRecordCountHasBeenSet(false),
    m_skippedRecordCount(0),
    m_skippedRecordCountHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_latestUpdateAttemptStatus(ParallelDataStatus::NOT_SET),
    m_latestUpdateAttemptStatusHasBeenSet(false),
    m_latestUpdateAttemptAtHasBeenSet(false)
{
}

ParallelDataProperties::ParallelDataProperties(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ParallelDataStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_parallelDataConfigHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_importedDataSize(0),
    m_importedDataSizeHasBeenSet(false),
    m_importedRecordCount(0),
    m_importedRecordCountHasBeenSet(false),
    m_failedRecordCount(0),
    m_failedRecordCountHasBeenSet(false),
    m_skippedRecordCount(0),
    m_skippedRecordCountHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_latestUpdateAttemptStatus(ParallelDataStatus::NOT_SET),
    m_latestUpdateAttemptStatusHasBeenSet(false),
    m_latestUpdateAttemptAtHasBeenSet(false)
{
  *this = jsonValue;
}

ParallelDataProperties& ParallelDataProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ParallelDataStatusMapper::GetParallelDataStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("ParallelDataConfig"))
  {
    m_parallelDataConfig = jsonValue.GetObject("ParallelDataConfig");

    m_parallelDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedDataSize"))
  {
    m_importedDataSize = jsonValue.GetInt64("ImportedDataSize");

    m_importedDataSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedRecordCount"))
  {
    m_importedRecordCount = jsonValue.GetInt64("ImportedRecordCount");

    m_importedRecordCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedRecordCount"))
  {
    m_failedRecordCount = jsonValue.GetInt64("FailedRecordCount");

    m_failedRecordCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkippedRecordCount"))
  {
    m_skippedRecordCount = jsonValue.GetInt64("SkippedRecordCount");

    m_skippedRecordCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetObject("EncryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestUpdateAttemptStatus"))
  {
    m_latestUpdateAttemptStatus = ParallelDataStatusMapper::GetParallelDataStatusForName(jsonValue.GetString("LatestUpdateAttemptStatus"));

    m_latestUpdateAttemptStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestUpdateAttemptAt"))
  {
    m_latestUpdateAttemptAt = jsonValue.GetDouble("LatestUpdateAttemptAt");

    m_latestUpdateAttemptAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ParallelDataProperties::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ParallelDataStatusMapper::GetNameForParallelDataStatus(m_status));
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

  if(m_parallelDataConfigHasBeenSet)
  {
   payload.WithObject("ParallelDataConfig", m_parallelDataConfig.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_importedDataSizeHasBeenSet)
  {
   payload.WithInt64("ImportedDataSize", m_importedDataSize);

  }

  if(m_importedRecordCountHasBeenSet)
  {
   payload.WithInt64("ImportedRecordCount", m_importedRecordCount);

  }

  if(m_failedRecordCountHasBeenSet)
  {
   payload.WithInt64("FailedRecordCount", m_failedRecordCount);

  }

  if(m_skippedRecordCountHasBeenSet)
  {
   payload.WithInt64("SkippedRecordCount", m_skippedRecordCount);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithObject("EncryptionKey", m_encryptionKey.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_latestUpdateAttemptStatusHasBeenSet)
  {
   payload.WithString("LatestUpdateAttemptStatus", ParallelDataStatusMapper::GetNameForParallelDataStatus(m_latestUpdateAttemptStatus));
  }

  if(m_latestUpdateAttemptAtHasBeenSet)
  {
   payload.WithDouble("LatestUpdateAttemptAt", m_latestUpdateAttemptAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
