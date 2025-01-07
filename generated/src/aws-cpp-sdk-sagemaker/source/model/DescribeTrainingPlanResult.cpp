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

DescribeTrainingPlanResult::DescribeTrainingPlanResult() : 
    m_status(TrainingPlanStatus::NOT_SET),
    m_durationHours(0),
    m_durationMinutes(0),
    m_totalInstanceCount(0),
    m_availableInstanceCount(0),
    m_inUseInstanceCount(0)
{
}

DescribeTrainingPlanResult::DescribeTrainingPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeTrainingPlanResult()
{
  *this = result;
}

DescribeTrainingPlanResult& DescribeTrainingPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrainingPlanArn"))
  {
    m_trainingPlanArn = jsonValue.GetString("TrainingPlanArn");

  }

  if(jsonValue.ValueExists("TrainingPlanName"))
  {
    m_trainingPlanName = jsonValue.GetString("TrainingPlanName");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TrainingPlanStatusMapper::GetTrainingPlanStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("DurationHours"))
  {
    m_durationHours = jsonValue.GetInt64("DurationHours");

  }

  if(jsonValue.ValueExists("DurationMinutes"))
  {
    m_durationMinutes = jsonValue.GetInt64("DurationMinutes");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("UpfrontFee"))
  {
    m_upfrontFee = jsonValue.GetString("UpfrontFee");

  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

  }

  if(jsonValue.ValueExists("TotalInstanceCount"))
  {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");

  }

  if(jsonValue.ValueExists("AvailableInstanceCount"))
  {
    m_availableInstanceCount = jsonValue.GetInteger("AvailableInstanceCount");

  }

  if(jsonValue.ValueExists("InUseInstanceCount"))
  {
    m_inUseInstanceCount = jsonValue.GetInteger("InUseInstanceCount");

  }

  if(jsonValue.ValueExists("TargetResources"))
  {
    Aws::Utils::Array<JsonView> targetResourcesJsonList = jsonValue.GetArray("TargetResources");
    for(unsigned targetResourcesIndex = 0; targetResourcesIndex < targetResourcesJsonList.GetLength(); ++targetResourcesIndex)
    {
      m_targetResources.push_back(SageMakerResourceNameMapper::GetSageMakerResourceNameForName(targetResourcesJsonList[targetResourcesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("ReservedCapacitySummaries"))
  {
    Aws::Utils::Array<JsonView> reservedCapacitySummariesJsonList = jsonValue.GetArray("ReservedCapacitySummaries");
    for(unsigned reservedCapacitySummariesIndex = 0; reservedCapacitySummariesIndex < reservedCapacitySummariesJsonList.GetLength(); ++reservedCapacitySummariesIndex)
    {
      m_reservedCapacitySummaries.push_back(reservedCapacitySummariesJsonList[reservedCapacitySummariesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
