/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/MemoryLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

MemoryLimitExceededException::MemoryLimitExceededException() : 
    m_detailedMessageHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

MemoryLimitExceededException::MemoryLimitExceededException(JsonView jsonValue) : 
    m_detailedMessageHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

MemoryLimitExceededException& MemoryLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detailedMessage"))
  {
    m_detailedMessage = jsonValue.GetString("detailedMessage");

    m_detailedMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue MemoryLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_detailedMessageHasBeenSet)
  {
   payload.WithString("detailedMessage", m_detailedMessage);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
