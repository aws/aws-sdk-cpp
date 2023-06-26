/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/PipelineInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

PipelineInfo::PipelineInfo() : 
    m_pipelineConfigurationTimeStampHasBeenSet(false),
    m_pipelineType(PipelineType::NOT_SET),
    m_pipelineTypeHasBeenSet(false)
{
}

PipelineInfo::PipelineInfo(JsonView jsonValue) : 
    m_pipelineConfigurationTimeStampHasBeenSet(false),
    m_pipelineType(PipelineType::NOT_SET),
    m_pipelineTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineInfo& PipelineInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineConfigurationTimeStamp"))
  {
    m_pipelineConfigurationTimeStamp = jsonValue.GetString("pipelineConfigurationTimeStamp");

    m_pipelineConfigurationTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineType"))
  {
    m_pipelineType = PipelineTypeMapper::GetPipelineTypeForName(jsonValue.GetString("pipelineType"));

    m_pipelineTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineInfo::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineConfigurationTimeStampHasBeenSet)
  {
   payload.WithString("pipelineConfigurationTimeStamp", m_pipelineConfigurationTimeStamp);

  }

  if(m_pipelineTypeHasBeenSet)
  {
   payload.WithString("pipelineType", PipelineTypeMapper::GetNameForPipelineType(m_pipelineType));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
