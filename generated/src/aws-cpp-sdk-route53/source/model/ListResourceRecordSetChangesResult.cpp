/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ListResourceRecordSetChangesResult.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListResourceRecordSetChangesResult::ListResourceRecordSetChangesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ListResourceRecordSetChangesResult& ListResourceRecordSetChangesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode resourceRecordSetChangesNode = resultNode.FirstChild("ResourceRecordSetChanges");
    if (!resourceRecordSetChangesNode.IsNull()) {
      XmlNode resourceRecordSetChangesMember = resourceRecordSetChangesNode.FirstChild("ResourceRecordSetChange");
      m_resourceRecordSetChangesHasBeenSet = !resourceRecordSetChangesMember.IsNull();
      while (!resourceRecordSetChangesMember.IsNull()) {
        m_resourceRecordSetChanges.push_back(resourceRecordSetChangesMember);
        resourceRecordSetChangesMember = resourceRecordSetChangesMember.NextNode("ResourceRecordSetChange");
      }

      m_resourceRecordSetChangesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
