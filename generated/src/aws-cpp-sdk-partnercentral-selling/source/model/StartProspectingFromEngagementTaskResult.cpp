/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/StartProspectingFromEngagementTaskResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartProspectingFromEngagementTaskResult::StartProspectingFromEngagementTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

StartProspectingFromEngagementTaskResult& StartProspectingFromEngagementTaskResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Identifiers")) {
    Aws::Utils::Array<JsonView> identifiersJsonList = jsonValue.GetArray("Identifiers");
    for (unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex) {
      m_identifiers.push_back(identifiersJsonList[identifiersIndex].AsString());
    }
    m_identifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskName")) {
    m_taskName = jsonValue.GetString("TaskName");
    m_taskNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReasonCode")) {
    m_reasonCode = jsonValue.GetString("ReasonCode");
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskId")) {
    m_taskId = jsonValue.GetString("TaskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskArn")) {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskStatus")) {
    m_taskStatus = ProspectingTaskStatusMapper::GetProspectingTaskStatusForName(jsonValue.GetString("TaskStatus"));
    m_taskStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
