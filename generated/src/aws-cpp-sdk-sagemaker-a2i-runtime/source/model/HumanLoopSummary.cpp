/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/HumanLoopSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

HumanLoopSummary::HumanLoopSummary() : 
    m_humanLoopNameHasBeenSet(false),
    m_humanLoopStatus(HumanLoopStatus::NOT_SET),
    m_humanLoopStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false)
{
}

HumanLoopSummary::HumanLoopSummary(JsonView jsonValue) : 
    m_humanLoopNameHasBeenSet(false),
    m_humanLoopStatus(HumanLoopStatus::NOT_SET),
    m_humanLoopStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopSummary& HumanLoopSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopName"))
  {
    m_humanLoopName = jsonValue.GetString("HumanLoopName");

    m_humanLoopNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanLoopStatus"))
  {
    m_humanLoopStatus = HumanLoopStatusMapper::GetHumanLoopStatusForName(jsonValue.GetString("HumanLoopStatus"));

    m_humanLoopStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");

    m_flowDefinitionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopSummary::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopNameHasBeenSet)
  {
   payload.WithString("HumanLoopName", m_humanLoopName);

  }

  if(m_humanLoopStatusHasBeenSet)
  {
   payload.WithString("HumanLoopStatus", HumanLoopStatusMapper::GetNameForHumanLoopStatus(m_humanLoopStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_flowDefinitionArnHasBeenSet)
  {
   payload.WithString("FlowDefinitionArn", m_flowDefinitionArn);

  }

  return payload;
}

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
