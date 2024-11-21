﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notificationscontacts/model/GetEmailContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NotificationsContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEmailContactRequest::GetEmailContactRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetEmailContactRequest::SerializePayload() const
{
  return {};
}




