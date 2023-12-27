/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CustomFileSystemConfig.h>
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

CustomFileSystemConfig::CustomFileSystemConfig() : 
    m_eFSFileSystemConfigHasBeenSet(false)
{
}

CustomFileSystemConfig::CustomFileSystemConfig(JsonView jsonValue) : 
    m_eFSFileSystemConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CustomFileSystemConfig& CustomFileSystemConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EFSFileSystemConfig"))
  {
    m_eFSFileSystemConfig = jsonValue.GetObject("EFSFileSystemConfig");

    m_eFSFileSystemConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomFileSystemConfig::Jsonize() const
{
  JsonValue payload;

  if(m_eFSFileSystemConfigHasBeenSet)
  {
   payload.WithObject("EFSFileSystemConfig", m_eFSFileSystemConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
