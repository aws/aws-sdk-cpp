/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListComplianceSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComplianceSummariesResult::ListComplianceSummariesResult()
{
}

ListComplianceSummariesResult::ListComplianceSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComplianceSummariesResult& ListComplianceSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComplianceSummaryItems"))
  {
    Aws::Utils::Array<JsonView> complianceSummaryItemsJsonList = jsonValue.GetArray("ComplianceSummaryItems");
    for(unsigned complianceSummaryItemsIndex = 0; complianceSummaryItemsIndex < complianceSummaryItemsJsonList.GetLength(); ++complianceSummaryItemsIndex)
    {
      m_complianceSummaryItems.push_back(complianceSummaryItemsJsonList[complianceSummaryItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
