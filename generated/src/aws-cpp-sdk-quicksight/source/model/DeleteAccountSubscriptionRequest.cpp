/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteAccountSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccountSubscriptionRequest::DeleteAccountSubscriptionRequest() : 
    m_awsAccountIdHasBeenSet(false)
{
}

Aws::String DeleteAccountSubscriptionRequest::SerializePayload() const
{
  return {};
}




