﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/UpdateResolverTypeResult.h>
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

UpdateResolverTypeResult::UpdateResolverTypeResult() : 
    m_caseStatus(CaseStatus::NOT_SET),
    m_resolverType(ResolverType::NOT_SET)
{
}

UpdateResolverTypeResult::UpdateResolverTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateResolverTypeResult()
{
  *this = result;
}

UpdateResolverTypeResult& UpdateResolverTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");

  }

  if(jsonValue.ValueExists("caseStatus"))
  {
    m_caseStatus = CaseStatusMapper::GetCaseStatusForName(jsonValue.GetString("caseStatus"));

  }

  if(jsonValue.ValueExists("resolverType"))
  {
    m_resolverType = ResolverTypeMapper::GetResolverTypeForName(jsonValue.GetString("resolverType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
