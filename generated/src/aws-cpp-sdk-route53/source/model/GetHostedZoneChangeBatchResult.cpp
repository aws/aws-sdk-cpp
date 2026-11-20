/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/GetHostedZoneChangeBatchResult.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHostedZoneChangeBatchResult::GetHostedZoneChangeBatchResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetHostedZoneChangeBatchResult& GetHostedZoneChangeBatchResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode changeBatchSummaryNode = resultNode.FirstChild("ChangeBatchSummary");
    if (!changeBatchSummaryNode.IsNull()) {
      m_changeBatchSummary = changeBatchSummaryNode;
      m_changeBatchSummaryHasBeenSet = true;
    }
    XmlNode changeBatchNode = resultNode.FirstChild("ChangeBatch");
    if (!changeBatchNode.IsNull()) {
      m_changeBatch = changeBatchNode;
      m_changeBatchHasBeenSet = true;
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
