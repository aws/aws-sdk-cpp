/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetSubscriberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSubscriberRequest::GetSubscriberRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetSubscriberRequest::SerializePayload() const
{
  return {};
}




