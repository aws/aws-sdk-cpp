/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateCustomLogSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomLogSourceRequest::CreateCustomLogSourceRequest() : 
    m_customSourceNameHasBeenSet(false),
    m_eventClass(OcsfEventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_glueInvocationRoleArnHasBeenSet(false),
    m_logProviderAccountIdHasBeenSet(false)
{
}

Aws::String CreateCustomLogSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customSourceNameHasBeenSet)
  {
   payload.WithString("customSourceName", m_customSourceName);

  }

  if(m_eventClassHasBeenSet)
  {
   payload.WithString("eventClass", OcsfEventClassMapper::GetNameForOcsfEventClass(m_eventClass));
  }

  if(m_glueInvocationRoleArnHasBeenSet)
  {
   payload.WithString("glueInvocationRoleArn", m_glueInvocationRoleArn);

  }

  if(m_logProviderAccountIdHasBeenSet)
  {
   payload.WithString("logProviderAccountId", m_logProviderAccountId);

  }

  return payload.View().WriteReadable();
}




