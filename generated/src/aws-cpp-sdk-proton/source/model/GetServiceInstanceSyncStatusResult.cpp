/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetServiceInstanceSyncStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServiceInstanceSyncStatusResult::GetServiceInstanceSyncStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServiceInstanceSyncStatusResult& GetServiceInstanceSyncStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("desiredState"))
  {
    m_desiredState = jsonValue.GetObject("desiredState");
    m_desiredStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestSuccessfulSync"))
  {
    m_latestSuccessfulSync = jsonValue.GetObject("latestSuccessfulSync");
    m_latestSuccessfulSyncHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestSync"))
  {
    m_latestSync = jsonValue.GetObject("latestSync");
    m_latestSyncHasBeenSet = true;
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
