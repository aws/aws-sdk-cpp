﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListTemplateVersionsResult.h>
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

ListTemplateVersionsResult::ListTemplateVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTemplateVersionsResult& ListTemplateVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplateVersionSummaryList"))
  {
    Aws::Utils::Array<JsonView> templateVersionSummaryListJsonList = jsonValue.GetArray("TemplateVersionSummaryList");
    for(unsigned templateVersionSummaryListIndex = 0; templateVersionSummaryListIndex < templateVersionSummaryListJsonList.GetLength(); ++templateVersionSummaryListIndex)
    {
      m_templateVersionSummaryList.push_back(templateVersionSummaryListJsonList[templateVersionSummaryListIndex].AsObject());
    }
    m_templateVersionSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
