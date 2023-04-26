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

PipelineBlueprint::PipelineBlueprint() : 
    m_blueprintNameHasBeenSet(false),
    m_pipelineConfigurationBodyHasBeenSet(false)
{
}

PipelineBlueprint::PipelineBlueprint(JsonView jsonValue) : 
    m_blueprintNameHasBeenSet(false),
    m_pipelineConfigurationBodyHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
