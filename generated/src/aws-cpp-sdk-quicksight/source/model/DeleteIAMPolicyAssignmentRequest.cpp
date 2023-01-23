/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteIAMPolicyAssignmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIAMPolicyAssignmentRequest::DeleteIAMPolicyAssignmentRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_assignmentNameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

Aws::String DeleteIAMPolicyAssignmentRequest::SerializePayload() const
{
  return {};
}




