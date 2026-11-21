/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/DeletePolicyAssignmentRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeletePolicyAssignmentRequest::SerializePayload() const { return {}; }

void DeletePolicyAssignmentRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_policyArnHasBeenSet) {
    ss << m_policyArn;
    uri.AddQueryStringParameter("PolicyArn", ss.str());
    ss.str("");
  }

  if (m_principalArnHasBeenSet) {
    ss << m_principalArn;
    uri.AddQueryStringParameter("PrincipalArn", ss.str());
    ss.str("");
  }

  if (m_revisionHasBeenSet) {
    ss << m_revision;
    uri.AddQueryStringParameter("Revision", ss.str());
    ss.str("");
  }
}
