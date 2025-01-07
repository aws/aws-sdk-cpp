﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/UpdateCaseStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateCaseStatusResult::UpdateCaseStatusResult() : 
    m_caseStatus(SelfManagedCaseStatus::NOT_SET)
{
}

UpdateCaseStatusResult::UpdateCaseStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateCaseStatusResult()
{
  *this = result;
}

UpdateCaseStatusResult& UpdateCaseStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("caseStatus"))
  {
    m_caseStatus = SelfManagedCaseStatusMapper::GetSelfManagedCaseStatusForName(jsonValue.GetString("caseStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
