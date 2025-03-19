/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/BatchError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace repostspace
{
namespace Model
{

BatchError::BatchError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchError& BatchError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessorId"))
  {
    m_accessorId = jsonValue.GetString("accessorId");
    m_accessorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetInteger("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchError::Jsonize() const
{
  JsonValue payload;

  if(m_accessorIdHasBeenSet)
  {
   payload.WithString("accessorId", m_accessorId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithInteger("error", m_error);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace repostspace
} // namespace Aws
