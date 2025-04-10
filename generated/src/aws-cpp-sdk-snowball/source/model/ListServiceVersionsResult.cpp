﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ListServiceVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceVersionsResult::ListServiceVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceVersionsResult& ListServiceVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceVersions"))
  {
    Aws::Utils::Array<JsonView> serviceVersionsJsonList = jsonValue.GetArray("ServiceVersions");
    for(unsigned serviceVersionsIndex = 0; serviceVersionsIndex < serviceVersionsJsonList.GetLength(); ++serviceVersionsIndex)
    {
      m_serviceVersions.push_back(serviceVersionsJsonList[serviceVersionsIndex].AsObject());
    }
    m_serviceVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = ServiceNameMapper::GetServiceNameForName(jsonValue.GetString("ServiceName"));
    m_serviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DependentServices"))
  {
    Aws::Utils::Array<JsonView> dependentServicesJsonList = jsonValue.GetArray("DependentServices");
    for(unsigned dependentServicesIndex = 0; dependentServicesIndex < dependentServicesJsonList.GetLength(); ++dependentServicesIndex)
    {
      m_dependentServices.push_back(dependentServicesJsonList[dependentServicesIndex].AsObject());
    }
    m_dependentServicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
