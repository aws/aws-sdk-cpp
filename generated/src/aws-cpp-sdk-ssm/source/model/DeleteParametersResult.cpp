﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeleteParametersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteParametersResult::DeleteParametersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteParametersResult& DeleteParametersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeletedParameters"))
  {
    Aws::Utils::Array<JsonView> deletedParametersJsonList = jsonValue.GetArray("DeletedParameters");
    for(unsigned deletedParametersIndex = 0; deletedParametersIndex < deletedParametersJsonList.GetLength(); ++deletedParametersIndex)
    {
      m_deletedParameters.push_back(deletedParametersJsonList[deletedParametersIndex].AsString());
    }
    m_deletedParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvalidParameters"))
  {
    Aws::Utils::Array<JsonView> invalidParametersJsonList = jsonValue.GetArray("InvalidParameters");
    for(unsigned invalidParametersIndex = 0; invalidParametersIndex < invalidParametersJsonList.GetLength(); ++invalidParametersIndex)
    {
      m_invalidParameters.push_back(invalidParametersJsonList[invalidParametersIndex].AsString());
    }
    m_invalidParametersHasBeenSet = true;
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
