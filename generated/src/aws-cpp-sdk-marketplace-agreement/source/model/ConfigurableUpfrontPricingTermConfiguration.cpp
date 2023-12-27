/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTermConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

ConfigurableUpfrontPricingTermConfiguration::ConfigurableUpfrontPricingTermConfiguration() : 
    m_dimensionsHasBeenSet(false),
    m_selectorValueHasBeenSet(false)
{
}

ConfigurableUpfrontPricingTermConfiguration::ConfigurableUpfrontPricingTermConfiguration(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_selectorValueHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurableUpfrontPricingTermConfiguration& ConfigurableUpfrontPricingTermConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectorValue"))
  {
    m_selectorValue = jsonValue.GetString("selectorValue");

    m_selectorValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurableUpfrontPricingTermConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("dimensions", std::move(dimensionsJsonList));

  }

  if(m_selectorValueHasBeenSet)
  {
   payload.WithString("selectorValue", m_selectorValue);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
