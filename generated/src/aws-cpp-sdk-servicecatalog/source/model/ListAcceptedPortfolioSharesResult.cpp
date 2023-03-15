﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAcceptedPortfolioSharesResult::ListAcceptedPortfolioSharesResult()
{
}

ListAcceptedPortfolioSharesResult::ListAcceptedPortfolioSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAcceptedPortfolioSharesResult& ListAcceptedPortfolioSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PortfolioDetails"))
  {
    Aws::Utils::Array<JsonView> portfolioDetailsJsonList = jsonValue.GetArray("PortfolioDetails");
    for(unsigned portfolioDetailsIndex = 0; portfolioDetailsIndex < portfolioDetailsJsonList.GetLength(); ++portfolioDetailsIndex)
    {
      m_portfolioDetails.push_back(portfolioDetailsJsonList[portfolioDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
