/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/GetAgentOrganizationalReportDataResult.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAgentOrganizationalReportDataResult::GetAgentOrganizationalReportDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetAgentOrganizationalReportDataResult& GetAgentOrganizationalReportDataResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("downloadUrl")) {
    m_downloadUrl = jsonValue.GetString("downloadUrl");
    m_downloadUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetString("expiresAt");
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
