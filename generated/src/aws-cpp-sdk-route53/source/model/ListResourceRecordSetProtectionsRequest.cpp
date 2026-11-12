/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ListResourceRecordSetProtectionsRequest.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListResourceRecordSetProtectionsRequest::SerializePayload() const { return {}; }

void ListResourceRecordSetProtectionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_startRecordNameHasBeenSet) {
    ss << m_startRecordName;
    uri.AddQueryStringParameter("name", ss.str());
    ss.str("");
  }

  if (m_startRecordTypeHasBeenSet) {
    ss << RRTypeMapper::GetNameForRRType(m_startRecordType);
    uri.AddQueryStringParameter("type", ss.str());
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
