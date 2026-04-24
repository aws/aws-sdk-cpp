/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DisassociateIamRoleFromResourceRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateIamRoleFromResourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("iamRoleArn", m_iamRoleArn);
  }

  if (m_awsIntegrationHasBeenSet) {
    payload.WithString("awsIntegration", SupportedAwsIntegrationMapper::GetNameForSupportedAwsIntegration(m_awsIntegration));
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateIamRoleFromResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DisassociateIamRoleFromResource"));
  return headers;
}
