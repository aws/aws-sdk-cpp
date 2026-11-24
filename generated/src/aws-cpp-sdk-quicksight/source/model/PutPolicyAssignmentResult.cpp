/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/PutPolicyAssignmentResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutPolicyAssignmentResult::PutPolicyAssignmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

PutPolicyAssignmentResult& PutPolicyAssignmentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PolicyArn")) {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReplacedPolicyArn")) {
    m_replacedPolicyArn = jsonValue.GetString("ReplacedPolicyArn");
    m_replacedPolicyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetInt64("Revision");
    m_revisionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
