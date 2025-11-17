/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/WorkflowVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

WorkflowVersionSummary::WorkflowVersionSummary(JsonView jsonValue) { *this = jsonValue; }

WorkflowVersionSummary& WorkflowVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsLatestVersion")) {
    m_isLatestVersion = jsonValue.GetBool("IsLatestVersion");
    m_isLatestVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefinitionS3Location")) {
    m_definitionS3Location = jsonValue.GetObject("DefinitionS3Location");
    m_definitionS3LocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleConfiguration")) {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TriggerMode")) {
    m_triggerMode = jsonValue.GetString("TriggerMode");
    m_triggerModeHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_workflowVersionHasBeenSet) {
    payload.WithString("WorkflowVersion", m_workflowVersion);
  }

  if (m_workflowArnHasBeenSet) {
    payload.WithString("WorkflowArn", m_workflowArn);
  }

  if (m_isLatestVersionHasBeenSet) {
    payload.WithBool("IsLatestVersion", m_isLatestVersion);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithString("ModifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_definitionS3LocationHasBeenSet) {
    payload.WithObject("DefinitionS3Location", m_definitionS3Location.Jsonize());
  }

  if (m_scheduleConfigurationHasBeenSet) {
    payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());
  }

  if (m_triggerModeHasBeenSet) {
    payload.WithString("TriggerMode", m_triggerMode);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
