/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CreateOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOrganizationRequest::CreateOrganizationRequest() : 
    m_featureSet(OrganizationFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false)
{
}

Aws::String CreateOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featureSetHasBeenSet)
  {
   payload.WithString("FeatureSet", OrganizationFeatureSetMapper::GetNameForOrganizationFeatureSet(m_featureSet));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.CreateOrganization"));
  return headers;

}




