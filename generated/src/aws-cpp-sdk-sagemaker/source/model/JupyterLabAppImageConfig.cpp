/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/JupyterLabAppImageConfig.h>
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

JupyterLabAppImageConfig::JupyterLabAppImageConfig() : 
    m_fileSystemConfigHasBeenSet(false),
    m_containerConfigHasBeenSet(false)
{
}

JupyterLabAppImageConfig::JupyterLabAppImageConfig(JsonView jsonValue) : 
    m_fileSystemConfigHasBeenSet(false),
    m_containerConfigHasBeenSet(false)
{
  *this = jsonValue;
}

JupyterLabAppImageConfig& JupyterLabAppImageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemConfig"))
  {
    m_fileSystemConfig = jsonValue.GetObject("FileSystemConfig");

    m_fileSystemConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerConfig"))
  {
    m_containerConfig = jsonValue.GetObject("ContainerConfig");

    m_containerConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue JupyterLabAppImageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemConfigHasBeenSet)
  {
   payload.WithObject("FileSystemConfig", m_fileSystemConfig.Jsonize());

  }

  if(m_containerConfigHasBeenSet)
  {
   payload.WithObject("ContainerConfig", m_containerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
