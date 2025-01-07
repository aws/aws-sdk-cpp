﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CloseCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CloseCaseRequest::CloseCaseRequest() : 
    m_caseIdHasBeenSet(false)
{
}

Aws::String CloseCaseRequest::SerializePayload() const
{
  return {};
}




