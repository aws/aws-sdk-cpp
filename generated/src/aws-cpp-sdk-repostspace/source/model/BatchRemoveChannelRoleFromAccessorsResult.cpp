﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/BatchRemoveChannelRoleFromAccessorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchRemoveChannelRoleFromAccessorsResult::BatchRemoveChannelRoleFromAccessorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchRemoveChannelRoleFromAccessorsResult& BatchRemoveChannelRoleFromAccessorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("removedAccessorIds"))
  {
    Aws::Utils::Array<JsonView> removedAccessorIdsJsonList = jsonValue.GetArray("removedAccessorIds");
    for(unsigned removedAccessorIdsIndex = 0; removedAccessorIdsIndex < removedAccessorIdsJsonList.GetLength(); ++removedAccessorIdsIndex)
    {
      m_removedAccessorIds.push_back(removedAccessorIdsJsonList[removedAccessorIdsIndex].AsString());
    }
    m_removedAccessorIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
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
