/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CompareFacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CompareFacesResult::CompareFacesResult() : 
    m_sourceImageOrientationCorrection(OrientationCorrection::NOT_SET),
    m_targetImageOrientationCorrection(OrientationCorrection::NOT_SET)
{
}

CompareFacesResult::CompareFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sourceImageOrientationCorrection(OrientationCorrection::NOT_SET),
    m_targetImageOrientationCorrection(OrientationCorrection::NOT_SET)
{
  *this = result;
}

CompareFacesResult& CompareFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SourceImageFace"))
  {
    m_sourceImageFace = jsonValue.GetObject("SourceImageFace");

  }

  if(jsonValue.ValueExists("FaceMatches"))
  {
    Aws::Utils::Array<JsonView> faceMatchesJsonList = jsonValue.GetArray("FaceMatches");
    for(unsigned faceMatchesIndex = 0; faceMatchesIndex < faceMatchesJsonList.GetLength(); ++faceMatchesIndex)
    {
      m_faceMatches.push_back(faceMatchesJsonList[faceMatchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnmatchedFaces"))
  {
    Aws::Utils::Array<JsonView> unmatchedFacesJsonList = jsonValue.GetArray("UnmatchedFaces");
    for(unsigned unmatchedFacesIndex = 0; unmatchedFacesIndex < unmatchedFacesJsonList.GetLength(); ++unmatchedFacesIndex)
    {
      m_unmatchedFaces.push_back(unmatchedFacesJsonList[unmatchedFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SourceImageOrientationCorrection"))
  {
    m_sourceImageOrientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("SourceImageOrientationCorrection"));

  }

  if(jsonValue.ValueExists("TargetImageOrientationCorrection"))
  {
    m_targetImageOrientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("TargetImageOrientationCorrection"));

  }



  return *this;
}
