/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/GetProfileAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Profiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProfileAssociationRequest::GetProfileAssociationRequest() : 
    m_profileAssociationIdHasBeenSet(false)
{
}

Aws::String GetProfileAssociationRequest::SerializePayload() const
{
  return {};
}




