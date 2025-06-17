/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EnableOrganizationAdminAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminAccountIdHasBeenSet)
  {
   payload.WithString("AdminAccountId", m_adminAccountId);

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", SecurityHubFeatureMapper::GetNameForSecurityHubFeature(m_feature));
  }

  return payload.View().WriteReadable();
}




