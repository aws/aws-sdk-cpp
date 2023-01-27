/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingImageConfig.h>
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

TrainingImageConfig::TrainingImageConfig() : 
    m_trainingRepositoryAccessMode(TrainingRepositoryAccessMode::NOT_SET),
    m_trainingRepositoryAccessModeHasBeenSet(false),
    m_trainingRepositoryAuthConfigHasBeenSet(false)
{
}

TrainingImageConfig::TrainingImageConfig(JsonView jsonValue) : 
    m_trainingRepositoryAccessMode(TrainingRepositoryAccessMode::NOT_SET),
    m_trainingRepositoryAccessModeHasBeenSet(false),
    m_trainingRepositoryAuthConfigHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingImageConfig& TrainingImageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingRepositoryAccessMode"))
  {
    m_trainingRepositoryAccessMode = TrainingRepositoryAccessModeMapper::GetTrainingRepositoryAccessModeForName(jsonValue.GetString("TrainingRepositoryAccessMode"));

    m_trainingRepositoryAccessModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingRepositoryAuthConfig"))
  {
    m_trainingRepositoryAuthConfig = jsonValue.GetObject("TrainingRepositoryAuthConfig");

    m_trainingRepositoryAuthConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingImageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_trainingRepositoryAccessModeHasBeenSet)
  {
   payload.WithString("TrainingRepositoryAccessMode", TrainingRepositoryAccessModeMapper::GetNameForTrainingRepositoryAccessMode(m_trainingRepositoryAccessMode));
  }

  if(m_trainingRepositoryAuthConfigHasBeenSet)
  {
   payload.WithObject("TrainingRepositoryAuthConfig", m_trainingRepositoryAuthConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
