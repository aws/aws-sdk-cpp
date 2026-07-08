/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/UpdateConnectorResult.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateConnectorResult::UpdateConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateConnectorResult& UpdateConnectorResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ConnectorStatus")) {
    m_connectorStatus = CspmConnectorStatusMapper::GetCspmConnectorStatusForName(jsonValue.GetString("ConnectorStatus"));
    m_connectorStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnablementStatus")) {
    m_enablementStatus = CspmEnablementStatusMapper::GetCspmEnablementStatusForName(jsonValue.GetString("EnablementStatus"));
    m_enablementStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
