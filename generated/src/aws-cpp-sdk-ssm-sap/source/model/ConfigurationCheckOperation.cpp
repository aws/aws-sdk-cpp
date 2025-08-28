/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ConfigurationCheckOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

ConfigurationCheckOperation::ConfigurationCheckOperation(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationCheckOperation& ConfigurationCheckOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationCheckId"))
  {
    m_configurationCheckId = ConfigurationCheckTypeMapper::GetConfigurationCheckTypeForName(jsonValue.GetString("ConfigurationCheckId"));
    m_configurationCheckIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationCheckName"))
  {
    m_configurationCheckName = jsonValue.GetString("ConfigurationCheckName");
    m_configurationCheckNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationCheckDescription"))
  {
    m_configurationCheckDescription = jsonValue.GetString("ConfigurationCheckDescription");
    m_configurationCheckDescriptionHasBeenSet = true;
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
  if(jsonValue.ValueExists("RuleStatusCounts"))
  {
    m_ruleStatusCounts = jsonValue.GetObject("RuleStatusCounts");
    m_ruleStatusCountsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationCheckOperation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_configurationCheckIdHasBeenSet)
  {
   payload.WithString("ConfigurationCheckId", ConfigurationCheckTypeMapper::GetNameForConfigurationCheckType(m_configurationCheckId));
  }

  if(m_configurationCheckNameHasBeenSet)
  {
   payload.WithString("ConfigurationCheckName", m_configurationCheckName);

  }

  if(m_configurationCheckDescriptionHasBeenSet)
  {
   payload.WithString("ConfigurationCheckDescription", m_configurationCheckDescription);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_ruleStatusCountsHasBeenSet)
  {
   payload.WithObject("RuleStatusCounts", m_ruleStatusCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
