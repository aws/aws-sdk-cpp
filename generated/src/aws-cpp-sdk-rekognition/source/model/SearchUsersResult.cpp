/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchUsersResult.h>
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

SearchUsersResult::SearchUsersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchUsersResult& SearchUsersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserMatches"))
  {
    Aws::Utils::Array<JsonView> userMatchesJsonList = jsonValue.GetArray("UserMatches");
    for(unsigned userMatchesIndex = 0; userMatchesIndex < userMatchesJsonList.GetLength(); ++userMatchesIndex)
    {
      m_userMatches.push_back(userMatchesJsonList[userMatchesIndex].AsObject());
    }
    m_userMatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");
    m_faceModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchedFace"))
  {
    m_searchedFace = jsonValue.GetObject("SearchedFace");
    m_searchedFaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchedUser"))
  {
    m_searchedUser = jsonValue.GetObject("SearchedUser");
    m_searchedUserHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
