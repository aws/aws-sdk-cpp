﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/IndexFacesResult.h>
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

IndexFacesResult::IndexFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

IndexFacesResult& IndexFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FaceRecords"))
  {
    Aws::Utils::Array<JsonView> faceRecordsJsonList = jsonValue.GetArray("FaceRecords");
    for(unsigned faceRecordsIndex = 0; faceRecordsIndex < faceRecordsJsonList.GetLength(); ++faceRecordsIndex)
    {
      m_faceRecords.push_back(faceRecordsJsonList[faceRecordsIndex].AsObject());
    }
    m_faceRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrientationCorrection"))
  {
    m_orientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("OrientationCorrection"));
    m_orientationCorrectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");
    m_faceModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnindexedFaces"))
  {
    Aws::Utils::Array<JsonView> unindexedFacesJsonList = jsonValue.GetArray("UnindexedFaces");
    for(unsigned unindexedFacesIndex = 0; unindexedFacesIndex < unindexedFacesJsonList.GetLength(); ++unindexedFacesIndex)
    {
      m_unindexedFaces.push_back(unindexedFacesJsonList[unindexedFacesIndex].AsObject());
    }
    m_unindexedFacesHasBeenSet = true;
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
