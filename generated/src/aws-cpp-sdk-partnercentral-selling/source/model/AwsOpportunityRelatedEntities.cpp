/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsOpportunityRelatedEntities.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsOpportunityRelatedEntities::AwsOpportunityRelatedEntities(JsonView jsonValue) { *this = jsonValue; }

AwsOpportunityRelatedEntities& AwsOpportunityRelatedEntities::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsProducts")) {
    Aws::Utils::Array<JsonView> awsProductsJsonList = jsonValue.GetArray("AwsProducts");
    for (unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex) {
      m_awsProducts.push_back(awsProductsJsonList[awsProductsIndex].AsString());
    }
    m_awsProductsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Solutions")) {
    Aws::Utils::Array<JsonView> solutionsJsonList = jsonValue.GetArray("Solutions");
    for (unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex) {
      m_solutions.push_back(solutionsJsonList[solutionsIndex].AsString());
    }
    m_solutionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsMarketplaceSolutions")) {
    Aws::Utils::Array<JsonView> awsMarketplaceSolutionsJsonList = jsonValue.GetArray("AwsMarketplaceSolutions");
    for (unsigned awsMarketplaceSolutionsIndex = 0; awsMarketplaceSolutionsIndex < awsMarketplaceSolutionsJsonList.GetLength();
         ++awsMarketplaceSolutionsIndex) {
      m_awsMarketplaceSolutions.push_back(awsMarketplaceSolutionsJsonList[awsMarketplaceSolutionsIndex].AsString());
    }
    m_awsMarketplaceSolutionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsMarketplaceProducts")) {
    Aws::Utils::Array<JsonView> awsMarketplaceProductsJsonList = jsonValue.GetArray("AwsMarketplaceProducts");
    for (unsigned awsMarketplaceProductsIndex = 0; awsMarketplaceProductsIndex < awsMarketplaceProductsJsonList.GetLength();
         ++awsMarketplaceProductsIndex) {
      m_awsMarketplaceProducts.push_back(awsMarketplaceProductsJsonList[awsMarketplaceProductsIndex].AsString());
    }
    m_awsMarketplaceProductsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsOpportunityRelatedEntities::Jsonize() const {
  JsonValue payload;

  if (m_awsProductsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsProductsJsonList(m_awsProducts.size());
    for (unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex) {
      awsProductsJsonList[awsProductsIndex].AsString(m_awsProducts[awsProductsIndex]);
    }
    payload.WithArray("AwsProducts", std::move(awsProductsJsonList));
  }

  if (m_solutionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> solutionsJsonList(m_solutions.size());
    for (unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex) {
      solutionsJsonList[solutionsIndex].AsString(m_solutions[solutionsIndex]);
    }
    payload.WithArray("Solutions", std::move(solutionsJsonList));
  }

  if (m_awsMarketplaceSolutionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsMarketplaceSolutionsJsonList(m_awsMarketplaceSolutions.size());
    for (unsigned awsMarketplaceSolutionsIndex = 0; awsMarketplaceSolutionsIndex < awsMarketplaceSolutionsJsonList.GetLength();
         ++awsMarketplaceSolutionsIndex) {
      awsMarketplaceSolutionsJsonList[awsMarketplaceSolutionsIndex].AsString(m_awsMarketplaceSolutions[awsMarketplaceSolutionsIndex]);
    }
    payload.WithArray("AwsMarketplaceSolutions", std::move(awsMarketplaceSolutionsJsonList));
  }

  if (m_awsMarketplaceProductsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsMarketplaceProductsJsonList(m_awsMarketplaceProducts.size());
    for (unsigned awsMarketplaceProductsIndex = 0; awsMarketplaceProductsIndex < awsMarketplaceProductsJsonList.GetLength();
         ++awsMarketplaceProductsIndex) {
      awsMarketplaceProductsJsonList[awsMarketplaceProductsIndex].AsString(m_awsMarketplaceProducts[awsMarketplaceProductsIndex]);
    }
    payload.WithArray("AwsMarketplaceProducts", std::move(awsMarketplaceProductsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
