/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/UpdateAgentResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAgentResult::UpdateAgentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateAgentResult& UpdateAgentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentId")) {
    m_agentId = jsonValue.GetString("AgentId");
    m_agentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentStatus")) {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("AgentStatus"));
    m_agentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedToAddSpaces")) {
    Aws::Utils::Array<JsonView> failedToAddSpacesJsonList = jsonValue.GetArray("FailedToAddSpaces");
    for (unsigned failedToAddSpacesIndex = 0; failedToAddSpacesIndex < failedToAddSpacesJsonList.GetLength(); ++failedToAddSpacesIndex) {
      m_failedToAddSpaces.push_back(failedToAddSpacesJsonList[failedToAddSpacesIndex].AsObject());
    }
    m_failedToAddSpacesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedToRemoveSpaces")) {
    Aws::Utils::Array<JsonView> failedToRemoveSpacesJsonList = jsonValue.GetArray("FailedToRemoveSpaces");
    for (unsigned failedToRemoveSpacesIndex = 0; failedToRemoveSpacesIndex < failedToRemoveSpacesJsonList.GetLength();
         ++failedToRemoveSpacesIndex) {
      m_failedToRemoveSpaces.push_back(failedToRemoveSpacesJsonList[failedToRemoveSpacesIndex].AsObject());
    }
    m_failedToRemoveSpacesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedToAddActionConnectors")) {
    Aws::Utils::Array<JsonView> failedToAddActionConnectorsJsonList = jsonValue.GetArray("FailedToAddActionConnectors");
    for (unsigned failedToAddActionConnectorsIndex = 0; failedToAddActionConnectorsIndex < failedToAddActionConnectorsJsonList.GetLength();
         ++failedToAddActionConnectorsIndex) {
      m_failedToAddActionConnectors.push_back(failedToAddActionConnectorsJsonList[failedToAddActionConnectorsIndex].AsObject());
    }
    m_failedToAddActionConnectorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedToRemoveActionConnectors")) {
    Aws::Utils::Array<JsonView> failedToRemoveActionConnectorsJsonList = jsonValue.GetArray("FailedToRemoveActionConnectors");
    for (unsigned failedToRemoveActionConnectorsIndex = 0;
         failedToRemoveActionConnectorsIndex < failedToRemoveActionConnectorsJsonList.GetLength(); ++failedToRemoveActionConnectorsIndex) {
      m_failedToRemoveActionConnectors.push_back(failedToRemoveActionConnectorsJsonList[failedToRemoveActionConnectorsIndex].AsObject());
    }
    m_failedToRemoveActionConnectorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
