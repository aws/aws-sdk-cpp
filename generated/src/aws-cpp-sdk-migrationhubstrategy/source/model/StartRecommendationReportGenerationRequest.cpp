/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StartRecommendationReportGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartRecommendationReportGenerationRequest::StartRecommendationReportGenerationRequest() : 
    m_groupIdFilterHasBeenSet(false),
    m_outputFormat(OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false)
{
}

Aws::String StartRecommendationReportGenerationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupIdFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupIdFilterJsonList(m_groupIdFilter.size());
   for(unsigned groupIdFilterIndex = 0; groupIdFilterIndex < groupIdFilterJsonList.GetLength(); ++groupIdFilterIndex)
   {
     groupIdFilterJsonList[groupIdFilterIndex].AsObject(m_groupIdFilter[groupIdFilterIndex].Jsonize());
   }
   payload.WithArray("groupIdFilter", std::move(groupIdFilterJsonList));

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("outputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  return payload.View().WriteReadable();
}




