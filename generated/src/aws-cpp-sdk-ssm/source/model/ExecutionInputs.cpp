/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ExecutionInputs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ExecutionInputs::ExecutionInputs(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionInputs& ExecutionInputs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Automation"))
  {
    m_automation = jsonValue.GetObject("Automation");
    m_automationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionInputs::Jsonize() const
{
  JsonValue payload;

  if(m_automationHasBeenSet)
  {
   payload.WithObject("Automation", m_automation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
