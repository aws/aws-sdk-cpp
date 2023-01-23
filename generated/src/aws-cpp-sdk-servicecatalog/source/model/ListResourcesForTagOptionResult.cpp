/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListResourcesForTagOptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourcesForTagOptionResult::ListResourcesForTagOptionResult()
{
}

ListResourcesForTagOptionResult::ListResourcesForTagOptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourcesForTagOptionResult& ListResourcesForTagOptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceDetails"))
  {
    Aws::Utils::Array<JsonView> resourceDetailsJsonList = jsonValue.GetArray("ResourceDetails");
    for(unsigned resourceDetailsIndex = 0; resourceDetailsIndex < resourceDetailsJsonList.GetLength(); ++resourceDetailsIndex)
    {
      m_resourceDetails.push_back(resourceDetailsJsonList[resourceDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PageToken"))
  {
    m_pageToken = jsonValue.GetString("PageToken");

  }



  return *this;
}
