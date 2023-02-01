/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAttributeGroupsForApplicationResult::ListAttributeGroupsForApplicationResult()
{
}

ListAttributeGroupsForApplicationResult::ListAttributeGroupsForApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAttributeGroupsForApplicationResult& ListAttributeGroupsForApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("attributeGroupsDetails"))
  {
    Aws::Utils::Array<JsonView> attributeGroupsDetailsJsonList = jsonValue.GetArray("attributeGroupsDetails");
    for(unsigned attributeGroupsDetailsIndex = 0; attributeGroupsDetailsIndex < attributeGroupsDetailsJsonList.GetLength(); ++attributeGroupsDetailsIndex)
    {
      m_attributeGroupsDetails.push_back(attributeGroupsDetailsJsonList[attributeGroupsDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
