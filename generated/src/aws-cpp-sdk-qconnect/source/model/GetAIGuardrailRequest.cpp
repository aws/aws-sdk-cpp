﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetAIGuardrailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAIGuardrailRequest::GetAIGuardrailRequest() : 
    m_aiGuardrailIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false)
{
}

Aws::String GetAIGuardrailRequest::SerializePayload() const
{
  return {};
}




