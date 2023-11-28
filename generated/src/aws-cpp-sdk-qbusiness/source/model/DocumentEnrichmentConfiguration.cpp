/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentEnrichmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DocumentEnrichmentConfiguration::DocumentEnrichmentConfiguration() : 
    m_inlineConfigurationsHasBeenSet(false),
    m_postExtractionHookConfigurationHasBeenSet(false),
    m_preExtractionHookConfigurationHasBeenSet(false)
{
}

DocumentEnrichmentConfiguration::DocumentEnrichmentConfiguration(JsonView jsonValue) : 
    m_inlineConfigurationsHasBeenSet(false),
    m_postExtractionHookConfigurationHasBeenSet(false),
    m_preExtractionHookConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentEnrichmentConfiguration& DocumentEnrichmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inlineConfigurations"))
  {
    Aws::Utils::Array<JsonView> inlineConfigurationsJsonList = jsonValue.GetArray("inlineConfigurations");
    for(unsigned inlineConfigurationsIndex = 0; inlineConfigurationsIndex < inlineConfigurationsJsonList.GetLength(); ++inlineConfigurationsIndex)
    {
      m_inlineConfigurations.push_back(inlineConfigurationsJsonList[inlineConfigurationsIndex].AsObject());
    }
    m_inlineConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postExtractionHookConfiguration"))
  {
    m_postExtractionHookConfiguration = jsonValue.GetObject("postExtractionHookConfiguration");

    m_postExtractionHookConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preExtractionHookConfiguration"))
  {
    m_preExtractionHookConfiguration = jsonValue.GetObject("preExtractionHookConfiguration");

    m_preExtractionHookConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentEnrichmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inlineConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inlineConfigurationsJsonList(m_inlineConfigurations.size());
   for(unsigned inlineConfigurationsIndex = 0; inlineConfigurationsIndex < inlineConfigurationsJsonList.GetLength(); ++inlineConfigurationsIndex)
   {
     inlineConfigurationsJsonList[inlineConfigurationsIndex].AsObject(m_inlineConfigurations[inlineConfigurationsIndex].Jsonize());
   }
   payload.WithArray("inlineConfigurations", std::move(inlineConfigurationsJsonList));

  }

  if(m_postExtractionHookConfigurationHasBeenSet)
  {
   payload.WithObject("postExtractionHookConfiguration", m_postExtractionHookConfiguration.Jsonize());

  }

  if(m_preExtractionHookConfigurationHasBeenSet)
  {
   payload.WithObject("preExtractionHookConfiguration", m_preExtractionHookConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
