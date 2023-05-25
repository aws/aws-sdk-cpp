/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StepAutomationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

StepAutomationConfiguration::StepAutomationConfiguration() : 
    m_scriptLocationS3BucketHasBeenSet(false),
    m_scriptLocationS3KeyHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_runEnvironment(RunEnvironment::NOT_SET),
    m_runEnvironmentHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
}

StepAutomationConfiguration::StepAutomationConfiguration(JsonView jsonValue) : 
    m_scriptLocationS3BucketHasBeenSet(false),
    m_scriptLocationS3KeyHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_runEnvironment(RunEnvironment::NOT_SET),
    m_runEnvironmentHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StepAutomationConfiguration& StepAutomationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scriptLocationS3Bucket"))
  {
    m_scriptLocationS3Bucket = jsonValue.GetString("scriptLocationS3Bucket");

    m_scriptLocationS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptLocationS3Key"))
  {
    m_scriptLocationS3Key = jsonValue.GetObject("scriptLocationS3Key");

    m_scriptLocationS3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetObject("command");

    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runEnvironment"))
  {
    m_runEnvironment = RunEnvironmentMapper::GetRunEnvironmentForName(jsonValue.GetString("runEnvironment"));

    m_runEnvironmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("targetType"));

    m_targetTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StepAutomationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scriptLocationS3BucketHasBeenSet)
  {
   payload.WithString("scriptLocationS3Bucket", m_scriptLocationS3Bucket);

  }

  if(m_scriptLocationS3KeyHasBeenSet)
  {
   payload.WithObject("scriptLocationS3Key", m_scriptLocationS3Key.Jsonize());

  }

  if(m_commandHasBeenSet)
  {
   payload.WithObject("command", m_command.Jsonize());

  }

  if(m_runEnvironmentHasBeenSet)
  {
   payload.WithString("runEnvironment", RunEnvironmentMapper::GetNameForRunEnvironment(m_runEnvironment));
  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("targetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
