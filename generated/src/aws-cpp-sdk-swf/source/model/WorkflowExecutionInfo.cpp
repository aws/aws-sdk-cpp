﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionInfo.h>
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

WorkflowExecutionInfo::WorkflowExecutionInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkflowExecutionInfo& WorkflowExecutionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("execution"))
  {
    m_execution = jsonValue.GetObject("execution");
    m_executionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");
    m_workflowTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("startTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("closeTimestamp"))
  {
    m_closeTimestamp = jsonValue.GetDouble("closeTimestamp");
    m_closeTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("closeStatus"))
  {
    m_closeStatus = CloseStatusMapper::GetCloseStatusForName(jsonValue.GetString("closeStatus"));
    m_closeStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parent"))
  {
    m_parent = jsonValue.GetObject("parent");
    m_parentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tagList"))
  {
    Aws::Utils::Array<JsonView> tagListJsonList = jsonValue.GetArray("tagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsString());
    }
    m_tagListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cancelRequested"))
  {
    m_cancelRequested = jsonValue.GetBool("cancelRequested");
    m_cancelRequestedHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowExecutionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_executionHasBeenSet)
  {
   payload.WithObject("execution", m_execution.Jsonize());

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_closeTimestampHasBeenSet)
  {
   payload.WithDouble("closeTimestamp", m_closeTimestamp.SecondsWithMSPrecision());
  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithString("executionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  if(m_closeStatusHasBeenSet)
  {
   payload.WithString("closeStatus", CloseStatusMapper::GetNameForCloseStatus(m_closeStatus));
  }

  if(m_parentHasBeenSet)
  {
   payload.WithObject("parent", m_parent.Jsonize());

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsString(m_tagList[tagListIndex]);
   }
   payload.WithArray("tagList", std::move(tagListJsonList));

  }

  if(m_cancelRequestedHasBeenSet)
  {
   payload.WithBool("cancelRequested", m_cancelRequested);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
