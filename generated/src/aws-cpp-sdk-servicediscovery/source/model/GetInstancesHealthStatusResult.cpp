/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/GetInstancesHealthStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInstancesHealthStatusResult::GetInstancesHealthStatusResult()
{
}

GetInstancesHealthStatusResult::GetInstancesHealthStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInstancesHealthStatusResult& GetInstancesHealthStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    Aws::Map<Aws::String, JsonView> statusJsonMap = jsonValue.GetObject("Status").GetAllObjects();
    for(auto& statusItem : statusJsonMap)
    {
      m_status[statusItem.first] = HealthStatusMapper::GetHealthStatusForName(statusItem.second.AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
