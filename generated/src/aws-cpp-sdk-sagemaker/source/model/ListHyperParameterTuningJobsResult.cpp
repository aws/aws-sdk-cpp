/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListHyperParameterTuningJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHyperParameterTuningJobsResult::ListHyperParameterTuningJobsResult()
{
}

ListHyperParameterTuningJobsResult::ListHyperParameterTuningJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHyperParameterTuningJobsResult& ListHyperParameterTuningJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HyperParameterTuningJobSummaries"))
  {
    Aws::Utils::Array<JsonView> hyperParameterTuningJobSummariesJsonList = jsonValue.GetArray("HyperParameterTuningJobSummaries");
    for(unsigned hyperParameterTuningJobSummariesIndex = 0; hyperParameterTuningJobSummariesIndex < hyperParameterTuningJobSummariesJsonList.GetLength(); ++hyperParameterTuningJobSummariesIndex)
    {
      m_hyperParameterTuningJobSummaries.push_back(hyperParameterTuningJobSummariesJsonList[hyperParameterTuningJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
