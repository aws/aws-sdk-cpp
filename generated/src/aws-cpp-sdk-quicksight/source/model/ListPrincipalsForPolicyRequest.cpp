/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/ListPrincipalsForPolicyRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPrincipalsForPolicyRequest::SerializePayload() const { return {}; }

void ListPrincipalsForPolicyRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_policyArnHasBeenSet) {
    ss << m_policyArn;
    uri.AddQueryStringParameter("PolicyArn", ss.str());
    ss.str("");
  }

  if (m_principalTypeHasBeenSet) {
    ss << PrincipalTypeMapper::GetNameForPrincipalType(m_principalType);
    uri.AddQueryStringParameter("PrincipalType", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("MaxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("NextToken", ss.str());
    ss.str("");
  }
}
