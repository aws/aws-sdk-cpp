/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/UpdatePortfolioShareResult.h>
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

UpdatePortfolioShareResult::UpdatePortfolioShareResult() : 
    m_status(ShareStatus::NOT_SET)
{
}

UpdatePortfolioShareResult::UpdatePortfolioShareResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ShareStatus::NOT_SET)
{
  *this = result;
}

UpdatePortfolioShareResult& UpdatePortfolioShareResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PortfolioShareToken"))
  {
    m_portfolioShareToken = jsonValue.GetString("PortfolioShareToken");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
