/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-benefits/model/GetBenefitApplicationResult.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBenefitApplicationResult::GetBenefitApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBenefitApplicationResult& GetBenefitApplicationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitId")) {
    m_benefitId = jsonValue.GetString("BenefitId");
    m_benefitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FulfillmentTypes")) {
    Aws::Utils::Array<JsonView> fulfillmentTypesJsonList = jsonValue.GetArray("FulfillmentTypes");
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      m_fulfillmentTypes.push_back(
          FulfillmentTypeMapper::GetFulfillmentTypeForName(fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString()));
    }
    m_fulfillmentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitApplicationDetails")) {
    m_benefitApplicationDetails = jsonValue.GetObject("BenefitApplicationDetails");
    m_benefitApplicationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Programs")) {
    Aws::Utils::Array<JsonView> programsJsonList = jsonValue.GetArray("Programs");
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      m_programs.push_back(programsJsonList[programsIndex].AsString());
    }
    m_programsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BenefitApplicationStatusMapper::GetBenefitApplicationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Stage")) {
    m_stage = jsonValue.GetString("Stage");
    m_stageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReasonCodes")) {
    Aws::Utils::Array<JsonView> statusReasonCodesJsonList = jsonValue.GetArray("StatusReasonCodes");
    for (unsigned statusReasonCodesIndex = 0; statusReasonCodesIndex < statusReasonCodesJsonList.GetLength(); ++statusReasonCodesIndex) {
      m_statusReasonCodes.push_back(statusReasonCodesJsonList[statusReasonCodesIndex].AsString());
    }
    m_statusReasonCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetString("Revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedResources")) {
    Aws::Utils::Array<JsonView> associatedResourcesJsonList = jsonValue.GetArray("AssociatedResources");
    for (unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength();
         ++associatedResourcesIndex) {
      m_associatedResources.push_back(associatedResourcesJsonList[associatedResourcesIndex].AsString());
    }
    m_associatedResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartnerContacts")) {
    Aws::Utils::Array<JsonView> partnerContactsJsonList = jsonValue.GetArray("PartnerContacts");
    for (unsigned partnerContactsIndex = 0; partnerContactsIndex < partnerContactsJsonList.GetLength(); ++partnerContactsIndex) {
      m_partnerContacts.push_back(partnerContactsJsonList[partnerContactsIndex].AsObject());
    }
    m_partnerContactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileDetails")) {
    Aws::Utils::Array<JsonView> fileDetailsJsonList = jsonValue.GetArray("FileDetails");
    for (unsigned fileDetailsIndex = 0; fileDetailsIndex < fileDetailsJsonList.GetLength(); ++fileDetailsIndex) {
      m_fileDetails.push_back(fileDetailsJsonList[fileDetailsIndex].AsObject());
    }
    m_fileDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
