/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetContactListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetContactListRequest::GetContactListRequest() : 
    m_contactListNameHasBeenSet(false)
{
}

Aws::String GetContactListRequest::SerializePayload() const
{
  return {};
}




