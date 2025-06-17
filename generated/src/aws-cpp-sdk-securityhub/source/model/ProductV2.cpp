/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ProductV2.h>
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

ProductV2::ProductV2(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductV2& ProductV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductV2Name"))
  {
    m_productV2Name = jsonValue.GetString("ProductV2Name");
    m_productV2NameHasBeenSet = true;
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
  if(jsonValue.ValueExists("IntegrationV2Types"))
  {
    Aws::Utils::Array<JsonView> integrationV2TypesJsonList = jsonValue.GetArray("IntegrationV2Types");
    for(unsigned integrationV2TypesIndex = 0; integrationV2TypesIndex < integrationV2TypesJsonList.GetLength(); ++integrationV2TypesIndex)
    {
      m_integrationV2Types.push_back(IntegrationV2TypeMapper::GetIntegrationV2TypeForName(integrationV2TypesJsonList[integrationV2TypesIndex].AsString()));
    }
    m_integrationV2TypesHasBeenSet = true;
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
  return *this;
}

JsonValue ProductV2::Jsonize() const
{
  JsonValue payload;

  if(m_productV2NameHasBeenSet)
  {
   payload.WithString("ProductV2Name", m_productV2Name);

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

  if(m_integrationV2TypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integrationV2TypesJsonList(m_integrationV2Types.size());
   for(unsigned integrationV2TypesIndex = 0; integrationV2TypesIndex < integrationV2TypesJsonList.GetLength(); ++integrationV2TypesIndex)
   {
     integrationV2TypesJsonList[integrationV2TypesIndex].AsString(IntegrationV2TypeMapper::GetNameForIntegrationV2Type(m_integrationV2Types[integrationV2TypesIndex]));
   }
   payload.WithArray("IntegrationV2Types", std::move(integrationV2TypesJsonList));

  }

  if(m_marketplaceUrlHasBeenSet)
  {
   payload.WithString("MarketplaceUrl", m_marketplaceUrl);

  }

  if(m_activationUrlHasBeenSet)
  {
   payload.WithString("ActivationUrl", m_activationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
