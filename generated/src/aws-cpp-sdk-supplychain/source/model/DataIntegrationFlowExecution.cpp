/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataIntegrationFlowExecution::DataIntegrationFlowExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowExecution& DataIntegrationFlowExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowName"))
  {
    m_flowName = jsonValue.GetString("flowName");
    m_flowNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataIntegrationFlowExecutionStatusMapper::GetDataIntegrationFlowExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceInfo"))
  {
    m_sourceInfo = jsonValue.GetObject("sourceInfo");
    m_sourceInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputMetadata"))
  {
    m_outputMetadata = jsonValue.GetObject("outputMetadata");
    m_outputMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowExecution::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("flowName", m_flowName);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataIntegrationFlowExecutionStatusMapper::GetNameForDataIntegrationFlowExecutionStatus(m_status));
  }

  if(m_sourceInfoHasBeenSet)
  {
   payload.WithObject("sourceInfo", m_sourceInfo.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_outputMetadataHasBeenSet)
  {
   payload.WithObject("outputMetadata", m_outputMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
