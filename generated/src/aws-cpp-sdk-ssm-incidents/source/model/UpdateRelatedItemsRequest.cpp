/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/UpdateRelatedItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRelatedItemsRequest::UpdateRelatedItemsRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_incidentRecordArnHasBeenSet(false),
    m_relatedItemsUpdateHasBeenSet(false)
{
}

Aws::String UpdateRelatedItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_incidentRecordArnHasBeenSet)
  {
   payload.WithString("incidentRecordArn", m_incidentRecordArn);

  }

  if(m_relatedItemsUpdateHasBeenSet)
  {
   payload.WithObject("relatedItemsUpdate", m_relatedItemsUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}




