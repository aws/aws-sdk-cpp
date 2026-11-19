/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/GetCustomerAccountResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomerAccountResult::GetCustomerAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCustomerAccountResult& GetCustomerAccountResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnrichmentStatus")) {
    m_enrichmentStatus = EnrichmentStatusMapper::GetEnrichmentStatusForName(jsonValue.GetString("EnrichmentStatus"));
    m_enrichmentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartnerAccountIdentifier")) {
    m_partnerAccountIdentifier = jsonValue.GetString("PartnerAccountIdentifier");
    m_partnerAccountIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetString("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Issues")) {
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("Issues");
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      m_issues.push_back(issuesJsonList[issuesIndex].AsObject());
    }
    m_issuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsEnrichment")) {
    m_awsEnrichment = jsonValue.GetObject("AwsEnrichment");
    m_awsEnrichmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReasonCode")) {
    m_reasonCode = CustomerAccountFailureReasonMapper::GetCustomerAccountFailureReasonForName(jsonValue.GetString("ReasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExistingCustomerAccountArn")) {
    m_existingCustomerAccountArn = jsonValue.GetString("ExistingCustomerAccountArn");
    m_existingCustomerAccountArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Account")) {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
