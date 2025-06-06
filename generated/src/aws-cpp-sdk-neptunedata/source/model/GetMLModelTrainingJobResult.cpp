﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetMLModelTrainingJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLModelTrainingJobResult::GetMLModelTrainingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMLModelTrainingJobResult& GetMLModelTrainingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("processingJob"))
  {
    m_processingJob = jsonValue.GetObject("processingJob");
    m_processingJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hpoJob"))
  {
    m_hpoJob = jsonValue.GetObject("hpoJob");
    m_hpoJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelTransformJob"))
  {
    m_modelTransformJob = jsonValue.GetObject("modelTransformJob");
    m_modelTransformJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mlModels"))
  {
    Aws::Utils::Array<JsonView> mlModelsJsonList = jsonValue.GetArray("mlModels");
    for(unsigned mlModelsIndex = 0; mlModelsIndex < mlModelsJsonList.GetLength(); ++mlModelsIndex)
    {
      m_mlModels.push_back(mlModelsJsonList[mlModelsIndex].AsObject());
    }
    m_mlModelsHasBeenSet = true;
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
