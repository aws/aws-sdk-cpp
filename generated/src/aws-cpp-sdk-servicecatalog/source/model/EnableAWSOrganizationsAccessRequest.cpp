/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/EnableAWSOrganizationsAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableAWSOrganizationsAccessRequest::EnableAWSOrganizationsAccessRequest()
{
}

Aws::String EnableAWSOrganizationsAccessRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection EnableAWSOrganizationsAccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.EnableAWSOrganizationsAccess"));
  return headers;

}




