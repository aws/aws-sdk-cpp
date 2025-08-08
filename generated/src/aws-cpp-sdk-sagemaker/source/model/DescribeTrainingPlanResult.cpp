/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTrainingPlanResult.h>
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

DescribeTrainingPlanResult::DescribeTrainingPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrainingPlanResult& DescribeTrainingPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrainingPlanArn"))
  {
    m_trainingPlanArn = jsonValue.GetString("TrainingPlanArn");
    m_trainingPlanArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingPlanName"))
  {
    m_trainingPlanName = jsonValue.GetString("TrainingPlanName");
    m_trainingPlanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TrainingPlanStatusMapper::GetTrainingPlanStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
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
  if(jsonValue.ValueExists("UpfrontFee"))
  {
    m_upfrontFee = jsonValue.GetString("UpfrontFee");
    m_upfrontFeeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");
    m_currencyCodeHasBeenSet = true;
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
  if(jsonValue.ValueExists("UnhealthyInstanceCount"))
  {
    m_unhealthyInstanceCount = jsonValue.GetInteger("UnhealthyInstanceCount");
    m_unhealthyInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableSpareInstanceCount"))
  {
    m_availableSpareInstanceCount = jsonValue.GetInteger("AvailableSpareInstanceCount");
    m_availableSpareInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalUltraServerCount"))
  {
    m_totalUltraServerCount = jsonValue.GetInteger("TotalUltraServerCount");
    m_totalUltraServerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetResources"))
  {
    Aws::Utils::Array<JsonView> targetResourcesJsonList = jsonValue.GetArray("TargetResources");
    for(unsigned targetResourcesIndex = 0; targetResourcesIndex < targetResourcesJsonList.GetLength(); ++targetResourcesIndex)
    {
      m_targetResources.push_back(SageMakerResourceNameMapper::GetSageMakerResourceNameForName(targetResourcesJsonList[targetResourcesIndex].AsString()));
    }
    m_targetResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReservedCapacitySummaries"))
  {
    Aws::Utils::Array<JsonView> reservedCapacitySummariesJsonList = jsonValue.GetArray("ReservedCapacitySummaries");
    for(unsigned reservedCapacitySummariesIndex = 0; reservedCapacitySummariesIndex < reservedCapacitySummariesJsonList.GetLength(); ++reservedCapacitySummariesIndex)
    {
      m_reservedCapacitySummaries.push_back(reservedCapacitySummariesJsonList[reservedCapacitySummariesIndex].AsObject());
    }
    m_reservedCapacitySummariesHasBeenSet = true;
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
