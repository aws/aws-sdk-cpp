/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListAutoMLJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutoMLJobsResult::ListAutoMLJobsResult()
{
}

ListAutoMLJobsResult::ListAutoMLJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAutoMLJobsResult& ListAutoMLJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoMLJobSummaries"))
  {
    Aws::Utils::Array<JsonView> autoMLJobSummariesJsonList = jsonValue.GetArray("AutoMLJobSummaries");
    for(unsigned autoMLJobSummariesIndex = 0; autoMLJobSummariesIndex < autoMLJobSummariesJsonList.GetLength(); ++autoMLJobSummariesIndex)
    {
      m_autoMLJobSummaries.push_back(autoMLJobSummariesJsonList[autoMLJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
