/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/InvalidRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

InvalidRequestException::InvalidRequestException(JsonView jsonValue)
{
  *this = jsonValue;
}

InvalidRequestException& InvalidRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = InvalidRequestExceptionReasonMapper::GetInvalidRequestExceptionReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error_description"))
  {
    m_error_description = jsonValue.GetString("error_description");
    m_error_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", InvalidRequestExceptionReasonMapper::GetNameForInvalidRequestExceptionReason(m_reason));
  }

  if(m_error_descriptionHasBeenSet)
  {
   payload.WithString("error_description", m_error_description);

  }

  return payload;
}

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
