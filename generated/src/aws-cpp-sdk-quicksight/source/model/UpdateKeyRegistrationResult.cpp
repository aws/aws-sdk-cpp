/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateKeyRegistrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateKeyRegistrationResult::UpdateKeyRegistrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateKeyRegistrationResult& UpdateKeyRegistrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedKeyRegistration"))
  {
    Aws::Utils::Array<JsonView> failedKeyRegistrationJsonList = jsonValue.GetArray("FailedKeyRegistration");
    for(unsigned failedKeyRegistrationIndex = 0; failedKeyRegistrationIndex < failedKeyRegistrationJsonList.GetLength(); ++failedKeyRegistrationIndex)
    {
      m_failedKeyRegistration.push_back(failedKeyRegistrationJsonList[failedKeyRegistrationIndex].AsObject());
    }
    m_failedKeyRegistrationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuccessfulKeyRegistration"))
  {
    Aws::Utils::Array<JsonView> successfulKeyRegistrationJsonList = jsonValue.GetArray("SuccessfulKeyRegistration");
    for(unsigned successfulKeyRegistrationIndex = 0; successfulKeyRegistrationIndex < successfulKeyRegistrationJsonList.GetLength(); ++successfulKeyRegistrationIndex)
    {
      m_successfulKeyRegistration.push_back(successfulKeyRegistrationJsonList[successfulKeyRegistrationIndex].AsObject());
    }
    m_successfulKeyRegistrationHasBeenSet = true;
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
