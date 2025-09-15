/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/CentralizationRuleSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

CentralizationRuleSource::CentralizationRuleSource(JsonView jsonValue)
{
  *this = jsonValue;
}

CentralizationRuleSource& CentralizationRuleSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceLogsConfiguration"))
  {
    m_sourceLogsConfiguration = jsonValue.GetObject("SourceLogsConfiguration");
    m_sourceLogsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CentralizationRuleSource::Jsonize() const
{
  JsonValue payload;

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_sourceLogsConfigurationHasBeenSet)
  {
   payload.WithObject("SourceLogsConfiguration", m_sourceLogsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
