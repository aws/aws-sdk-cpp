/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FlowOperationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

FlowOperationMetadata::FlowOperationMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowOperationMetadata& FlowOperationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlowOperationId"))
  {
    m_flowOperationId = jsonValue.GetString("FlowOperationId");
    m_flowOperationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowOperationType"))
  {
    m_flowOperationType = FlowOperationTypeMapper::GetFlowOperationTypeForName(jsonValue.GetString("FlowOperationType"));
    m_flowOperationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowRequestTimestamp"))
  {
    m_flowRequestTimestamp = jsonValue.GetDouble("FlowRequestTimestamp");
    m_flowRequestTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FlowOperationStatus"))
  {
    m_flowOperationStatus = FlowOperationStatusMapper::GetFlowOperationStatusForName(jsonValue.GetString("FlowOperationStatus"));
    m_flowOperationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowOperationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_flowOperationIdHasBeenSet)
  {
   payload.WithString("FlowOperationId", m_flowOperationId);

  }

  if(m_flowOperationTypeHasBeenSet)
  {
   payload.WithString("FlowOperationType", FlowOperationTypeMapper::GetNameForFlowOperationType(m_flowOperationType));
  }

  if(m_flowRequestTimestampHasBeenSet)
  {
   payload.WithDouble("FlowRequestTimestamp", m_flowRequestTimestamp.SecondsWithMSPrecision());
  }

  if(m_flowOperationStatusHasBeenSet)
  {
   payload.WithString("FlowOperationStatus", FlowOperationStatusMapper::GetNameForFlowOperationStatus(m_flowOperationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
