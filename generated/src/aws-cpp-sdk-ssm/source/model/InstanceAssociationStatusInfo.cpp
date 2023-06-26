/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceAssociationStatusInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAssociationStatusInfo::InstanceAssociationStatusInfo() : 
    m_associationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_associationVersionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_executionDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_outputUrlHasBeenSet(false),
    m_associationNameHasBeenSet(false)
{
}

InstanceAssociationStatusInfo::InstanceAssociationStatusInfo(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_associationVersionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_executionDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_outputUrlHasBeenSet(false),
    m_associationNameHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAssociationStatusInfo& InstanceAssociationStatusInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationVersion"))
  {
    m_associationVersion = jsonValue.GetString("AssociationVersion");

    m_associationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionDate"))
  {
    m_executionDate = jsonValue.GetDouble("ExecutionDate");

    m_executionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailedStatus"))
  {
    m_detailedStatus = jsonValue.GetString("DetailedStatus");

    m_detailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionSummary"))
  {
    m_executionSummary = jsonValue.GetString("ExecutionSummary");

    m_executionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUrl"))
  {
    m_outputUrl = jsonValue.GetObject("OutputUrl");

    m_outputUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationName"))
  {
    m_associationName = jsonValue.GetString("AssociationName");

    m_associationNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAssociationStatusInfo::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_associationVersionHasBeenSet)
  {
   payload.WithString("AssociationVersion", m_associationVersion);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_executionDateHasBeenSet)
  {
   payload.WithDouble("ExecutionDate", m_executionDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_detailedStatusHasBeenSet)
  {
   payload.WithString("DetailedStatus", m_detailedStatus);

  }

  if(m_executionSummaryHasBeenSet)
  {
   payload.WithString("ExecutionSummary", m_executionSummary);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_outputUrlHasBeenSet)
  {
   payload.WithObject("OutputUrl", m_outputUrl.Jsonize());

  }

  if(m_associationNameHasBeenSet)
  {
   payload.WithString("AssociationName", m_associationName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
