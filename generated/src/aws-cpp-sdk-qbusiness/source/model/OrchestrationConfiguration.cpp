/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/OrchestrationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

OrchestrationConfiguration::OrchestrationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OrchestrationConfiguration& OrchestrationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("control"))
  {
    m_control = OrchestrationControlMapper::GetOrchestrationControlForName(jsonValue.GetString("control"));
    m_controlHasBeenSet = true;
  }
  return *this;
}

JsonValue OrchestrationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", OrchestrationControlMapper::GetNameForOrchestrationControl(m_control));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
