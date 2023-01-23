/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/CreateNodeFromTemplateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNodeFromTemplateJobRequest::CreateNodeFromTemplateJobRequest() : 
    m_jobTagsHasBeenSet(false),
    m_nodeDescriptionHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_outputPackageNameHasBeenSet(false),
    m_outputPackageVersionHasBeenSet(false),
    m_templateParametersHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
}

Aws::String CreateNodeFromTemplateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobTagsJsonList(m_jobTags.size());
   for(unsigned jobTagsIndex = 0; jobTagsIndex < jobTagsJsonList.GetLength(); ++jobTagsIndex)
   {
     jobTagsJsonList[jobTagsIndex].AsObject(m_jobTags[jobTagsIndex].Jsonize());
   }
   payload.WithArray("JobTags", std::move(jobTagsJsonList));

  }

  if(m_nodeDescriptionHasBeenSet)
  {
   payload.WithString("NodeDescription", m_nodeDescription);

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("NodeName", m_nodeName);

  }

  if(m_outputPackageNameHasBeenSet)
  {
   payload.WithString("OutputPackageName", m_outputPackageName);

  }

  if(m_outputPackageVersionHasBeenSet)
  {
   payload.WithString("OutputPackageVersion", m_outputPackageVersion);

  }

  if(m_templateParametersHasBeenSet)
  {
   JsonValue templateParametersJsonMap;
   for(auto& templateParametersItem : m_templateParameters)
   {
     templateParametersJsonMap.WithString(templateParametersItem.first, templateParametersItem.second);
   }
   payload.WithObject("TemplateParameters", std::move(templateParametersJsonMap));

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("TemplateType", TemplateTypeMapper::GetNameForTemplateType(m_templateType));
  }

  return payload.View().WriteReadable();
}




