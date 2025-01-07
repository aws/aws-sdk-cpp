﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTrainingPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrainingPlansResult::ListTrainingPlansResult()
{
}

ListTrainingPlansResult::ListTrainingPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrainingPlansResult& ListTrainingPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TrainingPlanSummaries"))
  {
    Aws::Utils::Array<JsonView> trainingPlanSummariesJsonList = jsonValue.GetArray("TrainingPlanSummaries");
    for(unsigned trainingPlanSummariesIndex = 0; trainingPlanSummariesIndex < trainingPlanSummariesJsonList.GetLength(); ++trainingPlanSummariesIndex)
    {
      m_trainingPlanSummaries.push_back(trainingPlanSummariesJsonList[trainingPlanSummariesIndex].AsObject());
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
