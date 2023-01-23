/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeAvailabilityMonitorTestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAvailabilityMonitorTestResult::DescribeAvailabilityMonitorTestResult() : 
    m_status(AvailabilityMonitorTestStatus::NOT_SET)
{
}

DescribeAvailabilityMonitorTestResult::DescribeAvailabilityMonitorTestResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AvailabilityMonitorTestStatus::NOT_SET)
{
  *this = result;
}

DescribeAvailabilityMonitorTestResult& DescribeAvailabilityMonitorTestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AvailabilityMonitorTestStatusMapper::GetAvailabilityMonitorTestStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }



  return *this;
}
