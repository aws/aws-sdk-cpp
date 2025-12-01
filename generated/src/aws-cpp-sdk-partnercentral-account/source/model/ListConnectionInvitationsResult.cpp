/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConnectionInvitationsResult::ListConnectionInvitationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListConnectionInvitationsResult& ListConnectionInvitationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ConnectionInvitationSummaries")) {
    Aws::Utils::Array<JsonView> connectionInvitationSummariesJsonList = jsonValue.GetArray("ConnectionInvitationSummaries");
    for (unsigned connectionInvitationSummariesIndex = 0;
         connectionInvitationSummariesIndex < connectionInvitationSummariesJsonList.GetLength(); ++connectionInvitationSummariesIndex) {
      m_connectionInvitationSummaries.push_back(connectionInvitationSummariesJsonList[connectionInvitationSummariesIndex].AsObject());
    }
    m_connectionInvitationSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
