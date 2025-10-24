﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CreateWorkforceRequest.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkforceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cognitoConfigHasBeenSet) {
    payload.WithObject("CognitoConfig", m_cognitoConfig.Jsonize());
  }

  if (m_oidcConfigHasBeenSet) {
    payload.WithObject("OidcConfig", m_oidcConfig.Jsonize());
  }

  if (m_sourceIpConfigHasBeenSet) {
    payload.WithObject("SourceIpConfig", m_sourceIpConfig.Jsonize());
  }

  if (m_workforceNameHasBeenSet) {
    payload.WithString("WorkforceName", m_workforceName);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_workforceVpcConfigHasBeenSet) {
    payload.WithObject("WorkforceVpcConfig", m_workforceVpcConfig.Jsonize());
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("IpAddressType", WorkforceIpAddressTypeMapper::GetNameForWorkforceIpAddressType(m_ipAddressType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkforceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateWorkforce"));
  return headers;
}
