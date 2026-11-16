/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/GetAgentOrganizationalReportResult.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAgentOrganizationalReportResult::GetAgentOrganizationalReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetAgentOrganizationalReportResult& GetAgentOrganizationalReportResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("reportId")) {
    m_reportId = jsonValue.GetString("reportId");
    m_reportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerAccountId")) {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationId")) {
    m_organizationId = jsonValue.GetString("organizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = OrganizationalReportStateMapper::GetOrganizationalReportStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filters")) {
    m_filters = jsonValue.GetObject("filters");
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("coverageSummary")) {
    m_coverageSummary = jsonValue.GetObject("coverageSummary");
    m_coverageSummaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
