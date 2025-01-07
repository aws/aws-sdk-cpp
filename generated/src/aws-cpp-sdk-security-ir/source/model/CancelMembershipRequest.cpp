﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CancelMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelMembershipRequest::CancelMembershipRequest() : 
    m_membershipIdHasBeenSet(false)
{
}

Aws::String CancelMembershipRequest::SerializePayload() const
{
  return {};
}




