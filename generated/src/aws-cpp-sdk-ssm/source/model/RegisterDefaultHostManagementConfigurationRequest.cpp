/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/RegisterDefaultHostManagementConfigurationRequest.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterDefaultHostManagementConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_permissionModelHasBeenSet) {
    payload.WithString("PermissionModel", DHMCPermissionModelMapper::GetNameForDHMCPermissionModel(m_permissionModel));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_overwriteHasBeenSet) {
    payload.WithBool("Overwrite", m_overwrite);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterDefaultHostManagementConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.RegisterDefaultHostManagementConfiguration"));
  return headers;
}
