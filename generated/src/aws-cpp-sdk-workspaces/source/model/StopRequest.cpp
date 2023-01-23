/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StopRequest.h>
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

StopRequest::StopRequest() : 
    m_workspaceIdHasBeenSet(false)
{
}

StopRequest::StopRequest(JsonView jsonValue) : 
    m_workspaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

StopRequest& StopRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceId"))
  {
    m_workspaceId = jsonValue.GetString("WorkspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StopRequest::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
