/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/IsAuthorizedWithTokenResult.h>
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

IsAuthorizedWithTokenResult::IsAuthorizedWithTokenResult() : 
    m_decision(Decision::NOT_SET)
{
}

IsAuthorizedWithTokenResult::IsAuthorizedWithTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_decision(Decision::NOT_SET)
{
  *this = result;
}

IsAuthorizedWithTokenResult& IsAuthorizedWithTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("decision"))
  {
    m_decision = DecisionMapper::GetDecisionForName(jsonValue.GetString("decision"));

  }

  if(jsonValue.ValueExists("determiningPolicies"))
  {
    Aws::Utils::Array<JsonView> determiningPoliciesJsonList = jsonValue.GetArray("determiningPolicies");
    for(unsigned determiningPoliciesIndex = 0; determiningPoliciesIndex < determiningPoliciesJsonList.GetLength(); ++determiningPoliciesIndex)
    {
      m_determiningPolicies.push_back(determiningPoliciesJsonList[determiningPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
