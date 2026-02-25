/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIAMPolicyAssignmentResult::CreateIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateIAMPolicyAssignmentResult& CreateIAMPolicyAssignmentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AssignmentName")) {
    m_assignmentName = jsonValue.GetString("AssignmentName");
    m_assignmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssignmentId")) {
    m_assignmentId = jsonValue.GetString("AssignmentId");
    m_assignmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssignmentStatus")) {
    m_assignmentStatus = AssignmentStatusMapper::GetAssignmentStatusForName(jsonValue.GetString("AssignmentStatus"));
    m_assignmentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyArn")) {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Identities")) {
    Aws::Map<Aws::String, JsonView> identitiesJsonMap = jsonValue.GetObject("Identities").GetAllObjects();
    for (auto& identitiesItem : identitiesJsonMap) {
      Aws::Utils::Array<JsonView> identityNameList2JsonList = identitiesItem.second.AsArray();
      Aws::Vector<Aws::String> identityNameList2List;
      identityNameList2List.reserve((size_t)identityNameList2JsonList.GetLength());
      for (unsigned identityNameList2Index = 0; identityNameList2Index < identityNameList2JsonList.GetLength(); ++identityNameList2Index) {
        identityNameList2List.push_back(identityNameList2JsonList[identityNameList2Index].AsString());
      }
      m_identities[identitiesItem.first] = std::move(identityNameList2List);
    }
    m_identitiesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
