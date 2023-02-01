/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/SearchResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchResourcesResult::SearchResourcesResult()
{
}

SearchResourcesResult::SearchResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchResourcesResult& SearchResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> resourceIdentifiersJsonList = jsonValue.GetArray("ResourceIdentifiers");
    for(unsigned resourceIdentifiersIndex = 0; resourceIdentifiersIndex < resourceIdentifiersJsonList.GetLength(); ++resourceIdentifiersIndex)
    {
      m_resourceIdentifiers.push_back(resourceIdentifiersJsonList[resourceIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("QueryErrors"))
  {
    Aws::Utils::Array<JsonView> queryErrorsJsonList = jsonValue.GetArray("QueryErrors");
    for(unsigned queryErrorsIndex = 0; queryErrorsIndex < queryErrorsJsonList.GetLength(); ++queryErrorsIndex)
    {
      m_queryErrors.push_back(queryErrorsJsonList[queryErrorsIndex].AsObject());
    }
  }



  return *this;
}
