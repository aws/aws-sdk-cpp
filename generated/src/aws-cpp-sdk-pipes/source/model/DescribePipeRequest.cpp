/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DescribePipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePipeRequest::DescribePipeRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DescribePipeRequest::SerializePayload() const
{
  return {};
}




