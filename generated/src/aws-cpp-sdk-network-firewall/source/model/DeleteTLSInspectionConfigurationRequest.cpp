/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DeleteTLSInspectionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTLSInspectionConfigurationRequest::DeleteTLSInspectionConfigurationRequest() : 
    m_tLSInspectionConfigurationArnHasBeenSet(false),
    m_tLSInspectionConfigurationNameHasBeenSet(false)
{
}

Aws::String DeleteTLSInspectionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tLSInspectionConfigurationArnHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationArn", m_tLSInspectionConfigurationArn);

  }

  if(m_tLSInspectionConfigurationNameHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationName", m_tLSInspectionConfigurationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTLSInspectionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DeleteTLSInspectionConfiguration"));
  return headers;

}




