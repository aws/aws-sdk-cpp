/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowTypeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

WorkflowTypeConfiguration::WorkflowTypeConfiguration() : 
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultExecutionStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultChildPolicy(ChildPolicy::NOT_SET),
    m_defaultChildPolicyHasBeenSet(false),
    m_defaultLambdaRoleHasBeenSet(false)
{
}

WorkflowTypeConfiguration::WorkflowTypeConfiguration(JsonView jsonValue) : 
    m_defaultTaskStartToCloseTimeoutHasBeenSet(false),
    m_defaultExecutionStartToCloseTimeoutHasBeenSet(false),
    m_defaultTaskListHasBeenSet(false),
    m_defaultTaskPriorityHasBeenSet(false),
    m_defaultChildPolicy(ChildPolicy::NOT_SET),
    m_defaultChildPolicyHasBeenSet(false),
    m_defaultLambdaRoleHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowTypeConfiguration& WorkflowTypeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultTaskStartToCloseTimeout"))
  {
    m_defaultTaskStartToCloseTimeout = jsonValue.GetString("defaultTaskStartToCloseTimeout");

    m_defaultTaskStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultExecutionStartToCloseTimeout"))
  {
    m_defaultExecutionStartToCloseTimeout = jsonValue.GetString("defaultExecutionStartToCloseTimeout");

    m_defaultExecutionStartToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskList"))
  {
    m_defaultTaskList = jsonValue.GetObject("defaultTaskList");

    m_defaultTaskListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultTaskPriority"))
  {
    m_defaultTaskPriority = jsonValue.GetString("defaultTaskPriority");

    m_defaultTaskPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultChildPolicy"))
  {
    m_defaultChildPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("defaultChildPolicy"));

    m_defaultChildPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultLambdaRole"))
  {
    m_defaultLambdaRole = jsonValue.GetString("defaultLambdaRole");

    m_defaultLambdaRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_defaultTaskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskStartToCloseTimeout", m_defaultTaskStartToCloseTimeout);

  }

  if(m_defaultExecutionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultExecutionStartToCloseTimeout", m_defaultExecutionStartToCloseTimeout);

  }

  if(m_defaultTaskListHasBeenSet)
  {
   payload.WithObject("defaultTaskList", m_defaultTaskList.Jsonize());

  }

  if(m_defaultTaskPriorityHasBeenSet)
  {
   payload.WithString("defaultTaskPriority", m_defaultTaskPriority);

  }

  if(m_defaultChildPolicyHasBeenSet)
  {
   payload.WithString("defaultChildPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_defaultChildPolicy));
  }

  if(m_defaultLambdaRoleHasBeenSet)
  {
   payload.WithString("defaultLambdaRole", m_defaultLambdaRole);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
