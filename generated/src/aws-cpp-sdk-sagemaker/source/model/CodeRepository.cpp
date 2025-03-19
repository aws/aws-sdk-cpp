/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CodeRepository.h>
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

CodeRepository::CodeRepository(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepository& CodeRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryUrl"))
  {
    m_repositoryUrl = jsonValue.GetString("RepositoryUrl");
    m_repositoryUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRepository::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryUrlHasBeenSet)
  {
   payload.WithString("RepositoryUrl", m_repositoryUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
