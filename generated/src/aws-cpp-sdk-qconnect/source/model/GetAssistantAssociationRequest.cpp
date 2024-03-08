/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetAssistantAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssistantAssociationRequest::GetAssistantAssociationRequest() : 
    m_assistantAssociationIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false)
{
}

Aws::String GetAssistantAssociationRequest::SerializePayload() const
{
  return {};
}




