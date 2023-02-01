/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectLabelsResult::DetectLabelsResult() : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
}

DetectLabelsResult::DetectLabelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
  *this = result;
}

DetectLabelsResult& DetectLabelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OrientationCorrection"))
  {
    m_orientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("OrientationCorrection"));

  }

  if(jsonValue.ValueExists("LabelModelVersion"))
  {
    m_labelModelVersion = jsonValue.GetString("LabelModelVersion");

  }

  if(jsonValue.ValueExists("ImageProperties"))
  {
    m_imageProperties = jsonValue.GetObject("ImageProperties");

  }



  return *this;
}
