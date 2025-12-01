/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/RelatedEntityIdentifiers.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

RelatedEntityIdentifiers::RelatedEntityIdentifiers(JsonView jsonValue) { *this = jsonValue; }

RelatedEntityIdentifiers& RelatedEntityIdentifiers::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsMarketplaceOffers")) {
    Aws::Utils::Array<JsonView> awsMarketplaceOffersJsonList = jsonValue.GetArray("AwsMarketplaceOffers");
    for (unsigned awsMarketplaceOffersIndex = 0; awsMarketplaceOffersIndex < awsMarketplaceOffersJsonList.GetLength();
         ++awsMarketplaceOffersIndex) {
      m_awsMarketplaceOffers.push_back(awsMarketplaceOffersJsonList[awsMarketplaceOffersIndex].AsString());
    }
    m_awsMarketplaceOffersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsMarketplaceOfferSets")) {
    Aws::Utils::Array<JsonView> awsMarketplaceOfferSetsJsonList = jsonValue.GetArray("AwsMarketplaceOfferSets");
    for (unsigned awsMarketplaceOfferSetsIndex = 0; awsMarketplaceOfferSetsIndex < awsMarketplaceOfferSetsJsonList.GetLength();
         ++awsMarketplaceOfferSetsIndex) {
      m_awsMarketplaceOfferSets.push_back(awsMarketplaceOfferSetsJsonList[awsMarketplaceOfferSetsIndex].AsString());
    }
    m_awsMarketplaceOfferSetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Solutions")) {
    Aws::Utils::Array<JsonView> solutionsJsonList = jsonValue.GetArray("Solutions");
    for (unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex) {
      m_solutions.push_back(solutionsJsonList[solutionsIndex].AsString());
    }
    m_solutionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsProducts")) {
    Aws::Utils::Array<JsonView> awsProductsJsonList = jsonValue.GetArray("AwsProducts");
    for (unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex) {
      m_awsProducts.push_back(awsProductsJsonList[awsProductsIndex].AsString());
    }
    m_awsProductsHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedEntityIdentifiers::Jsonize() const {
  JsonValue payload;

  if (m_awsMarketplaceOffersHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsMarketplaceOffersJsonList(m_awsMarketplaceOffers.size());
    for (unsigned awsMarketplaceOffersIndex = 0; awsMarketplaceOffersIndex < awsMarketplaceOffersJsonList.GetLength();
         ++awsMarketplaceOffersIndex) {
      awsMarketplaceOffersJsonList[awsMarketplaceOffersIndex].AsString(m_awsMarketplaceOffers[awsMarketplaceOffersIndex]);
    }
    payload.WithArray("AwsMarketplaceOffers", std::move(awsMarketplaceOffersJsonList));
  }

  if (m_awsMarketplaceOfferSetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsMarketplaceOfferSetsJsonList(m_awsMarketplaceOfferSets.size());
    for (unsigned awsMarketplaceOfferSetsIndex = 0; awsMarketplaceOfferSetsIndex < awsMarketplaceOfferSetsJsonList.GetLength();
         ++awsMarketplaceOfferSetsIndex) {
      awsMarketplaceOfferSetsJsonList[awsMarketplaceOfferSetsIndex].AsString(m_awsMarketplaceOfferSets[awsMarketplaceOfferSetsIndex]);
    }
    payload.WithArray("AwsMarketplaceOfferSets", std::move(awsMarketplaceOfferSetsJsonList));
  }

  if (m_solutionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> solutionsJsonList(m_solutions.size());
    for (unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex) {
      solutionsJsonList[solutionsIndex].AsString(m_solutions[solutionsIndex]);
    }
    payload.WithArray("Solutions", std::move(solutionsJsonList));
  }

  if (m_awsProductsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsProductsJsonList(m_awsProducts.size());
    for (unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex) {
      awsProductsJsonList[awsProductsIndex].AsString(m_awsProducts[awsProductsIndex]);
    }
    payload.WithArray("AwsProducts", std::move(awsProductsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
