/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListPackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPackagesResult::ListPackagesResult()
{
}

ListPackagesResult::ListPackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPackagesResult& ListPackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Packages"))
  {
    Aws::Utils::Array<JsonView> packagesJsonList = jsonValue.GetArray("Packages");
    for(unsigned packagesIndex = 0; packagesIndex < packagesJsonList.GetLength(); ++packagesIndex)
    {
      m_packages.push_back(packagesJsonList[packagesIndex].AsObject());
    }
  }



  return *this;
}
