/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelLifeCycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelLifeCycle::ModelLifeCycle(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelLifeCycle& ModelLifeCycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Stage"))
  {
    m_stage = jsonValue.GetString("Stage");
    m_stageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StageStatus"))
  {
    m_stageStatus = jsonValue.GetString("StageStatus");
    m_stageStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StageDescription"))
  {
    m_stageDescription = jsonValue.GetString("StageDescription");
    m_stageDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelLifeCycle::Jsonize() const
{
  JsonValue payload;

  if(m_stageHasBeenSet)
  {
   payload.WithString("Stage", m_stage);

  }

  if(m_stageStatusHasBeenSet)
  {
   payload.WithString("StageStatus", m_stageStatus);

  }

  if(m_stageDescriptionHasBeenSet)
  {
   payload.WithString("StageDescription", m_stageDescription);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
