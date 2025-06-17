/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesActionV2.h>
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

AutomationRulesActionV2::AutomationRulesActionV2(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationRulesActionV2& AutomationRulesActionV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AutomationRulesActionTypeV2Mapper::GetAutomationRulesActionTypeV2ForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FindingFieldsUpdate"))
  {
    m_findingFieldsUpdate = jsonValue.GetObject("FindingFieldsUpdate");
    m_findingFieldsUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExternalIntegrationConfiguration"))
  {
    m_externalIntegrationConfiguration = jsonValue.GetObject("ExternalIntegrationConfiguration");
    m_externalIntegrationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRulesActionV2::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AutomationRulesActionTypeV2Mapper::GetNameForAutomationRulesActionTypeV2(m_type));
  }

  if(m_findingFieldsUpdateHasBeenSet)
  {
   payload.WithObject("FindingFieldsUpdate", m_findingFieldsUpdate.Jsonize());

  }

  if(m_externalIntegrationConfigurationHasBeenSet)
  {
   payload.WithObject("ExternalIntegrationConfiguration", m_externalIntegrationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
