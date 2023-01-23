/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateDatalakeDelegatedAdminRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatalakeDelegatedAdminRequest::CreateDatalakeDelegatedAdminRequest() : 
    m_accountHasBeenSet(false)
{
}

Aws::String CreateDatalakeDelegatedAdminRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithString("account", m_account);

  }

  return payload.View().WriteReadable();
}




