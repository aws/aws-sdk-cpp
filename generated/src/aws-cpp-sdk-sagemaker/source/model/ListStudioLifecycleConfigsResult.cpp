﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListStudioLifecycleConfigsResult.h>
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

ListStudioLifecycleConfigsResult::ListStudioLifecycleConfigsResult()
{
}

ListStudioLifecycleConfigsResult::ListStudioLifecycleConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStudioLifecycleConfigsResult& ListStudioLifecycleConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("StudioLifecycleConfigs"))
  {
    Aws::Utils::Array<JsonView> studioLifecycleConfigsJsonList = jsonValue.GetArray("StudioLifecycleConfigs");
    for(unsigned studioLifecycleConfigsIndex = 0; studioLifecycleConfigsIndex < studioLifecycleConfigsJsonList.GetLength(); ++studioLifecycleConfigsIndex)
    {
      m_studioLifecycleConfigs.push_back(studioLifecycleConfigsJsonList[studioLifecycleConfigsIndex].AsObject());
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
