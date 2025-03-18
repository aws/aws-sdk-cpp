/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/StartLoaderJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartLoaderJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_s3BucketRegionHasBeenSet)
  {
   payload.WithString("region", S3BucketRegionMapper::GetNameForS3BucketRegion(m_s3BucketRegion));
  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("iamRoleArn", m_iamRoleArn);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", ModeMapper::GetNameForMode(m_mode));
  }

  if(m_failOnErrorHasBeenSet)
  {
   payload.WithBool("failOnError", m_failOnError);

  }

  if(m_parallelismHasBeenSet)
  {
   payload.WithString("parallelism", ParallelismMapper::GetNameForParallelism(m_parallelism));
  }

  if(m_parserConfigurationHasBeenSet)
  {
   JsonValue parserConfigurationJsonMap;
   for(auto& parserConfigurationItem : m_parserConfiguration)
   {
     parserConfigurationJsonMap.WithString(parserConfigurationItem.first, parserConfigurationItem.second);
   }
   payload.WithObject("parserConfiguration", std::move(parserConfigurationJsonMap));

  }

  if(m_updateSingleCardinalityPropertiesHasBeenSet)
  {
   payload.WithBool("updateSingleCardinalityProperties", m_updateSingleCardinalityProperties);

  }

  if(m_queueRequestHasBeenSet)
  {
   payload.WithBool("queueRequest", m_queueRequest);

  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsString(m_dependencies[dependenciesIndex]);
   }
   payload.WithArray("dependencies", std::move(dependenciesJsonList));

  }

  if(m_userProvidedEdgeIdsHasBeenSet)
  {
   payload.WithBool("userProvidedEdgeIds", m_userProvidedEdgeIds);

  }

  return payload.View().WriteReadable();
}




