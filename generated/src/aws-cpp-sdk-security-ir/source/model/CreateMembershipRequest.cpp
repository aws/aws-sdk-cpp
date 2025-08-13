/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CreateMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_membershipNameHasBeenSet)
  {
   payload.WithString("membershipName", m_membershipName);

  }

  if(m_incidentResponseTeamHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> incidentResponseTeamJsonList(m_incidentResponseTeam.size());
   for(unsigned incidentResponseTeamIndex = 0; incidentResponseTeamIndex < incidentResponseTeamJsonList.GetLength(); ++incidentResponseTeamIndex)
   {
     incidentResponseTeamJsonList[incidentResponseTeamIndex].AsObject(m_incidentResponseTeam[incidentResponseTeamIndex].Jsonize());
   }
   payload.WithArray("incidentResponseTeam", std::move(incidentResponseTeamJsonList));

  }

  if(m_optInFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optInFeaturesJsonList(m_optInFeatures.size());
   for(unsigned optInFeaturesIndex = 0; optInFeaturesIndex < optInFeaturesJsonList.GetLength(); ++optInFeaturesIndex)
   {
     optInFeaturesJsonList[optInFeaturesIndex].AsObject(m_optInFeatures[optInFeaturesIndex].Jsonize());
   }
   payload.WithArray("optInFeatures", std::move(optInFeaturesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_coverEntireOrganizationHasBeenSet)
  {
   payload.WithBool("coverEntireOrganization", m_coverEntireOrganization);

  }

  return payload.View().WriteReadable();
}




