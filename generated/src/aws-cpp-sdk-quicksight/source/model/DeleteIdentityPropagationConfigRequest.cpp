/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteIdentityPropagationConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIdentityPropagationConfigRequest::DeleteIdentityPropagationConfigRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_service(ServiceType::NOT_SET),
    m_serviceHasBeenSet(false)
{
}

Aws::String DeleteIdentityPropagationConfigRequest::SerializePayload() const
{
  return {};
}




