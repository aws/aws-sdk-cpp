/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mwaa-serverless/model/GetWorkflowResult.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowResult::GetWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetWorkflowResult& GetWorkflowResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LoggingConfiguration")) {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EngineVersion")) {
    m_engineVersion = jsonValue.GetInteger("EngineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowStatus")) {
    m_workflowStatus = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("WorkflowStatus"));
    m_workflowStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefinitionS3Location")) {
    m_definitionS3Location = jsonValue.GetObject("DefinitionS3Location");
    m_definitionS3LocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleConfiguration")) {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkConfiguration")) {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TriggerMode")) {
    m_triggerMode = jsonValue.GetString("TriggerMode");
    m_triggerModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowDefinition")) {
    m_workflowDefinition = jsonValue.GetString("WorkflowDefinition");
    m_workflowDefinitionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
