/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CanvasAppSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CanvasAppSettings::CanvasAppSettings() : 
    m_timeSeriesForecastingSettingsHasBeenSet(false),
    m_modelRegisterSettingsHasBeenSet(false),
    m_workspaceSettingsHasBeenSet(false),
    m_identityProviderOAuthSettingsHasBeenSet(false),
    m_directDeploySettingsHasBeenSet(false),
    m_kendraSettingsHasBeenSet(false),
    m_generativeAiSettingsHasBeenSet(false)
{
}

CanvasAppSettings::CanvasAppSettings(JsonView jsonValue) : 
    m_timeSeriesForecastingSettingsHasBeenSet(false),
    m_modelRegisterSettingsHasBeenSet(false),
    m_workspaceSettingsHasBeenSet(false),
    m_identityProviderOAuthSettingsHasBeenSet(false),
    m_directDeploySettingsHasBeenSet(false),
    m_kendraSettingsHasBeenSet(false),
    m_generativeAiSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CanvasAppSettings& CanvasAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeSeriesForecastingSettings"))
  {
    m_timeSeriesForecastingSettings = jsonValue.GetObject("TimeSeriesForecastingSettings");

    m_timeSeriesForecastingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelRegisterSettings"))
  {
    m_modelRegisterSettings = jsonValue.GetObject("ModelRegisterSettings");

    m_modelRegisterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceSettings"))
  {
    m_workspaceSettings = jsonValue.GetObject("WorkspaceSettings");

    m_workspaceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityProviderOAuthSettings"))
  {
    Aws::Utils::Array<JsonView> identityProviderOAuthSettingsJsonList = jsonValue.GetArray("IdentityProviderOAuthSettings");
    for(unsigned identityProviderOAuthSettingsIndex = 0; identityProviderOAuthSettingsIndex < identityProviderOAuthSettingsJsonList.GetLength(); ++identityProviderOAuthSettingsIndex)
    {
      m_identityProviderOAuthSettings.push_back(identityProviderOAuthSettingsJsonList[identityProviderOAuthSettingsIndex].AsObject());
    }
    m_identityProviderOAuthSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectDeploySettings"))
  {
    m_directDeploySettings = jsonValue.GetObject("DirectDeploySettings");

    m_directDeploySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KendraSettings"))
  {
    m_kendraSettings = jsonValue.GetObject("KendraSettings");

    m_kendraSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerativeAiSettings"))
  {
    m_generativeAiSettings = jsonValue.GetObject("GenerativeAiSettings");

    m_generativeAiSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CanvasAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_timeSeriesForecastingSettingsHasBeenSet)
  {
   payload.WithObject("TimeSeriesForecastingSettings", m_timeSeriesForecastingSettings.Jsonize());

  }

  if(m_modelRegisterSettingsHasBeenSet)
  {
   payload.WithObject("ModelRegisterSettings", m_modelRegisterSettings.Jsonize());

  }

  if(m_workspaceSettingsHasBeenSet)
  {
   payload.WithObject("WorkspaceSettings", m_workspaceSettings.Jsonize());

  }

  if(m_identityProviderOAuthSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identityProviderOAuthSettingsJsonList(m_identityProviderOAuthSettings.size());
   for(unsigned identityProviderOAuthSettingsIndex = 0; identityProviderOAuthSettingsIndex < identityProviderOAuthSettingsJsonList.GetLength(); ++identityProviderOAuthSettingsIndex)
   {
     identityProviderOAuthSettingsJsonList[identityProviderOAuthSettingsIndex].AsObject(m_identityProviderOAuthSettings[identityProviderOAuthSettingsIndex].Jsonize());
   }
   payload.WithArray("IdentityProviderOAuthSettings", std::move(identityProviderOAuthSettingsJsonList));

  }

  if(m_directDeploySettingsHasBeenSet)
  {
   payload.WithObject("DirectDeploySettings", m_directDeploySettings.Jsonize());

  }

  if(m_kendraSettingsHasBeenSet)
  {
   payload.WithObject("KendraSettings", m_kendraSettings.Jsonize());

  }

  if(m_generativeAiSettingsHasBeenSet)
  {
   payload.WithObject("GenerativeAiSettings", m_generativeAiSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
