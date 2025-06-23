/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/EC2InstanceError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

EC2InstanceError::EC2InstanceError(JsonView jsonValue)
{
  *this = jsonValue;
}

EC2InstanceError& EC2InstanceError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EC2ErrorCode"))
  {
    m_eC2ErrorCode = jsonValue.GetString("EC2ErrorCode");
    m_eC2ErrorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2ExceptionType"))
  {
    m_eC2ExceptionType = jsonValue.GetString("EC2ExceptionType");
    m_eC2ExceptionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2ErrorMessage"))
  {
    m_eC2ErrorMessage = jsonValue.GetString("EC2ErrorMessage");
    m_eC2ErrorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue EC2InstanceError::Jsonize() const
{
  JsonValue payload;

  if(m_eC2ErrorCodeHasBeenSet)
  {
   payload.WithString("EC2ErrorCode", m_eC2ErrorCode);

  }

  if(m_eC2ExceptionTypeHasBeenSet)
  {
   payload.WithString("EC2ExceptionType", m_eC2ExceptionType);

  }

  if(m_eC2ErrorMessageHasBeenSet)
  {
   payload.WithString("EC2ErrorMessage", m_eC2ErrorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
