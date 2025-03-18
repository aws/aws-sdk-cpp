/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AnonymousUserDashboardEmbeddingConfiguration::AnonymousUserDashboardEmbeddingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AnonymousUserDashboardEmbeddingConfiguration& AnonymousUserDashboardEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialDashboardId"))
  {
    m_initialDashboardId = jsonValue.GetString("InitialDashboardId");
    m_initialDashboardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnabledFeatures"))
  {
    Aws::Utils::Array<JsonView> enabledFeaturesJsonList = jsonValue.GetArray("EnabledFeatures");
    for(unsigned enabledFeaturesIndex = 0; enabledFeaturesIndex < enabledFeaturesJsonList.GetLength(); ++enabledFeaturesIndex)
    {
      m_enabledFeatures.push_back(AnonymousUserDashboardEmbeddingConfigurationEnabledFeatureMapper::GetAnonymousUserDashboardEmbeddingConfigurationEnabledFeatureForName(enabledFeaturesJsonList[enabledFeaturesIndex].AsString()));
    }
    m_enabledFeaturesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisabledFeatures"))
  {
    Aws::Utils::Array<JsonView> disabledFeaturesJsonList = jsonValue.GetArray("DisabledFeatures");
    for(unsigned disabledFeaturesIndex = 0; disabledFeaturesIndex < disabledFeaturesJsonList.GetLength(); ++disabledFeaturesIndex)
    {
      m_disabledFeatures.push_back(AnonymousUserDashboardEmbeddingConfigurationDisabledFeatureMapper::GetAnonymousUserDashboardEmbeddingConfigurationDisabledFeatureForName(disabledFeaturesJsonList[disabledFeaturesIndex].AsString()));
    }
    m_disabledFeaturesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureConfigurations"))
  {
    m_featureConfigurations = jsonValue.GetObject("FeatureConfigurations");
    m_featureConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnonymousUserDashboardEmbeddingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialDashboardIdHasBeenSet)
  {
   payload.WithString("InitialDashboardId", m_initialDashboardId);

  }

  if(m_enabledFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledFeaturesJsonList(m_enabledFeatures.size());
   for(unsigned enabledFeaturesIndex = 0; enabledFeaturesIndex < enabledFeaturesJsonList.GetLength(); ++enabledFeaturesIndex)
   {
     enabledFeaturesJsonList[enabledFeaturesIndex].AsString(AnonymousUserDashboardEmbeddingConfigurationEnabledFeatureMapper::GetNameForAnonymousUserDashboardEmbeddingConfigurationEnabledFeature(m_enabledFeatures[enabledFeaturesIndex]));
   }
   payload.WithArray("EnabledFeatures", std::move(enabledFeaturesJsonList));

  }

  if(m_disabledFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disabledFeaturesJsonList(m_disabledFeatures.size());
   for(unsigned disabledFeaturesIndex = 0; disabledFeaturesIndex < disabledFeaturesJsonList.GetLength(); ++disabledFeaturesIndex)
   {
     disabledFeaturesJsonList[disabledFeaturesIndex].AsString(AnonymousUserDashboardEmbeddingConfigurationDisabledFeatureMapper::GetNameForAnonymousUserDashboardEmbeddingConfigurationDisabledFeature(m_disabledFeatures[disabledFeaturesIndex]));
   }
   payload.WithArray("DisabledFeatures", std::move(disabledFeaturesJsonList));

  }

  if(m_featureConfigurationsHasBeenSet)
  {
   payload.WithObject("FeatureConfigurations", m_featureConfigurations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
