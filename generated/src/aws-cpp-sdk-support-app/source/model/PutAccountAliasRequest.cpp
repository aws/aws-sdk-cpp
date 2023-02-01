/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/PutAccountAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountAliasRequest::PutAccountAliasRequest() : 
    m_accountAliasHasBeenSet(false)
{
}

Aws::String PutAccountAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountAliasHasBeenSet)
  {
   payload.WithString("accountAlias", m_accountAlias);

  }

  return payload.View().WriteReadable();
}




