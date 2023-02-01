/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListProjectPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProjectPoliciesResult::ListProjectPoliciesResult()
{
}

ListProjectPoliciesResult::ListProjectPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProjectPoliciesResult& ListProjectPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProjectPolicies"))
  {
    Aws::Utils::Array<JsonView> projectPoliciesJsonList = jsonValue.GetArray("ProjectPolicies");
    for(unsigned projectPoliciesIndex = 0; projectPoliciesIndex < projectPoliciesJsonList.GetLength(); ++projectPoliciesIndex)
    {
      m_projectPolicies.push_back(projectPoliciesJsonList[projectPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
