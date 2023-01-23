/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListDevicesJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDevicesJobsResult::ListDevicesJobsResult()
{
}

ListDevicesJobsResult::ListDevicesJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDevicesJobsResult& ListDevicesJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceJobs"))
  {
    Aws::Utils::Array<JsonView> deviceJobsJsonList = jsonValue.GetArray("DeviceJobs");
    for(unsigned deviceJobsIndex = 0; deviceJobsIndex < deviceJobsJsonList.GetLength(); ++deviceJobsIndex)
    {
      m_deviceJobs.push_back(deviceJobsJsonList[deviceJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
