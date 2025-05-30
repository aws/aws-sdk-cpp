﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVectorEnrichmentJobsResult::ListVectorEnrichmentJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVectorEnrichmentJobsResult& ListVectorEnrichmentJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VectorEnrichmentJobSummaries"))
  {
    Aws::Utils::Array<JsonView> vectorEnrichmentJobSummariesJsonList = jsonValue.GetArray("VectorEnrichmentJobSummaries");
    for(unsigned vectorEnrichmentJobSummariesIndex = 0; vectorEnrichmentJobSummariesIndex < vectorEnrichmentJobSummariesJsonList.GetLength(); ++vectorEnrichmentJobSummariesIndex)
    {
      m_vectorEnrichmentJobSummaries.push_back(vectorEnrichmentJobSummariesJsonList[vectorEnrichmentJobSummariesIndex].AsObject());
    }
    m_vectorEnrichmentJobSummariesHasBeenSet = true;
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
