/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/model/UpdateLakehouseConfigurationRequest.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLakehouseConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogNameHasBeenSet) {
    payload.WithString("catalogName", m_catalogName);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  if (m_lakehouseIdcApplicationArnHasBeenSet) {
    payload.WithString("lakehouseIdcApplicationArn", m_lakehouseIdcApplicationArn);
  }

  if (m_lakehouseIdcRegistrationHasBeenSet) {
    payload.WithString("lakehouseIdcRegistration",
                       LakehouseIdcRegistrationMapper::GetNameForLakehouseIdcRegistration(m_lakehouseIdcRegistration));
  }

  if (m_lakehouseRegistrationHasBeenSet) {
    payload.WithString("lakehouseRegistration", LakehouseRegistrationMapper::GetNameForLakehouseRegistration(m_lakehouseRegistration));
  }

  if (m_namespaceNameHasBeenSet) {
    payload.WithString("namespaceName", m_namespaceName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLakehouseConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateLakehouseConfiguration"));
  return headers;
}
