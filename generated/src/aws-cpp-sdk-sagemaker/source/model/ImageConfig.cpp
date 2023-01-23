/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageConfig.h>
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

ImageConfig::ImageConfig() : 
    m_repositoryAccessMode(RepositoryAccessMode::NOT_SET),
    m_repositoryAccessModeHasBeenSet(false),
    m_repositoryAuthConfigHasBeenSet(false)
{
}

ImageConfig::ImageConfig(JsonView jsonValue) : 
    m_repositoryAccessMode(RepositoryAccessMode::NOT_SET),
    m_repositoryAccessModeHasBeenSet(false),
    m_repositoryAuthConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ImageConfig& ImageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryAccessMode"))
  {
    m_repositoryAccessMode = RepositoryAccessModeMapper::GetRepositoryAccessModeForName(jsonValue.GetString("RepositoryAccessMode"));

    m_repositoryAccessModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryAuthConfig"))
  {
    m_repositoryAuthConfig = jsonValue.GetObject("RepositoryAuthConfig");

    m_repositoryAuthConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryAccessModeHasBeenSet)
  {
   payload.WithString("RepositoryAccessMode", RepositoryAccessModeMapper::GetNameForRepositoryAccessMode(m_repositoryAccessMode));
  }

  if(m_repositoryAuthConfigHasBeenSet)
  {
   payload.WithObject("RepositoryAuthConfig", m_repositoryAuthConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
