/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListEffectivePolicyValidationErrorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEffectivePolicyValidationErrorsResult::ListEffectivePolicyValidationErrorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEffectivePolicyValidationErrorsResult& ListEffectivePolicyValidationErrorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = EffectivePolicyTypeMapper::GetEffectivePolicyTypeForName(jsonValue.GetString("PolicyType"));
    m_policyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationTimestamp"))
  {
    m_evaluationTimestamp = jsonValue.GetDouble("EvaluationTimestamp");
    m_evaluationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EffectivePolicyValidationErrors"))
  {
    Aws::Utils::Array<JsonView> effectivePolicyValidationErrorsJsonList = jsonValue.GetArray("EffectivePolicyValidationErrors");
    for(unsigned effectivePolicyValidationErrorsIndex = 0; effectivePolicyValidationErrorsIndex < effectivePolicyValidationErrorsJsonList.GetLength(); ++effectivePolicyValidationErrorsIndex)
    {
      m_effectivePolicyValidationErrors.push_back(effectivePolicyValidationErrorsJsonList[effectivePolicyValidationErrorsIndex].AsObject());
    }
    m_effectivePolicyValidationErrorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
