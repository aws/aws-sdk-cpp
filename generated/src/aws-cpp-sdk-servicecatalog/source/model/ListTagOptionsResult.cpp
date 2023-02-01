/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListTagOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTagOptionsResult::ListTagOptionsResult()
{
}

ListTagOptionsResult::ListTagOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTagOptionsResult& ListTagOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TagOptionDetails"))
  {
    Aws::Utils::Array<JsonView> tagOptionDetailsJsonList = jsonValue.GetArray("TagOptionDetails");
    for(unsigned tagOptionDetailsIndex = 0; tagOptionDetailsIndex < tagOptionDetailsJsonList.GetLength(); ++tagOptionDetailsIndex)
    {
      m_tagOptionDetails.push_back(tagOptionDetailsJsonList[tagOptionDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PageToken"))
  {
    m_pageToken = jsonValue.GetString("PageToken");

  }



  return *this;
}
