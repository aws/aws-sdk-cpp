/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateAwsLogSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAwsLogSourceResult::CreateAwsLogSourceResult()
{
}

CreateAwsLogSourceResult::CreateAwsLogSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAwsLogSourceResult& CreateAwsLogSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("failed"))
  {
    Aws::Utils::Array<JsonView> failedJsonList = jsonValue.GetArray("failed");
    for(unsigned failedIndex = 0; failedIndex < failedJsonList.GetLength(); ++failedIndex)
    {
      m_failed.push_back(failedJsonList[failedIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("processing"))
  {
    Aws::Utils::Array<JsonView> processingJsonList = jsonValue.GetArray("processing");
    for(unsigned processingIndex = 0; processingIndex < processingJsonList.GetLength(); ++processingIndex)
    {
      m_processing.push_back(processingJsonList[processingIndex].AsString());
    }
  }



  return *this;
}
