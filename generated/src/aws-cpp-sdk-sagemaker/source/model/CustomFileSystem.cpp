﻿/**
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
    m_eFSFileSystemHasBeenSet(false),
    m_fSxLustreFileSystemHasBeenSet(false)
{
}

CustomFileSystem::CustomFileSystem(JsonView jsonValue)
  : CustomFileSystem()
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

  if(jsonValue.ValueExists("FSxLustreFileSystem"))
  {
    m_fSxLustreFileSystem = jsonValue.GetObject("FSxLustreFileSystem");

    m_fSxLustreFileSystemHasBeenSet = true;
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

  if(m_fSxLustreFileSystemHasBeenSet)
  {
   payload.WithObject("FSxLustreFileSystem", m_fSxLustreFileSystem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
