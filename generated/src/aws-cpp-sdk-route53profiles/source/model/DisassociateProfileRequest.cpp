/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/DisassociateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Profiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateProfileRequest::DisassociateProfileRequest() : 
    m_profileIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

Aws::String DisassociateProfileRequest::SerializePayload() const
{
  return {};
}




