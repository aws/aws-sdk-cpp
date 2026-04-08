/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-discovery/model/GetOfferResult.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOfferResult::GetOfferResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetOfferResult& GetOfferResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("offerId")) {
    m_offerId = jsonValue.GetString("offerId");
    m_offerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("offerName")) {
    m_offerName = jsonValue.GetString("offerName");
    m_offerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementProposalId")) {
    m_agreementProposalId = jsonValue.GetString("agreementProposalId");
    m_agreementProposalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetDouble("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableFromTime")) {
    m_availableFromTime = jsonValue.GetDouble("availableFromTime");
    m_availableFromTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sellerOfRecord")) {
    m_sellerOfRecord = jsonValue.GetObject("sellerOfRecord");
    m_sellerOfRecordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("replacementAgreementId")) {
    m_replacementAgreementId = jsonValue.GetString("replacementAgreementId");
    m_replacementAgreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pricingModel")) {
    m_pricingModel = jsonValue.GetObject("pricingModel");
    m_pricingModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("badges")) {
    Aws::Utils::Array<JsonView> badgesJsonList = jsonValue.GetArray("badges");
    for (unsigned badgesIndex = 0; badgesIndex < badgesJsonList.GetLength(); ++badgesIndex) {
      m_badges.push_back(badgesJsonList[badgesIndex].AsObject());
    }
    m_badgesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedEntities")) {
    Aws::Utils::Array<JsonView> associatedEntitiesJsonList = jsonValue.GetArray("associatedEntities");
    for (unsigned associatedEntitiesIndex = 0; associatedEntitiesIndex < associatedEntitiesJsonList.GetLength();
         ++associatedEntitiesIndex) {
      m_associatedEntities.push_back(associatedEntitiesJsonList[associatedEntitiesIndex].AsObject());
    }
    m_associatedEntitiesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
