/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetSagemakerServicecatalogPortfolioStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSagemakerServicecatalogPortfolioStatusResult::GetSagemakerServicecatalogPortfolioStatusResult() : 
    m_status(SagemakerServicecatalogStatus::NOT_SET)
{
}

GetSagemakerServicecatalogPortfolioStatusResult::GetSagemakerServicecatalogPortfolioStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SagemakerServicecatalogStatus::NOT_SET)
{
  *this = result;
}

GetSagemakerServicecatalogPortfolioStatusResult& GetSagemakerServicecatalogPortfolioStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SagemakerServicecatalogStatusMapper::GetSagemakerServicecatalogStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
