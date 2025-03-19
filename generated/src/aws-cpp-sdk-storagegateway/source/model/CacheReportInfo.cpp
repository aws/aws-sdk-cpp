/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CacheReportInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

CacheReportInfo::CacheReportInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

CacheReportInfo& CacheReportInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CacheReportARN"))
  {
    m_cacheReportARN = jsonValue.GetString("CacheReportARN");
    m_cacheReportARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CacheReportStatus"))
  {
    m_cacheReportStatus = CacheReportStatusMapper::GetCacheReportStatusForName(jsonValue.GetString("CacheReportStatus"));
    m_cacheReportStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportCompletionPercent"))
  {
    m_reportCompletionPercent = jsonValue.GetInteger("ReportCompletionPercent");
    m_reportCompletionPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileShareARN"))
  {
    m_fileShareARN = jsonValue.GetString("FileShareARN");
    m_fileShareARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationARN"))
  {
    m_locationARN = jsonValue.GetString("LocationARN");
    m_locationARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InclusionFilters"))
  {
    Aws::Utils::Array<JsonView> inclusionFiltersJsonList = jsonValue.GetArray("InclusionFilters");
    for(unsigned inclusionFiltersIndex = 0; inclusionFiltersIndex < inclusionFiltersJsonList.GetLength(); ++inclusionFiltersIndex)
    {
      m_inclusionFilters.push_back(inclusionFiltersJsonList[inclusionFiltersIndex].AsObject());
    }
    m_inclusionFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExclusionFilters"))
  {
    Aws::Utils::Array<JsonView> exclusionFiltersJsonList = jsonValue.GetArray("ExclusionFilters");
    for(unsigned exclusionFiltersIndex = 0; exclusionFiltersIndex < exclusionFiltersJsonList.GetLength(); ++exclusionFiltersIndex)
    {
      m_exclusionFilters.push_back(exclusionFiltersJsonList[exclusionFiltersIndex].AsObject());
    }
    m_exclusionFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportName"))
  {
    m_reportName = jsonValue.GetString("ReportName");
    m_reportNameHasBeenSet = true;
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

JsonValue CacheReportInfo::Jsonize() const
{
  JsonValue payload;

  if(m_cacheReportARNHasBeenSet)
  {
   payload.WithString("CacheReportARN", m_cacheReportARN);

  }

  if(m_cacheReportStatusHasBeenSet)
  {
   payload.WithString("CacheReportStatus", CacheReportStatusMapper::GetNameForCacheReportStatus(m_cacheReportStatus));
  }

  if(m_reportCompletionPercentHasBeenSet)
  {
   payload.WithInteger("ReportCompletionPercent", m_reportCompletionPercent);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_locationARNHasBeenSet)
  {
   payload.WithString("LocationARN", m_locationARN);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_inclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionFiltersJsonList(m_inclusionFilters.size());
   for(unsigned inclusionFiltersIndex = 0; inclusionFiltersIndex < inclusionFiltersJsonList.GetLength(); ++inclusionFiltersIndex)
   {
     inclusionFiltersJsonList[inclusionFiltersIndex].AsObject(m_inclusionFilters[inclusionFiltersIndex].Jsonize());
   }
   payload.WithArray("InclusionFilters", std::move(inclusionFiltersJsonList));

  }

  if(m_exclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionFiltersJsonList(m_exclusionFilters.size());
   for(unsigned exclusionFiltersIndex = 0; exclusionFiltersIndex < exclusionFiltersJsonList.GetLength(); ++exclusionFiltersIndex)
   {
     exclusionFiltersJsonList[exclusionFiltersIndex].AsObject(m_exclusionFilters[exclusionFiltersIndex].Jsonize());
   }
   payload.WithArray("ExclusionFilters", std::move(exclusionFiltersJsonList));

  }

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("ReportName", m_reportName);

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
} // namespace StorageGateway
} // namespace Aws
