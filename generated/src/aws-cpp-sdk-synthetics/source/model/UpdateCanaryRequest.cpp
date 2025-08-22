/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/UpdateCanaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Synthetics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCanaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_runtimeVersionHasBeenSet)
  {
   payload.WithString("RuntimeVersion", m_runtimeVersion);

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

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_visualReferenceHasBeenSet)
  {
   payload.WithObject("VisualReference", m_visualReference.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

  }

  if(m_artifactConfigHasBeenSet)
  {
   payload.WithObject("ArtifactConfig", m_artifactConfig.Jsonize());

  }

  if(m_provisionedResourceCleanupHasBeenSet)
  {
   payload.WithString("ProvisionedResourceCleanup", ProvisionedResourceCleanupSettingMapper::GetNameForProvisionedResourceCleanupSetting(m_provisionedResourceCleanup));
  }

  if(m_dryRunIdHasBeenSet)
  {
   payload.WithString("DryRunId", m_dryRunId);

  }

  if(m_visualReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> visualReferencesJsonList(m_visualReferences.size());
   for(unsigned visualReferencesIndex = 0; visualReferencesIndex < visualReferencesJsonList.GetLength(); ++visualReferencesIndex)
   {
     visualReferencesJsonList[visualReferencesIndex].AsObject(m_visualReferences[visualReferencesIndex].Jsonize());
   }
   payload.WithArray("VisualReferences", std::move(visualReferencesJsonList));

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

  return payload.View().WriteReadable();
}




