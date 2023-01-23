/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrainingJobsForHyperParameterTuningJobResult::ListTrainingJobsForHyperParameterTuningJobResult()
{
}

ListTrainingJobsForHyperParameterTuningJobResult::ListTrainingJobsForHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrainingJobsForHyperParameterTuningJobResult& ListTrainingJobsForHyperParameterTuningJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrainingJobSummaries"))
  {
    Aws::Utils::Array<JsonView> trainingJobSummariesJsonList = jsonValue.GetArray("TrainingJobSummaries");
    for(unsigned trainingJobSummariesIndex = 0; trainingJobSummariesIndex < trainingJobSummariesJsonList.GetLength(); ++trainingJobSummariesIndex)
    {
      m_trainingJobSummaries.push_back(trainingJobSummariesJsonList[trainingJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
