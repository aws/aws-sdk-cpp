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

DescribeSimulationResult::DescribeSimulationResult() : 
    m_status(SimulationStatus::NOT_SET),
    m_targetStatus(SimulationTargetStatus::NOT_SET)
{
}

DescribeSimulationResult::DescribeSimulationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SimulationStatus::NOT_SET),
    m_targetStatus(SimulationTargetStatus::NOT_SET)
{
  *this = result;
}

DescribeSimulationResult& DescribeSimulationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

  }

  if(jsonValue.ValueExists("LiveSimulationState"))
  {
    m_liveSimulationState = jsonValue.GetObject("LiveSimulationState");

  }

  if(jsonValue.ValueExists("LoggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");

  }

  if(jsonValue.ValueExists("MaximumDuration"))
  {
    m_maximumDuration = jsonValue.GetString("MaximumDuration");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("SchemaS3Location"))
  {
    m_schemaS3Location = jsonValue.GetObject("SchemaS3Location");

  }

  if(jsonValue.ValueExists("SnapshotS3Location"))
  {
    m_snapshotS3Location = jsonValue.GetObject("SnapshotS3Location");

  }

  if(jsonValue.ValueExists("StartError"))
  {
    m_startError = jsonValue.GetString("StartError");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SimulationStatusMapper::GetSimulationStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = SimulationTargetStatusMapper::GetSimulationTargetStatusForName(jsonValue.GetString("TargetStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
