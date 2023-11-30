/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EFSFileSystemConfig.h>
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

EFSFileSystemConfig::EFSFileSystemConfig() : 
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemPathHasBeenSet(false)
{
}

EFSFileSystemConfig::EFSFileSystemConfig(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemPathHasBeenSet(false)
{
  *this = jsonValue;
}

EFSFileSystemConfig& EFSFileSystemConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemPath"))
  {
    m_fileSystemPath = jsonValue.GetString("FileSystemPath");

    m_fileSystemPathHasBeenSet = true;
  }

  return *this;
}

JsonValue EFSFileSystemConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_fileSystemPathHasBeenSet)
  {
   payload.WithString("FileSystemPath", m_fileSystemPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
