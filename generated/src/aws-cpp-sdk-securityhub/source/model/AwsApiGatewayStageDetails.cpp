/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayStageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayStageDetails::AwsApiGatewayStageDetails() : 
    m_deploymentIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cacheClusterEnabled(false),
    m_cacheClusterEnabledHasBeenSet(false),
    m_cacheClusterSizeHasBeenSet(false),
    m_cacheClusterStatusHasBeenSet(false),
    m_methodSettingsHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_documentationVersionHasBeenSet(false),
    m_accessLogSettingsHasBeenSet(false),
    m_canarySettingsHasBeenSet(false),
    m_tracingEnabled(false),
    m_tracingEnabledHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_webAclArnHasBeenSet(false)
{
}

AwsApiGatewayStageDetails::AwsApiGatewayStageDetails(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cacheClusterEnabled(false),
    m_cacheClusterEnabledHasBeenSet(false),
    m_cacheClusterSizeHasBeenSet(false),
    m_cacheClusterStatusHasBeenSet(false),
    m_methodSettingsHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_documentationVersionHasBeenSet(false),
    m_accessLogSettingsHasBeenSet(false),
    m_canarySettingsHasBeenSet(false),
    m_tracingEnabled(false),
    m_tracingEnabledHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_webAclArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayStageDetails& AwsApiGatewayStageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientCertificateId"))
  {
    m_clientCertificateId = jsonValue.GetString("ClientCertificateId");

    m_clientCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageName"))
  {
    m_stageName = jsonValue.GetString("StageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheClusterEnabled"))
  {
    m_cacheClusterEnabled = jsonValue.GetBool("CacheClusterEnabled");

    m_cacheClusterEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheClusterSize"))
  {
    m_cacheClusterSize = jsonValue.GetString("CacheClusterSize");

    m_cacheClusterSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheClusterStatus"))
  {
    m_cacheClusterStatus = jsonValue.GetString("CacheClusterStatus");

    m_cacheClusterStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MethodSettings"))
  {
    Aws::Utils::Array<JsonView> methodSettingsJsonList = jsonValue.GetArray("MethodSettings");
    for(unsigned methodSettingsIndex = 0; methodSettingsIndex < methodSettingsJsonList.GetLength(); ++methodSettingsIndex)
    {
      m_methodSettings.push_back(methodSettingsJsonList[methodSettingsIndex].AsObject());
    }
    m_methodSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Variables"))
  {
    Aws::Map<Aws::String, JsonView> variablesJsonMap = jsonValue.GetObject("Variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
    }
    m_variablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentationVersion"))
  {
    m_documentationVersion = jsonValue.GetString("DocumentationVersion");

    m_documentationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessLogSettings"))
  {
    m_accessLogSettings = jsonValue.GetObject("AccessLogSettings");

    m_accessLogSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanarySettings"))
  {
    m_canarySettings = jsonValue.GetObject("CanarySettings");

    m_canarySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TracingEnabled"))
  {
    m_tracingEnabled = jsonValue.GetBool("TracingEnabled");

    m_tracingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebAclArn"))
  {
    m_webAclArn = jsonValue.GetString("WebAclArn");

    m_webAclArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayStageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("ClientCertificateId", m_clientCertificateId);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_cacheClusterEnabledHasBeenSet)
  {
   payload.WithBool("CacheClusterEnabled", m_cacheClusterEnabled);

  }

  if(m_cacheClusterSizeHasBeenSet)
  {
   payload.WithString("CacheClusterSize", m_cacheClusterSize);

  }

  if(m_cacheClusterStatusHasBeenSet)
  {
   payload.WithString("CacheClusterStatus", m_cacheClusterStatus);

  }

  if(m_methodSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> methodSettingsJsonList(m_methodSettings.size());
   for(unsigned methodSettingsIndex = 0; methodSettingsIndex < methodSettingsJsonList.GetLength(); ++methodSettingsIndex)
   {
     methodSettingsJsonList[methodSettingsIndex].AsObject(m_methodSettings[methodSettingsIndex].Jsonize());
   }
   payload.WithArray("MethodSettings", std::move(methodSettingsJsonList));

  }

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithString(variablesItem.first, variablesItem.second);
   }
   payload.WithObject("Variables", std::move(variablesJsonMap));

  }

  if(m_documentationVersionHasBeenSet)
  {
   payload.WithString("DocumentationVersion", m_documentationVersion);

  }

  if(m_accessLogSettingsHasBeenSet)
  {
   payload.WithObject("AccessLogSettings", m_accessLogSettings.Jsonize());

  }

  if(m_canarySettingsHasBeenSet)
  {
   payload.WithObject("CanarySettings", m_canarySettings.Jsonize());

  }

  if(m_tracingEnabledHasBeenSet)
  {
   payload.WithBool("TracingEnabled", m_tracingEnabled);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("LastUpdatedDate", m_lastUpdatedDate);

  }

  if(m_webAclArnHasBeenSet)
  {
   payload.WithString("WebAclArn", m_webAclArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
