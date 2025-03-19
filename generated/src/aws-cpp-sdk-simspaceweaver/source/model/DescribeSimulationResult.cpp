/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/DescribeSimulationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSimulationResult::DescribeSimulationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSimulationResult& DescribeSimulationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LiveSimulationState"))
  {
    m_liveSimulationState = jsonValue.GetObject("LiveSimulationState");
    m_liveSimulationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LoggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumDuration"))
  {
    m_maximumDuration = jsonValue.GetString("MaximumDuration");
    m_maximumDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaS3Location"))
  {
    m_schemaS3Location = jsonValue.GetObject("SchemaS3Location");
    m_schemaS3LocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnapshotS3Location"))
  {
    m_snapshotS3Location = jsonValue.GetObject("SnapshotS3Location");
    m_snapshotS3LocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartError"))
  {
    m_startError = jsonValue.GetString("StartError");
    m_startErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SimulationStatusMapper::GetSimulationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = SimulationTargetStatusMapper::GetSimulationTargetStatusForName(jsonValue.GetString("TargetStatus"));
    m_targetStatusHasBeenSet = true;
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
