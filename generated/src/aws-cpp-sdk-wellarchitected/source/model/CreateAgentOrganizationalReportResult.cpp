/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/CreateAgentOrganizationalReportResult.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAgentOrganizationalReportResult::CreateAgentOrganizationalReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

CreateAgentOrganizationalReportResult& CreateAgentOrganizationalReportResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("reportId")) {
    m_reportId = jsonValue.GetString("reportId");
    m_reportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = OrganizationalReportStateMapper::GetOrganizationalReportStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
