/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ListImageSetVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImageSetVersionsResult::ListImageSetVersionsResult()
{
}

ListImageSetVersionsResult::ListImageSetVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImageSetVersionsResult& ListImageSetVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("imageSetPropertiesList"))
  {
    Aws::Utils::Array<JsonView> imageSetPropertiesListJsonList = jsonValue.GetArray("imageSetPropertiesList");
    for(unsigned imageSetPropertiesListIndex = 0; imageSetPropertiesListIndex < imageSetPropertiesListJsonList.GetLength(); ++imageSetPropertiesListIndex)
    {
      m_imageSetPropertiesList.push_back(imageSetPropertiesListJsonList[imageSetPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
