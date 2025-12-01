/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-benefits/model/GetBenefitAllocationResult.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBenefitAllocationResult::GetBenefitAllocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBenefitAllocationResult& GetBenefitAllocationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BenefitAllocationStatusMapper::GetBenefitAllocationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitApplicationId")) {
    m_benefitApplicationId = jsonValue.GetString("BenefitApplicationId");
    m_benefitApplicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitId")) {
    m_benefitId = jsonValue.GetString("BenefitId");
    m_benefitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FulfillmentType")) {
    m_fulfillmentType = FulfillmentTypeMapper::GetFulfillmentTypeForName(jsonValue.GetString("FulfillmentType"));
    m_fulfillmentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicableBenefitIds")) {
    Aws::Utils::Array<JsonView> applicableBenefitIdsJsonList = jsonValue.GetArray("ApplicableBenefitIds");
    for (unsigned applicableBenefitIdsIndex = 0; applicableBenefitIdsIndex < applicableBenefitIdsJsonList.GetLength();
         ++applicableBenefitIdsIndex) {
      m_applicableBenefitIds.push_back(applicableBenefitIdsJsonList[applicableBenefitIdsIndex].AsString());
    }
    m_applicableBenefitIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FulfillmentDetail")) {
    m_fulfillmentDetail = jsonValue.GetObject("FulfillmentDetail");
    m_fulfillmentDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartsAt")) {
    m_startsAt = jsonValue.GetString("StartsAt");
    m_startsAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
