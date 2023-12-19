/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/BatchDescribeEntitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDescribeEntitiesResult::BatchDescribeEntitiesResult()
{
}

BatchDescribeEntitiesResult::BatchDescribeEntitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDescribeEntitiesResult& BatchDescribeEntitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntityDetails"))
  {
    Aws::Map<Aws::String, JsonView> entityDetailsJsonMap = jsonValue.GetObject("EntityDetails").GetAllObjects();
    for(auto& entityDetailsItem : entityDetailsJsonMap)
    {
      m_entityDetails[entityDetailsItem.first] = entityDetailsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Map<Aws::String, JsonView> errorsJsonMap = jsonValue.GetObject("Errors").GetAllObjects();
    for(auto& errorsItem : errorsJsonMap)
    {
      m_errors[errorsItem.first] = errorsItem.second.AsObject();
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
