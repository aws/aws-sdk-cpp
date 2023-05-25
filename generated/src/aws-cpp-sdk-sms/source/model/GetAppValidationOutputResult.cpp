/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetAppValidationOutputResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAppValidationOutputResult::GetAppValidationOutputResult()
{
}

GetAppValidationOutputResult::GetAppValidationOutputResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAppValidationOutputResult& GetAppValidationOutputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("validationOutputList"))
  {
    Aws::Utils::Array<JsonView> validationOutputListJsonList = jsonValue.GetArray("validationOutputList");
    for(unsigned validationOutputListIndex = 0; validationOutputListIndex < validationOutputListJsonList.GetLength(); ++validationOutputListIndex)
    {
      m_validationOutputList.push_back(validationOutputListJsonList[validationOutputListIndex].AsObject());
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
