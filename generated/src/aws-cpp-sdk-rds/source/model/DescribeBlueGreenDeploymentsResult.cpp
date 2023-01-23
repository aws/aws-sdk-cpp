/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeBlueGreenDeploymentsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeBlueGreenDeploymentsResult::DescribeBlueGreenDeploymentsResult()
{
}

DescribeBlueGreenDeploymentsResult::DescribeBlueGreenDeploymentsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeBlueGreenDeploymentsResult& DescribeBlueGreenDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeBlueGreenDeploymentsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeBlueGreenDeploymentsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode blueGreenDeploymentsNode = resultNode.FirstChild("BlueGreenDeployments");
    if(!blueGreenDeploymentsNode.IsNull())
    {
      XmlNode blueGreenDeploymentsMember = blueGreenDeploymentsNode.FirstChild("member");
      while(!blueGreenDeploymentsMember.IsNull())
      {
        m_blueGreenDeployments.push_back(blueGreenDeploymentsMember);
        blueGreenDeploymentsMember = blueGreenDeploymentsMember.NextNode("member");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeBlueGreenDeploymentsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
