/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FSxLustreFileSystemConfig.h>
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

FSxLustreFileSystemConfig::FSxLustreFileSystemConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

FSxLustreFileSystemConfig& FSxLustreFileSystemConfig::operator =(JsonView jsonValue)
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

JsonValue FSxLustreFileSystemConfig::Jsonize() const
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
