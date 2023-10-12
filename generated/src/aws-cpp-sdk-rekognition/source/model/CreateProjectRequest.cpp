/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProjectRequest::CreateProjectRequest() : 
    m_projectNameHasBeenSet(false),
    m_feature(CustomizationFeature::NOT_SET),
    m_featureHasBeenSet(false),
    m_autoUpdate(ProjectAutoUpdate::NOT_SET),
    m_autoUpdateHasBeenSet(false)
{
}

Aws::String CreateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", CustomizationFeatureMapper::GetNameForCustomizationFeature(m_feature));
  }

  if(m_autoUpdateHasBeenSet)
  {
   payload.WithString("AutoUpdate", ProjectAutoUpdateMapper::GetNameForProjectAutoUpdate(m_autoUpdate));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.CreateProject"));
  return headers;

}




