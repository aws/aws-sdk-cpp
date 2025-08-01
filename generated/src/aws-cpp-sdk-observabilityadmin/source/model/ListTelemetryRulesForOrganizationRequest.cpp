/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListTelemetryRulesForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleNamePrefixHasBeenSet)
  {
   payload.WithString("RuleNamePrefix", m_ruleNamePrefix);

  }

  if(m_sourceAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceAccountIdsJsonList(m_sourceAccountIds.size());
   for(unsigned sourceAccountIdsIndex = 0; sourceAccountIdsIndex < sourceAccountIdsJsonList.GetLength(); ++sourceAccountIdsIndex)
   {
     sourceAccountIdsJsonList[sourceAccountIdsIndex].AsString(m_sourceAccountIds[sourceAccountIdsIndex]);
   }
   payload.WithArray("SourceAccountIds", std::move(sourceAccountIdsJsonList));

  }

  if(m_sourceOrganizationUnitIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceOrganizationUnitIdsJsonList(m_sourceOrganizationUnitIds.size());
   for(unsigned sourceOrganizationUnitIdsIndex = 0; sourceOrganizationUnitIdsIndex < sourceOrganizationUnitIdsJsonList.GetLength(); ++sourceOrganizationUnitIdsIndex)
   {
     sourceOrganizationUnitIdsJsonList[sourceOrganizationUnitIdsIndex].AsString(m_sourceOrganizationUnitIds[sourceOrganizationUnitIdsIndex]);
   }
   payload.WithArray("SourceOrganizationUnitIds", std::move(sourceOrganizationUnitIdsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




