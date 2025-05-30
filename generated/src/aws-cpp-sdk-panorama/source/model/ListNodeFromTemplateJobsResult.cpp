﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListNodeFromTemplateJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNodeFromTemplateJobsResult::ListNodeFromTemplateJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNodeFromTemplateJobsResult& ListNodeFromTemplateJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeFromTemplateJobs"))
  {
    Aws::Utils::Array<JsonView> nodeFromTemplateJobsJsonList = jsonValue.GetArray("NodeFromTemplateJobs");
    for(unsigned nodeFromTemplateJobsIndex = 0; nodeFromTemplateJobsIndex < nodeFromTemplateJobsJsonList.GetLength(); ++nodeFromTemplateJobsIndex)
    {
      m_nodeFromTemplateJobs.push_back(nodeFromTemplateJobsJsonList[nodeFromTemplateJobsIndex].AsObject());
    }
    m_nodeFromTemplateJobsHasBeenSet = true;
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
