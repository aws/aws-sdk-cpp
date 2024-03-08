/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EFSFileSystem.h>
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

EFSFileSystem::EFSFileSystem() : 
    m_fileSystemIdHasBeenSet(false)
{
}

EFSFileSystem::EFSFileSystem(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false)
{
  *this = jsonValue;
}

EFSFileSystem& EFSFileSystem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EFSFileSystem::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
