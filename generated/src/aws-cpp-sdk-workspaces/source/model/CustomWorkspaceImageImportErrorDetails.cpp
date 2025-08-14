/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CustomWorkspaceImageImportErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

CustomWorkspaceImageImportErrorDetails::CustomWorkspaceImageImportErrorDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomWorkspaceImageImportErrorDetails& CustomWorkspaceImageImportErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomWorkspaceImageImportErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
