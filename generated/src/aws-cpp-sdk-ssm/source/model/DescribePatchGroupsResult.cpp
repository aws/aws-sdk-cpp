/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePatchGroupsResult::DescribePatchGroupsResult()
{
}

DescribePatchGroupsResult::DescribePatchGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePatchGroupsResult& DescribePatchGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Mappings"))
  {
    Aws::Utils::Array<JsonView> mappingsJsonList = jsonValue.GetArray("Mappings");
    for(unsigned mappingsIndex = 0; mappingsIndex < mappingsJsonList.GetLength(); ++mappingsIndex)
    {
      m_mappings.push_back(mappingsJsonList[mappingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
