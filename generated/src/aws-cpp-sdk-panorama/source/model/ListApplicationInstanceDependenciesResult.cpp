/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListApplicationInstanceDependenciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationInstanceDependenciesResult::ListApplicationInstanceDependenciesResult()
{
}

ListApplicationInstanceDependenciesResult::ListApplicationInstanceDependenciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationInstanceDependenciesResult& ListApplicationInstanceDependenciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("PackageObjects"))
  {
    Aws::Utils::Array<JsonView> packageObjectsJsonList = jsonValue.GetArray("PackageObjects");
    for(unsigned packageObjectsIndex = 0; packageObjectsIndex < packageObjectsJsonList.GetLength(); ++packageObjectsIndex)
    {
      m_packageObjects.push_back(packageObjectsJsonList[packageObjectsIndex].AsObject());
    }
  }



  return *this;
}
