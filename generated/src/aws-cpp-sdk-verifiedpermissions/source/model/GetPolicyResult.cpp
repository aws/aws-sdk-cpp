/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/GetPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPolicyResult::GetPolicyResult() : 
    m_policyType(PolicyType::NOT_SET)
{
}

GetPolicyResult::GetPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_policyType(PolicyType::NOT_SET)
{
  *this = result;
}

GetPolicyResult& GetPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyStoreId"))
  {
    m_policyStoreId = jsonValue.GetString("policyStoreId");

  }

  if(jsonValue.ValueExists("policyId"))
  {
    m_policyId = jsonValue.GetString("policyId");

  }

  if(jsonValue.ValueExists("policyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("policyType"));

  }

  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetObject("principal");

  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("lastUpdatedDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
