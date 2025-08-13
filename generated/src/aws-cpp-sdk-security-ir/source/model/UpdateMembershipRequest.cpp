/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/UpdateMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMembershipRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_membershipAccountsConfigurationsUpdateHasBeenSet)
  {
   payload.WithObject("membershipAccountsConfigurationsUpdate", m_membershipAccountsConfigurationsUpdate.Jsonize());

  }

  if(m_undoMembershipCancellationHasBeenSet)
  {
   payload.WithBool("undoMembershipCancellation", m_undoMembershipCancellation);

  }

  return payload.View().WriteReadable();
}




