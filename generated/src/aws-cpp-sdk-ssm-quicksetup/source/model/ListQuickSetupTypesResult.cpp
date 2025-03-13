/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ListQuickSetupTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQuickSetupTypesResult::ListQuickSetupTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQuickSetupTypesResult& ListQuickSetupTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QuickSetupTypeList"))
  {
    Aws::Utils::Array<JsonView> quickSetupTypeListJsonList = jsonValue.GetArray("QuickSetupTypeList");
    for(unsigned quickSetupTypeListIndex = 0; quickSetupTypeListIndex < quickSetupTypeListJsonList.GetLength(); ++quickSetupTypeListIndex)
    {
      m_quickSetupTypeList.push_back(quickSetupTypeListJsonList[quickSetupTypeListIndex].AsObject());
    }
    m_quickSetupTypeListHasBeenSet = true;
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
