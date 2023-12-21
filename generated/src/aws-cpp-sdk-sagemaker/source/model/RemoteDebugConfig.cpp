/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RemoteDebugConfig.h>
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

RemoteDebugConfig::RemoteDebugConfig() : 
    m_enableRemoteDebug(false),
    m_enableRemoteDebugHasBeenSet(false)
{
}

RemoteDebugConfig::RemoteDebugConfig(JsonView jsonValue) : 
    m_enableRemoteDebug(false),
    m_enableRemoteDebugHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteDebugConfig& RemoteDebugConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableRemoteDebug"))
  {
    m_enableRemoteDebug = jsonValue.GetBool("EnableRemoteDebug");

    m_enableRemoteDebugHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoteDebugConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableRemoteDebugHasBeenSet)
  {
   payload.WithBool("EnableRemoteDebug", m_enableRemoteDebug);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
