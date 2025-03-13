/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsOpportunityRelatedEntities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

AwsOpportunityRelatedEntities::AwsOpportunityRelatedEntities(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsOpportunityRelatedEntities& AwsOpportunityRelatedEntities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsProducts"))
  {
    Aws::Utils::Array<JsonView> awsProductsJsonList = jsonValue.GetArray("AwsProducts");
    for(unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex)
    {
      m_awsProducts.push_back(awsProductsJsonList[awsProductsIndex].AsString());
    }
    m_awsProductsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Solutions"))
  {
    Aws::Utils::Array<JsonView> solutionsJsonList = jsonValue.GetArray("Solutions");
    for(unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex)
    {
      m_solutions.push_back(solutionsJsonList[solutionsIndex].AsString());
    }
    m_solutionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsOpportunityRelatedEntities::Jsonize() const
{
  JsonValue payload;

  if(m_awsProductsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsProductsJsonList(m_awsProducts.size());
   for(unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex)
   {
     awsProductsJsonList[awsProductsIndex].AsString(m_awsProducts[awsProductsIndex]);
   }
   payload.WithArray("AwsProducts", std::move(awsProductsJsonList));

  }

  if(m_solutionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> solutionsJsonList(m_solutions.size());
   for(unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex)
   {
     solutionsJsonList[solutionsIndex].AsString(m_solutions[solutionsIndex]);
   }
   payload.WithArray("Solutions", std::move(solutionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
