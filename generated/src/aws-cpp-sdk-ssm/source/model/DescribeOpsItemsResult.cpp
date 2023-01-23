/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeOpsItemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOpsItemsResult::DescribeOpsItemsResult()
{
}

DescribeOpsItemsResult::DescribeOpsItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOpsItemsResult& DescribeOpsItemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("OpsItemSummaries"))
  {
    Aws::Utils::Array<JsonView> opsItemSummariesJsonList = jsonValue.GetArray("OpsItemSummaries");
    for(unsigned opsItemSummariesIndex = 0; opsItemSummariesIndex < opsItemSummariesJsonList.GetLength(); ++opsItemSummariesIndex)
    {
      m_opsItemSummaries.push_back(opsItemSummariesJsonList[opsItemSummariesIndex].AsObject());
    }
  }



  return *this;
}
