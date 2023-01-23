/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeDBClusterParametersResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBClusterParametersResult::DescribeDBClusterParametersResult()
{
}

DescribeDBClusterParametersResult::DescribeDBClusterParametersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterParametersResult& DescribeDBClusterParametersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterParametersResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterParametersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("Parameter");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("Parameter");
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
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeDBClusterParametersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
