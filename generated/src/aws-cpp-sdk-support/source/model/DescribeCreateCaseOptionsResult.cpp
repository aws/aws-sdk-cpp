/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeCreateCaseOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCreateCaseOptionsResult::DescribeCreateCaseOptionsResult()
{
}

DescribeCreateCaseOptionsResult::DescribeCreateCaseOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCreateCaseOptionsResult& DescribeCreateCaseOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("languageAvailability"))
  {
    m_languageAvailability = jsonValue.GetString("languageAvailability");

  }

  if(jsonValue.ValueExists("communicationTypes"))
  {
    Aws::Utils::Array<JsonView> communicationTypesJsonList = jsonValue.GetArray("communicationTypes");
    for(unsigned communicationTypesIndex = 0; communicationTypesIndex < communicationTypesJsonList.GetLength(); ++communicationTypesIndex)
    {
      m_communicationTypes.push_back(communicationTypesJsonList[communicationTypesIndex].AsObject());
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
