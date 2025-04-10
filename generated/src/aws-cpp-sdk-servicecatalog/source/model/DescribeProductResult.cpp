﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProductResult.h>
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

DescribeProductResult::DescribeProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProductResult& DescribeProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductViewSummary"))
  {
    m_productViewSummary = jsonValue.GetObject("ProductViewSummary");
    m_productViewSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisioningArtifacts"))
  {
    Aws::Utils::Array<JsonView> provisioningArtifactsJsonList = jsonValue.GetArray("ProvisioningArtifacts");
    for(unsigned provisioningArtifactsIndex = 0; provisioningArtifactsIndex < provisioningArtifactsJsonList.GetLength(); ++provisioningArtifactsIndex)
    {
      m_provisioningArtifacts.push_back(provisioningArtifactsJsonList[provisioningArtifactsIndex].AsObject());
    }
    m_provisioningArtifactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Budgets"))
  {
    Aws::Utils::Array<JsonView> budgetsJsonList = jsonValue.GetArray("Budgets");
    for(unsigned budgetsIndex = 0; budgetsIndex < budgetsJsonList.GetLength(); ++budgetsIndex)
    {
      m_budgets.push_back(budgetsJsonList[budgetsIndex].AsObject());
    }
    m_budgetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LaunchPaths"))
  {
    Aws::Utils::Array<JsonView> launchPathsJsonList = jsonValue.GetArray("LaunchPaths");
    for(unsigned launchPathsIndex = 0; launchPathsIndex < launchPathsJsonList.GetLength(); ++launchPathsIndex)
    {
      m_launchPaths.push_back(launchPathsJsonList[launchPathsIndex].AsObject());
    }
    m_launchPathsHasBeenSet = true;
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
