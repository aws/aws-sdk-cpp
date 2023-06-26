/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserQuickSightConsoleEmbeddingConfiguration.h>
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

RegisteredUserQuickSightConsoleEmbeddingConfiguration::RegisteredUserQuickSightConsoleEmbeddingConfiguration() : 
    m_initialPathHasBeenSet(false),
    m_featureConfigurationsHasBeenSet(false)
{
}

RegisteredUserQuickSightConsoleEmbeddingConfiguration::RegisteredUserQuickSightConsoleEmbeddingConfiguration(JsonView jsonValue) : 
    m_initialPathHasBeenSet(false),
    m_featureConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

RegisteredUserQuickSightConsoleEmbeddingConfiguration& RegisteredUserQuickSightConsoleEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialPath"))
  {
    m_initialPath = jsonValue.GetString("InitialPath");

    m_initialPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureConfigurations"))
  {
    m_featureConfigurations = jsonValue.GetObject("FeatureConfigurations");

    m_featureConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegisteredUserQuickSightConsoleEmbeddingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialPathHasBeenSet)
  {
   payload.WithString("InitialPath", m_initialPath);

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
