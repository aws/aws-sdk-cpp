/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/UnlockRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RecycleBin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnlockRuleRequest::UnlockRuleRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String UnlockRuleRequest::SerializePayload() const
{
  return {};
}




