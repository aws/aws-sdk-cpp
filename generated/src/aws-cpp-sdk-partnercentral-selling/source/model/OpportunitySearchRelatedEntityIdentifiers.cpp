/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchRelatedEntityIdentifiers.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchRelatedEntityIdentifiers::OpportunitySearchRelatedEntityIdentifiers(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchRelatedEntityIdentifiers& OpportunitySearchRelatedEntityIdentifiers::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("AwsMarketplaceSolutions")) {
    Aws::Utils::Array<JsonView> awsMarketplaceSolutionsJsonList = jsonValue.GetArray("AwsMarketplaceSolutions");
    for (unsigned awsMarketplaceSolutionsIndex = 0; awsMarketplaceSolutionsIndex < awsMarketplaceSolutionsJsonList.GetLength();
         ++awsMarketplaceSolutionsIndex) {
      m_awsMarketplaceSolutions.push_back(awsMarketplaceSolutionsJsonList[awsMarketplaceSolutionsIndex].AsString());
    }
    m_awsMarketplaceSolutionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Solutions")) {
    Aws::Utils::Array<JsonView> solutionsJsonList = jsonValue.GetArray("Solutions");
    for (unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex) {
      m_solutions.push_back(solutionsJsonList[solutionsIndex].AsString());
    }
    m_solutionsHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchRelatedEntityIdentifiers::Jsonize() const {
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

  if (m_awsMarketplaceSolutionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsMarketplaceSolutionsJsonList(m_awsMarketplaceSolutions.size());
    for (unsigned awsMarketplaceSolutionsIndex = 0; awsMarketplaceSolutionsIndex < awsMarketplaceSolutionsJsonList.GetLength();
         ++awsMarketplaceSolutionsIndex) {
      awsMarketplaceSolutionsJsonList[awsMarketplaceSolutionsIndex].AsString(m_awsMarketplaceSolutions[awsMarketplaceSolutionsIndex]);
    }
    payload.WithArray("AwsMarketplaceSolutions", std::move(awsMarketplaceSolutionsJsonList));
  }

  if (m_solutionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> solutionsJsonList(m_solutions.size());
    for (unsigned solutionsIndex = 0; solutionsIndex < solutionsJsonList.GetLength(); ++solutionsIndex) {
      solutionsJsonList[solutionsIndex].AsString(m_solutions[solutionsIndex]);
    }
    payload.WithArray("Solutions", std::move(solutionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
