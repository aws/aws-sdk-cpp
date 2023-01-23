/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/LockRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RecycleBin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LockRuleRequest::LockRuleRequest() : 
    m_identifierHasBeenSet(false),
    m_lockConfigurationHasBeenSet(false)
{
}

Aws::String LockRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lockConfigurationHasBeenSet)
  {
   payload.WithObject("LockConfiguration", m_lockConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




