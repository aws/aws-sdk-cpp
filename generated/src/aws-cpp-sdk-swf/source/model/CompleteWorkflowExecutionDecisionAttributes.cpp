/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CompleteWorkflowExecutionDecisionAttributes.h>
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

CompleteWorkflowExecutionDecisionAttributes::CompleteWorkflowExecutionDecisionAttributes() : 
    m_resultHasBeenSet(false)
{
}

CompleteWorkflowExecutionDecisionAttributes::CompleteWorkflowExecutionDecisionAttributes(JsonView jsonValue) : 
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

CompleteWorkflowExecutionDecisionAttributes& CompleteWorkflowExecutionDecisionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetString("result");

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue CompleteWorkflowExecutionDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
