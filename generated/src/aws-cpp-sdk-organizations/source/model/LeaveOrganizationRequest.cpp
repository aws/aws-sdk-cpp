/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/LeaveOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LeaveOrganizationRequest::LeaveOrganizationRequest()
{
}

Aws::String LeaveOrganizationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection LeaveOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.LeaveOrganization"));
  return headers;

}




