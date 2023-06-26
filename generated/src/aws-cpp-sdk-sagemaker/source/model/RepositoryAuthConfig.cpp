/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RepositoryAuthConfig.h>
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

RepositoryAuthConfig::RepositoryAuthConfig() : 
    m_repositoryCredentialsProviderArnHasBeenSet(false)
{
}

RepositoryAuthConfig::RepositoryAuthConfig(JsonView jsonValue) : 
    m_repositoryCredentialsProviderArnHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryAuthConfig& RepositoryAuthConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryCredentialsProviderArn"))
  {
    m_repositoryCredentialsProviderArn = jsonValue.GetString("RepositoryCredentialsProviderArn");

    m_repositoryCredentialsProviderArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryAuthConfig::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryCredentialsProviderArnHasBeenSet)
  {
   payload.WithString("RepositoryCredentialsProviderArn", m_repositoryCredentialsProviderArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
