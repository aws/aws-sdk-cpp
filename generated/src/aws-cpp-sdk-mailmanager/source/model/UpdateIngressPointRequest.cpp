/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/UpdateIngressPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIngressPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ingressPointIdHasBeenSet)
  {
   payload.WithString("IngressPointId", m_ingressPointId);

  }

  if(m_ingressPointNameHasBeenSet)
  {
   payload.WithString("IngressPointName", m_ingressPointName);

  }

  if(m_statusToUpdateHasBeenSet)
  {
   payload.WithString("StatusToUpdate", IngressPointStatusToUpdateMapper::GetNameForIngressPointStatusToUpdate(m_statusToUpdate));
  }

  if(m_ruleSetIdHasBeenSet)
  {
   payload.WithString("RuleSetId", m_ruleSetId);

  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   payload.WithString("TrafficPolicyId", m_trafficPolicyId);

  }

  if(m_ingressPointConfigurationHasBeenSet)
  {
   payload.WithObject("IngressPointConfiguration", m_ingressPointConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIngressPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.UpdateIngressPoint"));
  return headers;

}




