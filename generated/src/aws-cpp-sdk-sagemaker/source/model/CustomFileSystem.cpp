/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CustomFileSystem.h>
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

CustomFileSystem::CustomFileSystem() : 
    m_eFSFileSystemHasBeenSet(false)
{
}

CustomFileSystem::CustomFileSystem(JsonView jsonValue) : 
    m_eFSFileSystemHasBeenSet(false)
{
  *this = jsonValue;
}

CustomFileSystem& CustomFileSystem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EFSFileSystem"))
  {
    m_eFSFileSystem = jsonValue.GetObject("EFSFileSystem");

    m_eFSFileSystemHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomFileSystem::Jsonize() const
{
  JsonValue payload;

  if(m_eFSFileSystemHasBeenSet)
  {
   payload.WithObject("EFSFileSystem", m_eFSFileSystem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
