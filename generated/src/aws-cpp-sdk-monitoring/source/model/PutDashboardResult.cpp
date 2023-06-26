/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutDashboardResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

PutDashboardResult::PutDashboardResult()
{
}

PutDashboardResult::PutDashboardResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PutDashboardResult& PutDashboardResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PutDashboardResult"))
  {
    resultNode = rootNode.FirstChild("PutDashboardResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dashboardValidationMessagesNode = resultNode.FirstChild("DashboardValidationMessages");
    if(!dashboardValidationMessagesNode.IsNull())
    {
      XmlNode dashboardValidationMessagesMember = dashboardValidationMessagesNode.FirstChild("member");
      while(!dashboardValidationMessagesMember.IsNull())
      {
        m_dashboardValidationMessages.push_back(dashboardValidationMessagesMember);
        dashboardValidationMessagesMember = dashboardValidationMessagesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::PutDashboardResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
