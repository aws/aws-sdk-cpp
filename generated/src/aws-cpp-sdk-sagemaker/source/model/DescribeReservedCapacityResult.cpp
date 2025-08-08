/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeReservedCapacityResult.h>
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

DescribeReservedCapacityResult::DescribeReservedCapacityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReservedCapacityResult& DescribeReservedCapacityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReservedCapacityArn"))
  {
    m_reservedCapacityArn = jsonValue.GetString("ReservedCapacityArn");
    m_reservedCapacityArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReservedCapacityType"))
  {
    m_reservedCapacityType = ReservedCapacityTypeMapper::GetReservedCapacityTypeForName(jsonValue.GetString("ReservedCapacityType"));
    m_reservedCapacityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReservedCapacityStatusMapper::GetReservedCapacityStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationHours"))
  {
    m_durationHours = jsonValue.GetInt64("DurationHours");
    m_durationHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationMinutes"))
  {
    m_durationMinutes = jsonValue.GetInt64("DurationMinutes");
    m_durationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ReservedCapacityInstanceTypeMapper::GetReservedCapacityInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalInstanceCount"))
  {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");
    m_totalInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableInstanceCount"))
  {
    m_availableInstanceCount = jsonValue.GetInteger("AvailableInstanceCount");
    m_availableInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InUseInstanceCount"))
  {
    m_inUseInstanceCount = jsonValue.GetInteger("InUseInstanceCount");
    m_inUseInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UltraServerSummary"))
  {
    m_ultraServerSummary = jsonValue.GetObject("UltraServerSummary");
    m_ultraServerSummaryHasBeenSet = true;
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
