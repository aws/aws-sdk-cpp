/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ListHostedZoneChangeBatchesRequest.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListHostedZoneChangeBatchesRequest::SerializePayload() const { return {}; }

void ListHostedZoneChangeBatchesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_submittedAfterHasBeenSet) {
    ss << m_submittedAfter;
    uri.AddQueryStringParameter("submittedafter", ss.str());
    ss.str("");
  }

  if (m_submittedBeforeHasBeenSet) {
    ss << m_submittedBefore;
    uri.AddQueryStringParameter("submittedbefore", ss.str());
    ss.str("");
  }

  if (m_startAfterChangeIdHasBeenSet) {
    ss << m_startAfterChangeId;
    uri.AddQueryStringParameter("startafterchangeid", ss.str());
    ss.str("");
  }

  if (m_sortOrderHasBeenSet) {
    ss << ChangeHistorySortOrderMapper::GetNameForChangeHistorySortOrder(m_sortOrder);
    uri.AddQueryStringParameter("sortorder", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxresults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nexttoken", ss.str());
    ss.str("");
  }
}
