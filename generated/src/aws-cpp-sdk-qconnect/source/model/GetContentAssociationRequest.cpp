/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetContentAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetContentAssociationRequest::GetContentAssociationRequest() : 
    m_contentAssociationIdHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

Aws::String GetContentAssociationRequest::SerializePayload() const
{
  return {};
}




