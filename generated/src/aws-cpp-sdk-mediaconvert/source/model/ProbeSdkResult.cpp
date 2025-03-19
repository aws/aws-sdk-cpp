/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProbeSdkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ProbeSdkResult::ProbeSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ProbeSdkResult& ProbeSdkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("probeResults"))
  {
    Aws::Utils::Array<JsonView> probeResultsJsonList = jsonValue.GetArray("probeResults");
    for(unsigned probeResultsIndex = 0; probeResultsIndex < probeResultsJsonList.GetLength(); ++probeResultsIndex)
    {
      m_probeResults.push_back(probeResultsJsonList[probeResultsIndex].AsObject());
    }
    m_probeResultsHasBeenSet = true;
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
