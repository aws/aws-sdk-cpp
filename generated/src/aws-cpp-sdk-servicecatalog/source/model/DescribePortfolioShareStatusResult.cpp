/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribePortfolioShareStatusResult.h>
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

DescribePortfolioShareStatusResult::DescribePortfolioShareStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePortfolioShareStatusResult& DescribePortfolioShareStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PortfolioShareToken"))
  {
    m_portfolioShareToken = jsonValue.GetString("PortfolioShareToken");
    m_portfolioShareTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PortfolioId"))
  {
    m_portfolioId = jsonValue.GetString("PortfolioId");
    m_portfolioIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrganizationNodeValue"))
  {
    m_organizationNodeValue = jsonValue.GetString("OrganizationNodeValue");
    m_organizationNodeValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareDetails"))
  {
    m_shareDetails = jsonValue.GetObject("ShareDetails");
    m_shareDetailsHasBeenSet = true;
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
