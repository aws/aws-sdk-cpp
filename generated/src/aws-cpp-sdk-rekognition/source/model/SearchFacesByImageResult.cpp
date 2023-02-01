/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchFacesByImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchFacesByImageResult::SearchFacesByImageResult() : 
    m_searchedFaceConfidence(0.0)
{
}

SearchFacesByImageResult::SearchFacesByImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_searchedFaceConfidence(0.0)
{
  *this = result;
}

SearchFacesByImageResult& SearchFacesByImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SearchedFaceBoundingBox"))
  {
    m_searchedFaceBoundingBox = jsonValue.GetObject("SearchedFaceBoundingBox");

  }

  if(jsonValue.ValueExists("SearchedFaceConfidence"))
  {
    m_searchedFaceConfidence = jsonValue.GetDouble("SearchedFaceConfidence");

  }

  if(jsonValue.ValueExists("FaceMatches"))
  {
    Aws::Utils::Array<JsonView> faceMatchesJsonList = jsonValue.GetArray("FaceMatches");
    for(unsigned faceMatchesIndex = 0; faceMatchesIndex < faceMatchesJsonList.GetLength(); ++faceMatchesIndex)
    {
      m_faceMatches.push_back(faceMatchesJsonList[faceMatchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");

  }



  return *this;
}
