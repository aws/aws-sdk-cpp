/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeInventoryDeletionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInventoryDeletionsResult::DescribeInventoryDeletionsResult()
{
}

DescribeInventoryDeletionsResult::DescribeInventoryDeletionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInventoryDeletionsResult& DescribeInventoryDeletionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InventoryDeletions"))
  {
    Aws::Utils::Array<JsonView> inventoryDeletionsJsonList = jsonValue.GetArray("InventoryDeletions");
    for(unsigned inventoryDeletionsIndex = 0; inventoryDeletionsIndex < inventoryDeletionsJsonList.GetLength(); ++inventoryDeletionsIndex)
    {
      m_inventoryDeletions.push_back(inventoryDeletionsJsonList[inventoryDeletionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
