/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListWorkloadsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkloadsResult::ListWorkloadsResult()
{
}

ListWorkloadsResult::ListWorkloadsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkloadsResult& ListWorkloadsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkloadSummaries"))
  {
    Aws::Utils::Array<JsonView> workloadSummariesJsonList = jsonValue.GetArray("WorkloadSummaries");
    for(unsigned workloadSummariesIndex = 0; workloadSummariesIndex < workloadSummariesJsonList.GetLength(); ++workloadSummariesIndex)
    {
      m_workloadSummaries.push_back(workloadSummariesJsonList[workloadSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
