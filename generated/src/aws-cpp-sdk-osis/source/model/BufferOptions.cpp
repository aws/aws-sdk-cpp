/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/BufferOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

BufferOptions::BufferOptions() : 
    m_persistentBufferEnabled(false),
    m_persistentBufferEnabledHasBeenSet(false)
{
}

BufferOptions::BufferOptions(JsonView jsonValue) : 
    m_persistentBufferEnabled(false),
    m_persistentBufferEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

BufferOptions& BufferOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PersistentBufferEnabled"))
  {
    m_persistentBufferEnabled = jsonValue.GetBool("PersistentBufferEnabled");

    m_persistentBufferEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue BufferOptions::Jsonize() const
{
  JsonValue payload;

  if(m_persistentBufferEnabledHasBeenSet)
  {
   payload.WithBool("PersistentBufferEnabled", m_persistentBufferEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
