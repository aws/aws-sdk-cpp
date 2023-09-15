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

StartLoaderJobRequest::StartLoaderJobRequest() : 
    m_sourceHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_s3BucketRegion(S3BucketRegion::NOT_SET),
    m_s3BucketRegionHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_failOnError(false),
    m_failOnErrorHasBeenSet(false),
    m_parallelism(Parallelism::NOT_SET),
    m_parallelismHasBeenSet(false),
    m_parserConfigurationHasBeenSet(false),
    m_updateSingleCardinalityProperties(false),
    m_updateSingleCardinalityPropertiesHasBeenSet(false),
    m_queueRequest(false),
    m_queueRequestHasBeenSet(false),
    m_dependenciesHasBeenSet(false),
    m_userProvidedEdgeIds(false),
    m_userProvidedEdgeIdsHasBeenSet(false)
{
}

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




