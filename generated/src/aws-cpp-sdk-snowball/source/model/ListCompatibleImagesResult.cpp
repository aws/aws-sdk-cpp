/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ListCompatibleImagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCompatibleImagesResult::ListCompatibleImagesResult()
{
}

ListCompatibleImagesResult::ListCompatibleImagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCompatibleImagesResult& ListCompatibleImagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CompatibleImages"))
  {
    Aws::Utils::Array<JsonView> compatibleImagesJsonList = jsonValue.GetArray("CompatibleImages");
    for(unsigned compatibleImagesIndex = 0; compatibleImagesIndex < compatibleImagesJsonList.GetLength(); ++compatibleImagesIndex)
    {
      m_compatibleImages.push_back(compatibleImagesJsonList[compatibleImagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
