/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RemoteDebugConfigForUpdate.h>
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

RemoteDebugConfigForUpdate::RemoteDebugConfigForUpdate() : 
    m_enableRemoteDebug(false),
    m_enableRemoteDebugHasBeenSet(false)
{
}

RemoteDebugConfigForUpdate::RemoteDebugConfigForUpdate(JsonView jsonValue) : 
    m_enableRemoteDebug(false),
    m_enableRemoteDebugHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteDebugConfigForUpdate& RemoteDebugConfigForUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableRemoteDebug"))
  {
    m_enableRemoteDebug = jsonValue.GetBool("EnableRemoteDebug");

    m_enableRemoteDebugHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoteDebugConfigForUpdate::Jsonize() const
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
