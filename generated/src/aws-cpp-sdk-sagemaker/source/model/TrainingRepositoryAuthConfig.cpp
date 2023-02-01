/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingRepositoryAuthConfig.h>
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

TrainingRepositoryAuthConfig::TrainingRepositoryAuthConfig() : 
    m_trainingRepositoryCredentialsProviderArnHasBeenSet(false)
{
}

TrainingRepositoryAuthConfig::TrainingRepositoryAuthConfig(JsonView jsonValue) : 
    m_trainingRepositoryCredentialsProviderArnHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingRepositoryAuthConfig& TrainingRepositoryAuthConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingRepositoryCredentialsProviderArn"))
  {
    m_trainingRepositoryCredentialsProviderArn = jsonValue.GetString("TrainingRepositoryCredentialsProviderArn");

    m_trainingRepositoryCredentialsProviderArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingRepositoryAuthConfig::Jsonize() const
{
  JsonValue payload;

  if(m_trainingRepositoryCredentialsProviderArnHasBeenSet)
  {
   payload.WithString("TrainingRepositoryCredentialsProviderArn", m_trainingRepositoryCredentialsProviderArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
