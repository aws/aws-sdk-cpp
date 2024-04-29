/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/UpdateAccountSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAccountSettingsResult::UpdateAccountSettingsResult() : 
    m_maxQueryTCU(0),
    m_queryPricingModel(QueryPricingModel::NOT_SET)
{
}

UpdateAccountSettingsResult::UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxQueryTCU(0),
    m_queryPricingModel(QueryPricingModel::NOT_SET)
{
  *this = result;
}

UpdateAccountSettingsResult& UpdateAccountSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MaxQueryTCU"))
  {
    m_maxQueryTCU = jsonValue.GetInteger("MaxQueryTCU");

  }

  if(jsonValue.ValueExists("QueryPricingModel"))
  {
    m_queryPricingModel = QueryPricingModelMapper::GetQueryPricingModelForName(jsonValue.GetString("QueryPricingModel"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
