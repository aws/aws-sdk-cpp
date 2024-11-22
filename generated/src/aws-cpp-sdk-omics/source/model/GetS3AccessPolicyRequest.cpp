/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetS3AccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetS3AccessPolicyRequest::GetS3AccessPolicyRequest() : 
    m_s3AccessPointArnHasBeenSet(false)
{
}

Aws::String GetS3AccessPolicyRequest::SerializePayload() const
{
  return {};
}




