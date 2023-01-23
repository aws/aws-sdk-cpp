/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DeleteFacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteFacesResult::DeleteFacesResult()
{
}

DeleteFacesResult::DeleteFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteFacesResult& DeleteFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeletedFaces"))
  {
    Aws::Utils::Array<JsonView> deletedFacesJsonList = jsonValue.GetArray("DeletedFaces");
    for(unsigned deletedFacesIndex = 0; deletedFacesIndex < deletedFacesJsonList.GetLength(); ++deletedFacesIndex)
    {
      m_deletedFaces.push_back(deletedFacesJsonList[deletedFacesIndex].AsString());
    }
  }



  return *this;
}
