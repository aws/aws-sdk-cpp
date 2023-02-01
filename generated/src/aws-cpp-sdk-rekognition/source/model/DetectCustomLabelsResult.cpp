/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectCustomLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectCustomLabelsResult::DetectCustomLabelsResult()
{
}

DetectCustomLabelsResult::DetectCustomLabelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectCustomLabelsResult& DetectCustomLabelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomLabels"))
  {
    Aws::Utils::Array<JsonView> customLabelsJsonList = jsonValue.GetArray("CustomLabels");
    for(unsigned customLabelsIndex = 0; customLabelsIndex < customLabelsJsonList.GetLength(); ++customLabelsIndex)
    {
      m_customLabels.push_back(customLabelsJsonList[customLabelsIndex].AsObject());
    }
  }



  return *this;
}
