/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetQuickResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQuickResponseRequest::GetQuickResponseRequest() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_quickResponseIdHasBeenSet(false)
{
}

Aws::String GetQuickResponseRequest::SerializePayload() const
{
  return {};
}




