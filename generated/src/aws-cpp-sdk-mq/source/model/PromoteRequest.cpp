/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/PromoteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PromoteRequest::PromoteRequest() : 
    m_brokerIdHasBeenSet(false),
    m_mode(PromoteMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Aws::String PromoteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", PromoteModeMapper::GetNameForPromoteMode(m_mode));
  }

  return payload.View().WriteReadable();
}




