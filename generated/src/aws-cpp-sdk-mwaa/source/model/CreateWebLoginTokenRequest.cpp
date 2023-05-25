/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/CreateWebLoginTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWebLoginTokenRequest::CreateWebLoginTokenRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String CreateWebLoginTokenRequest::SerializePayload() const
{
  return {};
}




