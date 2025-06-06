﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/RegisterInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_publicIpHasBeenSet)
  {
   payload.WithString("PublicIp", m_publicIp);

  }

  if(m_privateIpHasBeenSet)
  {
   payload.WithString("PrivateIp", m_privateIp);

  }

  if(m_rsaPublicKeyHasBeenSet)
  {
   payload.WithString("RsaPublicKey", m_rsaPublicKey);

  }

  if(m_rsaPublicKeyFingerprintHasBeenSet)
  {
   payload.WithString("RsaPublicKeyFingerprint", m_rsaPublicKeyFingerprint);

  }

  if(m_instanceIdentityHasBeenSet)
  {
   payload.WithObject("InstanceIdentity", m_instanceIdentity.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.RegisterInstance"));
  return headers;

}




