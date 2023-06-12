/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchUsersByImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchUsersByImageResult::SearchUsersByImageResult()
{
}

SearchUsersByImageResult::SearchUsersByImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchUsersByImageResult& SearchUsersByImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserMatches"))
  {
    Aws::Utils::Array<JsonView> userMatchesJsonList = jsonValue.GetArray("UserMatches");
    for(unsigned userMatchesIndex = 0; userMatchesIndex < userMatchesJsonList.GetLength(); ++userMatchesIndex)
    {
      m_userMatches.push_back(userMatchesJsonList[userMatchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");

  }

  if(jsonValue.ValueExists("SearchedFace"))
  {
    m_searchedFace = jsonValue.GetObject("SearchedFace");

  }

  if(jsonValue.ValueExists("UnsearchedFaces"))
  {
    Aws::Utils::Array<JsonView> unsearchedFacesJsonList = jsonValue.GetArray("UnsearchedFaces");
    for(unsigned unsearchedFacesIndex = 0; unsearchedFacesIndex < unsearchedFacesJsonList.GetLength(); ++unsearchedFacesIndex)
    {
      m_unsearchedFaces.push_back(unsearchedFacesJsonList[unsearchedFacesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
