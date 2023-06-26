/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadDiscoveryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

WorkloadDiscoveryConfig::WorkloadDiscoveryConfig() : 
    m_trustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus::NOT_SET),
    m_trustedAdvisorIntegrationStatusHasBeenSet(false),
    m_workloadResourceDefinitionHasBeenSet(false)
{
}

WorkloadDiscoveryConfig::WorkloadDiscoveryConfig(JsonView jsonValue) : 
    m_trustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus::NOT_SET),
    m_trustedAdvisorIntegrationStatusHasBeenSet(false),
    m_workloadResourceDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadDiscoveryConfig& WorkloadDiscoveryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrustedAdvisorIntegrationStatus"))
  {
    m_trustedAdvisorIntegrationStatus = TrustedAdvisorIntegrationStatusMapper::GetTrustedAdvisorIntegrationStatusForName(jsonValue.GetString("TrustedAdvisorIntegrationStatus"));

    m_trustedAdvisorIntegrationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadResourceDefinition"))
  {
    Aws::Utils::Array<JsonView> workloadResourceDefinitionJsonList = jsonValue.GetArray("WorkloadResourceDefinition");
    for(unsigned workloadResourceDefinitionIndex = 0; workloadResourceDefinitionIndex < workloadResourceDefinitionJsonList.GetLength(); ++workloadResourceDefinitionIndex)
    {
      m_workloadResourceDefinition.push_back(DefinitionTypeMapper::GetDefinitionTypeForName(workloadResourceDefinitionJsonList[workloadResourceDefinitionIndex].AsString()));
    }
    m_workloadResourceDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadDiscoveryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_trustedAdvisorIntegrationStatusHasBeenSet)
  {
   payload.WithString("TrustedAdvisorIntegrationStatus", TrustedAdvisorIntegrationStatusMapper::GetNameForTrustedAdvisorIntegrationStatus(m_trustedAdvisorIntegrationStatus));
  }

  if(m_workloadResourceDefinitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workloadResourceDefinitionJsonList(m_workloadResourceDefinition.size());
   for(unsigned workloadResourceDefinitionIndex = 0; workloadResourceDefinitionIndex < workloadResourceDefinitionJsonList.GetLength(); ++workloadResourceDefinitionIndex)
   {
     workloadResourceDefinitionJsonList[workloadResourceDefinitionIndex].AsString(DefinitionTypeMapper::GetNameForDefinitionType(m_workloadResourceDefinition[workloadResourceDefinitionIndex]));
   }
   payload.WithArray("WorkloadResourceDefinition", std::move(workloadResourceDefinitionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
