/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UnprocessedSecurityControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

UnprocessedSecurityControl::UnprocessedSecurityControl() : 
    m_securityControlIdHasBeenSet(false),
    m_errorCode(UnprocessedErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

UnprocessedSecurityControl::UnprocessedSecurityControl(JsonView jsonValue) : 
    m_securityControlIdHasBeenSet(false),
    m_errorCode(UnprocessedErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedSecurityControl& UnprocessedSecurityControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityControlId"))
  {
    m_securityControlId = jsonValue.GetString("SecurityControlId");

    m_securityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = UnprocessedErrorCodeMapper::GetUnprocessedErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReason"))
  {
    m_errorReason = jsonValue.GetString("ErrorReason");

    m_errorReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedSecurityControl::Jsonize() const
{
  JsonValue payload;

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", UnprocessedErrorCodeMapper::GetNameForUnprocessedErrorCode(m_errorCode));
  }

  if(m_errorReasonHasBeenSet)
  {
   payload.WithString("ErrorReason", m_errorReason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
