/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListThemeVersionsResult.h>
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

ListThemeVersionsResult::ListThemeVersionsResult() : 
    m_status(0)
{
}

ListThemeVersionsResult::ListThemeVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListThemeVersionsResult& ListThemeVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThemeVersionSummaryList"))
  {
    Aws::Utils::Array<JsonView> themeVersionSummaryListJsonList = jsonValue.GetArray("ThemeVersionSummaryList");
    for(unsigned themeVersionSummaryListIndex = 0; themeVersionSummaryListIndex < themeVersionSummaryListJsonList.GetLength(); ++themeVersionSummaryListIndex)
    {
      m_themeVersionSummaryList.push_back(themeVersionSummaryListJsonList[themeVersionSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
