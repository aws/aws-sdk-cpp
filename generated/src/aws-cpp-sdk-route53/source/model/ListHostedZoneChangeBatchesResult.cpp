/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ListHostedZoneChangeBatchesResult.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListHostedZoneChangeBatchesResult::ListHostedZoneChangeBatchesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ListHostedZoneChangeBatchesResult& ListHostedZoneChangeBatchesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode changeBatchSummariesNode = resultNode.FirstChild("ChangeBatchSummaries");
    if (!changeBatchSummariesNode.IsNull()) {
      XmlNode changeBatchSummariesMember = changeBatchSummariesNode.FirstChild("ChangeBatchSummary");
      m_changeBatchSummariesHasBeenSet = !changeBatchSummariesMember.IsNull();
      while (!changeBatchSummariesMember.IsNull()) {
        m_changeBatchSummaries.push_back(changeBatchSummariesMember);
        changeBatchSummariesMember = changeBatchSummariesMember.NextNode("ChangeBatchSummary");
      }

      m_changeBatchSummariesHasBeenSet = true;
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
