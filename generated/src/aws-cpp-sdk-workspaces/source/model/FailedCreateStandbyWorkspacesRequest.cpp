/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/FailedCreateStandbyWorkspacesRequest.h>
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

FailedCreateStandbyWorkspacesRequest::FailedCreateStandbyWorkspacesRequest() : 
    m_standbyWorkspaceRequestHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailedCreateStandbyWorkspacesRequest::FailedCreateStandbyWorkspacesRequest(JsonView jsonValue) : 
    m_standbyWorkspaceRequestHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailedCreateStandbyWorkspacesRequest& FailedCreateStandbyWorkspacesRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandbyWorkspaceRequest"))
  {
    m_standbyWorkspaceRequest = jsonValue.GetObject("StandbyWorkspaceRequest");

    m_standbyWorkspaceRequestHasBeenSet = true;
  }

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

JsonValue FailedCreateStandbyWorkspacesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_standbyWorkspaceRequestHasBeenSet)
  {
   payload.WithObject("StandbyWorkspaceRequest", m_standbyWorkspaceRequest.Jsonize());

  }

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
