/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CreateCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCanaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("Schedule", m_schedule.Jsonize());

  }

  if(m_runConfigHasBeenSet)
  {
   payload.WithObject("RunConfig", m_runConfig.Jsonize());

  }

  if(m_successRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("SuccessRetentionPeriodInDays", m_successRetentionPeriodInDays);

  }

  if(m_failureRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("FailureRetentionPeriodInDays", m_failureRetentionPeriodInDays);

  }

  if(m_runtimeVersionHasBeenSet)
  {
   payload.WithString("RuntimeVersion", m_runtimeVersion);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_resourcesToReplicateTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesToReplicateTagsJsonList(m_resourcesToReplicateTags.size());
   for(unsigned resourcesToReplicateTagsIndex = 0; resourcesToReplicateTagsIndex < resourcesToReplicateTagsJsonList.GetLength(); ++resourcesToReplicateTagsIndex)
   {
     resourcesToReplicateTagsJsonList[resourcesToReplicateTagsIndex].AsString(ResourceToTagMapper::GetNameForResourceToTag(m_resourcesToReplicateTags[resourcesToReplicateTagsIndex]));
   }
   payload.WithArray("ResourcesToReplicateTags", std::move(resourcesToReplicateTagsJsonList));

  }

  if(m_provisionedResourceCleanupHasBeenSet)
  {
   payload.WithString("ProvisionedResourceCleanup", ProvisionedResourceCleanupSettingMapper::GetNameForProvisionedResourceCleanupSetting(m_provisionedResourceCleanup));
  }

  if(m_browserConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> browserConfigsJsonList(m_browserConfigs.size());
   for(unsigned browserConfigsIndex = 0; browserConfigsIndex < browserConfigsJsonList.GetLength(); ++browserConfigsIndex)
   {
     browserConfigsJsonList[browserConfigsIndex].AsObject(m_browserConfigs[browserConfigsIndex].Jsonize());
   }
   payload.WithArray("BrowserConfigs", std::move(browserConfigsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_artifactConfigHasBeenSet)
  {
   payload.WithObject("ArtifactConfig", m_artifactConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




