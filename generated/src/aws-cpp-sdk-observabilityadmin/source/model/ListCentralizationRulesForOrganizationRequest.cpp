/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListCentralizationRulesForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleNamePrefixHasBeenSet)
  {
   payload.WithString("RuleNamePrefix", m_ruleNamePrefix);

  }

  if(m_allRegionsHasBeenSet)
  {
   payload.WithBool("AllRegions", m_allRegions);

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




