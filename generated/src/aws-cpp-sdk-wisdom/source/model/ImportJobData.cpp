/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ImportJobData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

ImportJobData::ImportJobData() : 
    m_createdTimeHasBeenSet(false),
    m_externalSourceConfigurationHasBeenSet(false),
    m_failedRecordReportHasBeenSet(false),
    m_importJobIdHasBeenSet(false),
    m_importJobType(ImportJobType::NOT_SET),
    m_importJobTypeHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_status(ImportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_urlExpiryHasBeenSet(false)
{
}

ImportJobData::ImportJobData(JsonView jsonValue) : 
    m_createdTimeHasBeenSet(false),
    m_externalSourceConfigurationHasBeenSet(false),
    m_failedRecordReportHasBeenSet(false),
    m_importJobIdHasBeenSet(false),
    m_importJobType(ImportJobType::NOT_SET),
    m_importJobTypeHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_status(ImportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_urlExpiryHasBeenSet(false)
{
  *this = jsonValue;
}

ImportJobData& ImportJobData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalSourceConfiguration"))
  {
    m_externalSourceConfiguration = jsonValue.GetObject("externalSourceConfiguration");

    m_externalSourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedRecordReport"))
  {
    m_failedRecordReport = jsonValue.GetString("failedRecordReport");

    m_failedRecordReportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importJobId"))
  {
    m_importJobId = jsonValue.GetString("importJobId");

    m_importJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importJobType"))
  {
    m_importJobType = ImportJobTypeMapper::GetImportJobTypeForName(jsonValue.GetString("importJobType"));

    m_importJobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportJobStatusMapper::GetImportJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

    m_uploadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("urlExpiry"))
  {
    m_urlExpiry = jsonValue.GetDouble("urlExpiry");

    m_urlExpiryHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportJobData::Jsonize() const
{
  JsonValue payload;

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_externalSourceConfigurationHasBeenSet)
  {
   payload.WithObject("externalSourceConfiguration", m_externalSourceConfiguration.Jsonize());

  }

  if(m_failedRecordReportHasBeenSet)
  {
   payload.WithString("failedRecordReport", m_failedRecordReport);

  }

  if(m_importJobIdHasBeenSet)
  {
   payload.WithString("importJobId", m_importJobId);

  }

  if(m_importJobTypeHasBeenSet)
  {
   payload.WithString("importJobType", ImportJobTypeMapper::GetNameForImportJobType(m_importJobType));
  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("lastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ImportJobStatusMapper::GetNameForImportJobStatus(m_status));
  }

  if(m_uploadIdHasBeenSet)
  {
   payload.WithString("uploadId", m_uploadId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_urlExpiryHasBeenSet)
  {
   payload.WithDouble("urlExpiry", m_urlExpiry.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
