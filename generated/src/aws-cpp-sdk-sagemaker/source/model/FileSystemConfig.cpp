/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FileSystemConfig.h>
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

FileSystemConfig::FileSystemConfig() : 
    m_mountPathHasBeenSet(false),
    m_defaultUid(0),
    m_defaultUidHasBeenSet(false),
    m_defaultGid(0),
    m_defaultGidHasBeenSet(false)
{
}

FileSystemConfig::FileSystemConfig(JsonView jsonValue) : 
    m_mountPathHasBeenSet(false),
    m_defaultUid(0),
    m_defaultUidHasBeenSet(false),
    m_defaultGid(0),
    m_defaultGidHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemConfig& FileSystemConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MountPath"))
  {
    m_mountPath = jsonValue.GetString("MountPath");

    m_mountPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultUid"))
  {
    m_defaultUid = jsonValue.GetInteger("DefaultUid");

    m_defaultUidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultGid"))
  {
    m_defaultGid = jsonValue.GetInteger("DefaultGid");

    m_defaultGidHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mountPathHasBeenSet)
  {
   payload.WithString("MountPath", m_mountPath);

  }

  if(m_defaultUidHasBeenSet)
  {
   payload.WithInteger("DefaultUid", m_defaultUid);

  }

  if(m_defaultGidHasBeenSet)
  {
   payload.WithInteger("DefaultGid", m_defaultGid);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
