/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListFirewallDomainListsRequest::SerializePayload() const { return {}; }

void ListFirewallDomainListsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("max_results", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("next_token", ss.str());
    ss.str("");
  }

  if (m_globalResolverIdHasBeenSet) {
    ss << m_globalResolverId;
    uri.AddQueryStringParameter("global_resolver_id", ss.str());
    ss.str("");
  }
}
