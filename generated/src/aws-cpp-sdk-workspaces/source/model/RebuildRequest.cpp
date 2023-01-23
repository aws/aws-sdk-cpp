/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RebuildRequest.h>
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

RebuildRequest::RebuildRequest() : 
    m_workspaceIdHasBeenSet(false)
{
}

RebuildRequest::RebuildRequest(JsonView jsonValue) : 
    m_workspaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

RebuildRequest& RebuildRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceId"))
  {
    m_workspaceId = jsonValue.GetString("WorkspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RebuildRequest::Jsonize() const
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
