/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/PipelineBlueprint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

PipelineBlueprint::PipelineBlueprint(JsonView jsonValue)
{
  *this = jsonValue;
}

PipelineBlueprint& PipelineBlueprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlueprintName"))
  {
    m_blueprintName = jsonValue.GetString("BlueprintName");
    m_blueprintNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineConfigurationBody"))
  {
    m_pipelineConfigurationBody = jsonValue.GetString("PipelineConfigurationBody");
    m_pipelineConfigurationBodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayDescription"))
  {
    m_displayDescription = jsonValue.GetString("DisplayDescription");
    m_displayDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseCase"))
  {
    m_useCase = jsonValue.GetString("UseCase");
    m_useCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineBlueprint::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("BlueprintName", m_blueprintName);

  }

  if(m_pipelineConfigurationBodyHasBeenSet)
  {
   payload.WithString("PipelineConfigurationBody", m_pipelineConfigurationBody);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_displayDescriptionHasBeenSet)
  {
   payload.WithString("DisplayDescription", m_displayDescription);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

  }

  if(m_useCaseHasBeenSet)
  {
   payload.WithString("UseCase", m_useCase);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
