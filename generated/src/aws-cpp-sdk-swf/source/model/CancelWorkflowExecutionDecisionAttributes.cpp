/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CancelWorkflowExecutionDecisionAttributes.h>
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

CancelWorkflowExecutionDecisionAttributes::CancelWorkflowExecutionDecisionAttributes() : 
    m_detailsHasBeenSet(false)
{
}

CancelWorkflowExecutionDecisionAttributes::CancelWorkflowExecutionDecisionAttributes(JsonView jsonValue) : 
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

CancelWorkflowExecutionDecisionAttributes& CancelWorkflowExecutionDecisionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelWorkflowExecutionDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
