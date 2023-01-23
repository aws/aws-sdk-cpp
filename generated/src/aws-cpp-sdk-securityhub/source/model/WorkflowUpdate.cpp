/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/WorkflowUpdate.h>
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

WorkflowUpdate::WorkflowUpdate() : 
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

WorkflowUpdate::WorkflowUpdate(JsonView jsonValue) : 
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowUpdate& WorkflowUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WorkflowStatusMapper::GetNameForWorkflowStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
