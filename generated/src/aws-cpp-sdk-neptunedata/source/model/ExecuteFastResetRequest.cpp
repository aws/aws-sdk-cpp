/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteFastResetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteFastResetRequest::ExecuteFastResetRequest() : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

Aws::String ExecuteFastResetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload.View().WriteReadable();
}




