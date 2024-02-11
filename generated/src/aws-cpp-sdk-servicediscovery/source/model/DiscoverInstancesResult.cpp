/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/DiscoverInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DiscoverInstancesResult::DiscoverInstancesResult() : 
    m_instancesRevision(0)
{
}

DiscoverInstancesResult::DiscoverInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_instancesRevision(0)
{
  *this = result;
}

DiscoverInstancesResult& DiscoverInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Instances"))
  {
    Aws::Utils::Array<JsonView> instancesJsonList = jsonValue.GetArray("Instances");
    for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
    {
      m_instances.push_back(instancesJsonList[instancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("InstancesRevision"))
  {
    m_instancesRevision = jsonValue.GetInt64("InstancesRevision");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
