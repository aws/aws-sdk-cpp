/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCentralizationRulesForOrganizationResult::ListCentralizationRulesForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCentralizationRulesForOrganizationResult& ListCentralizationRulesForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CentralizationRuleSummaries"))
  {
    Aws::Utils::Array<JsonView> centralizationRuleSummariesJsonList = jsonValue.GetArray("CentralizationRuleSummaries");
    for(unsigned centralizationRuleSummariesIndex = 0; centralizationRuleSummariesIndex < centralizationRuleSummariesJsonList.GetLength(); ++centralizationRuleSummariesIndex)
    {
      m_centralizationRuleSummaries.push_back(centralizationRuleSummariesJsonList[centralizationRuleSummariesIndex].AsObject());
    }
    m_centralizationRuleSummariesHasBeenSet = true;
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
