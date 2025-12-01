/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-benefits/model/GetBenefitResult.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBenefitResult::GetBenefitResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBenefitResult& GetBenefitResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
  if (jsonValue.ValueExists("Programs")) {
    Aws::Utils::Array<JsonView> programsJsonList = jsonValue.GetArray("Programs");
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      m_programs.push_back(programsJsonList[programsIndex].AsString());
    }
    m_programsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FulfillmentTypes")) {
    Aws::Utils::Array<JsonView> fulfillmentTypesJsonList = jsonValue.GetArray("FulfillmentTypes");
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      m_fulfillmentTypes.push_back(
          FulfillmentTypeMapper::GetFulfillmentTypeForName(fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString()));
    }
    m_fulfillmentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitRequestSchema")) {
    m_benefitRequestSchema = jsonValue.GetObject("BenefitRequestSchema");
    m_benefitRequestSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BenefitStatusMapper::GetBenefitStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
