/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelCardExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelCardExportJobsResult::ListModelCardExportJobsResult()
{
}

ListModelCardExportJobsResult::ListModelCardExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelCardExportJobsResult& ListModelCardExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardExportJobSummaries"))
  {
    Aws::Utils::Array<JsonView> modelCardExportJobSummariesJsonList = jsonValue.GetArray("ModelCardExportJobSummaries");
    for(unsigned modelCardExportJobSummariesIndex = 0; modelCardExportJobSummariesIndex < modelCardExportJobSummariesJsonList.GetLength(); ++modelCardExportJobSummariesIndex)
    {
      m_modelCardExportJobSummaries.push_back(modelCardExportJobSummariesJsonList[modelCardExportJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
