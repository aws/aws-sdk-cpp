﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CodeEditorAppImageConfig.h>
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

CodeEditorAppImageConfig::CodeEditorAppImageConfig() : 
    m_fileSystemConfigHasBeenSet(false),
    m_containerConfigHasBeenSet(false)
{
}

CodeEditorAppImageConfig::CodeEditorAppImageConfig(JsonView jsonValue)
  : CodeEditorAppImageConfig()
{
  *this = jsonValue;
}

CodeEditorAppImageConfig& CodeEditorAppImageConfig::operator =(JsonView jsonValue)
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

JsonValue CodeEditorAppImageConfig::Jsonize() const
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
