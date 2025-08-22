/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/Canary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

Canary::Canary(JsonView jsonValue)
{
  *this = jsonValue;
}

Canary& Canary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetObject("Code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");
    m_scheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RunConfig"))
  {
    m_runConfig = jsonValue.GetObject("RunConfig");
    m_runConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuccessRetentionPeriodInDays"))
  {
    m_successRetentionPeriodInDays = jsonValue.GetInteger("SuccessRetentionPeriodInDays");
    m_successRetentionPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureRetentionPeriodInDays"))
  {
    m_failureRetentionPeriodInDays = jsonValue.GetInteger("FailureRetentionPeriodInDays");
    m_failureRetentionPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");
    m_timelineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArtifactS3Location"))
  {
    m_artifactS3Location = jsonValue.GetString("ArtifactS3Location");
    m_artifactS3LocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineArn"))
  {
    m_engineArn = jsonValue.GetString("EngineArn");
    m_engineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuntimeVersion"))
  {
    m_runtimeVersion = jsonValue.GetString("RuntimeVersion");
    m_runtimeVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualReference"))
  {
    m_visualReference = jsonValue.GetObject("VisualReference");
    m_visualReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedResourceCleanup"))
  {
    m_provisionedResourceCleanup = ProvisionedResourceCleanupSettingMapper::GetProvisionedResourceCleanupSettingForName(jsonValue.GetString("ProvisionedResourceCleanup"));
    m_provisionedResourceCleanupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BrowserConfigs"))
  {
    Aws::Utils::Array<JsonView> browserConfigsJsonList = jsonValue.GetArray("BrowserConfigs");
    for(unsigned browserConfigsIndex = 0; browserConfigsIndex < browserConfigsJsonList.GetLength(); ++browserConfigsIndex)
    {
      m_browserConfigs.push_back(browserConfigsJsonList[browserConfigsIndex].AsObject());
    }
    m_browserConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineConfigs"))
  {
    Aws::Utils::Array<JsonView> engineConfigsJsonList = jsonValue.GetArray("EngineConfigs");
    for(unsigned engineConfigsIndex = 0; engineConfigsIndex < engineConfigsJsonList.GetLength(); ++engineConfigsIndex)
    {
      m_engineConfigs.push_back(engineConfigsJsonList[engineConfigsIndex].AsObject());
    }
    m_engineConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualReferences"))
  {
    Aws::Utils::Array<JsonView> visualReferencesJsonList = jsonValue.GetArray("VisualReferences");
    for(unsigned visualReferencesIndex = 0; visualReferencesIndex < visualReferencesJsonList.GetLength(); ++visualReferencesIndex)
    {
      m_visualReferences.push_back(visualReferencesJsonList[visualReferencesIndex].AsObject());
    }
    m_visualReferencesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArtifactConfig"))
  {
    m_artifactConfig = jsonValue.GetObject("ArtifactConfig");
    m_artifactConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DryRunConfig"))
  {
    m_dryRunConfig = jsonValue.GetObject("DryRunConfig");
    m_dryRunConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Canary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithObject("Code", m_code.Jsonize());

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

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

  }

  if(m_engineArnHasBeenSet)
  {
   payload.WithString("EngineArn", m_engineArn);

  }

  if(m_runtimeVersionHasBeenSet)
  {
   payload.WithString("RuntimeVersion", m_runtimeVersion);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_visualReferenceHasBeenSet)
  {
   payload.WithObject("VisualReference", m_visualReference.Jsonize());

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

  if(m_engineConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engineConfigsJsonList(m_engineConfigs.size());
   for(unsigned engineConfigsIndex = 0; engineConfigsIndex < engineConfigsJsonList.GetLength(); ++engineConfigsIndex)
   {
     engineConfigsJsonList[engineConfigsIndex].AsObject(m_engineConfigs[engineConfigsIndex].Jsonize());
   }
   payload.WithArray("EngineConfigs", std::move(engineConfigsJsonList));

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

  if(m_dryRunConfigHasBeenSet)
  {
   payload.WithObject("DryRunConfig", m_dryRunConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
