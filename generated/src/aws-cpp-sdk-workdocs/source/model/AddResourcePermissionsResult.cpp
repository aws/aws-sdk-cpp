/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/AddResourcePermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddResourcePermissionsResult::AddResourcePermissionsResult()
{
}

AddResourcePermissionsResult::AddResourcePermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddResourcePermissionsResult& AddResourcePermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ShareResults"))
  {
    Aws::Utils::Array<JsonView> shareResultsJsonList = jsonValue.GetArray("ShareResults");
    for(unsigned shareResultsIndex = 0; shareResultsIndex < shareResultsJsonList.GetLength(); ++shareResultsIndex)
    {
      m_shareResults.push_back(shareResultsJsonList[shareResultsIndex].AsObject());
    }
  }



  return *this;
}
