/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/verifiedpermissions/model/GetPolicyStoreAliasResult.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPolicyStoreAliasResult::GetPolicyStoreAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetPolicyStoreAliasResult& GetPolicyStoreAliasResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("aliasName")) {
    m_aliasName = jsonValue.GetString("aliasName");
    m_aliasNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyStoreId")) {
    m_policyStoreId = jsonValue.GetString("policyStoreId");
    m_policyStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aliasArn")) {
    m_aliasArn = jsonValue.GetString("aliasArn");
    m_aliasArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = AliasStateMapper::GetAliasStateForName(jsonValue.GetString("state"));
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
