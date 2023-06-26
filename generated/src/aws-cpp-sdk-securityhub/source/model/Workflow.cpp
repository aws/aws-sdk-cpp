/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Workflow.h>
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

Workflow::Workflow() : 
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Workflow::Workflow(JsonView jsonValue) : 
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Workflow& Workflow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Workflow::Jsonize() const
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
