/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetResourceShareAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceShareAssociationsResult::GetResourceShareAssociationsResult()
{
}

GetResourceShareAssociationsResult::GetResourceShareAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceShareAssociationsResult& GetResourceShareAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceShareAssociations"))
  {
    Aws::Utils::Array<JsonView> resourceShareAssociationsJsonList = jsonValue.GetArray("resourceShareAssociations");
    for(unsigned resourceShareAssociationsIndex = 0; resourceShareAssociationsIndex < resourceShareAssociationsJsonList.GetLength(); ++resourceShareAssociationsIndex)
    {
      m_resourceShareAssociations.push_back(resourceShareAssociationsJsonList[resourceShareAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
