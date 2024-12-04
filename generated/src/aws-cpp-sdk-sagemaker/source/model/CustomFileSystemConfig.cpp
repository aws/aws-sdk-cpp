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
    m_eFSFileSystemConfigHasBeenSet(false),
    m_fSxLustreFileSystemConfigHasBeenSet(false)
{
}

CustomFileSystemConfig::CustomFileSystemConfig(JsonView jsonValue)
  : CustomFileSystemConfig()
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

  if(jsonValue.ValueExists("FSxLustreFileSystemConfig"))
  {
    m_fSxLustreFileSystemConfig = jsonValue.GetObject("FSxLustreFileSystemConfig");

    m_fSxLustreFileSystemConfigHasBeenSet = true;
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

  if(m_fSxLustreFileSystemConfigHasBeenSet)
  {
   payload.WithObject("FSxLustreFileSystemConfig", m_fSxLustreFileSystemConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
