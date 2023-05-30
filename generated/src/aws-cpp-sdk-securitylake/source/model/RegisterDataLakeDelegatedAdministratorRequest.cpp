/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/RegisterDataLakeDelegatedAdministratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterDataLakeDelegatedAdministratorRequest::RegisterDataLakeDelegatedAdministratorRequest() : 
    m_accountIdHasBeenSet(false)
{
}

Aws::String RegisterDataLakeDelegatedAdministratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload.View().WriteReadable();
}




