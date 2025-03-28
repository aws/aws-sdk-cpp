﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListStandardsControlAssociationsResult.h>
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

ListStandardsControlAssociationsResult::ListStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStandardsControlAssociationsResult& ListStandardsControlAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StandardsControlAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> standardsControlAssociationSummariesJsonList = jsonValue.GetArray("StandardsControlAssociationSummaries");
    for(unsigned standardsControlAssociationSummariesIndex = 0; standardsControlAssociationSummariesIndex < standardsControlAssociationSummariesJsonList.GetLength(); ++standardsControlAssociationSummariesIndex)
    {
      m_standardsControlAssociationSummaries.push_back(standardsControlAssociationSummariesJsonList[standardsControlAssociationSummariesIndex].AsObject());
    }
    m_standardsControlAssociationSummariesHasBeenSet = true;
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


  return *this;
}
