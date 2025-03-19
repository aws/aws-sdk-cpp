/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchImportFindingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchImportFindingsResult::BatchImportFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchImportFindingsResult& BatchImportFindingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedCount"))
  {
    m_failedCount = jsonValue.GetInteger("FailedCount");
    m_failedCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuccessCount"))
  {
    m_successCount = jsonValue.GetInteger("SuccessCount");
    m_successCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedFindings"))
  {
    Aws::Utils::Array<JsonView> failedFindingsJsonList = jsonValue.GetArray("FailedFindings");
    for(unsigned failedFindingsIndex = 0; failedFindingsIndex < failedFindingsJsonList.GetLength(); ++failedFindingsIndex)
    {
      m_failedFindings.push_back(failedFindingsJsonList[failedFindingsIndex].AsObject());
    }
    m_failedFindingsHasBeenSet = true;
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
