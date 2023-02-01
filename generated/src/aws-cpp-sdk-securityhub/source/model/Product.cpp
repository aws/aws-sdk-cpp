/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Product.h>
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

Product::Product() : 
    m_productArnHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_integrationTypesHasBeenSet(false),
    m_marketplaceUrlHasBeenSet(false),
    m_activationUrlHasBeenSet(false),
    m_productSubscriptionResourcePolicyHasBeenSet(false)
{
}

Product::Product(JsonView jsonValue) : 
    m_productArnHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_integrationTypesHasBeenSet(false),
    m_marketplaceUrlHasBeenSet(false),
    m_activationUrlHasBeenSet(false),
    m_productSubscriptionResourcePolicyHasBeenSet(false)
{
  *this = jsonValue;
}

Product& Product::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductArn"))
  {
    m_productArn = jsonValue.GetString("ProductArn");

    m_productArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetString("ProductName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompanyName"))
  {
    m_companyName = jsonValue.GetString("CompanyName");

    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsString());
    }
    m_categoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegrationTypes"))
  {
    Aws::Utils::Array<JsonView> integrationTypesJsonList = jsonValue.GetArray("IntegrationTypes");
    for(unsigned integrationTypesIndex = 0; integrationTypesIndex < integrationTypesJsonList.GetLength(); ++integrationTypesIndex)
    {
      m_integrationTypes.push_back(IntegrationTypeMapper::GetIntegrationTypeForName(integrationTypesJsonList[integrationTypesIndex].AsString()));
    }
    m_integrationTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarketplaceUrl"))
  {
    m_marketplaceUrl = jsonValue.GetString("MarketplaceUrl");

    m_marketplaceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActivationUrl"))
  {
    m_activationUrl = jsonValue.GetString("ActivationUrl");

    m_activationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductSubscriptionResourcePolicy"))
  {
    m_productSubscriptionResourcePolicy = jsonValue.GetString("ProductSubscriptionResourcePolicy");

    m_productSubscriptionResourcePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue Product::Jsonize() const
{
  JsonValue payload;

  if(m_productArnHasBeenSet)
  {
   payload.WithString("ProductArn", m_productArn);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsString(m_categories[categoriesIndex]);
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

  }

  if(m_integrationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integrationTypesJsonList(m_integrationTypes.size());
   for(unsigned integrationTypesIndex = 0; integrationTypesIndex < integrationTypesJsonList.GetLength(); ++integrationTypesIndex)
   {
     integrationTypesJsonList[integrationTypesIndex].AsString(IntegrationTypeMapper::GetNameForIntegrationType(m_integrationTypes[integrationTypesIndex]));
   }
   payload.WithArray("IntegrationTypes", std::move(integrationTypesJsonList));

  }

  if(m_marketplaceUrlHasBeenSet)
  {
   payload.WithString("MarketplaceUrl", m_marketplaceUrl);

  }

  if(m_activationUrlHasBeenSet)
  {
   payload.WithString("ActivationUrl", m_activationUrl);

  }

  if(m_productSubscriptionResourcePolicyHasBeenSet)
  {
   payload.WithString("ProductSubscriptionResourcePolicy", m_productSubscriptionResourcePolicy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
