﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mpa/model/GetResourcePolicyResult.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourcePolicyResult::GetResourcePolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetResourcePolicyResult& GetResourcePolicyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyType")) {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("PolicyType"));
    m_policyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyVersionArn")) {
    m_policyVersionArn = jsonValue.GetString("PolicyVersionArn");
    m_policyVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyName")) {
    m_policyName = jsonValue.GetString("PolicyName");
    m_policyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyDocument")) {
    m_policyDocument = jsonValue.GetString("PolicyDocument");
    m_policyDocumentHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
