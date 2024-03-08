/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBRecommendationsResult.h>
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

DescribeDBRecommendationsResult::DescribeDBRecommendationsResult()
{
}

DescribeDBRecommendationsResult::DescribeDBRecommendationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBRecommendationsResult& DescribeDBRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBRecommendationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBRecommendationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBRecommendationsNode = resultNode.FirstChild("DBRecommendations");
    if(!dBRecommendationsNode.IsNull())
    {
      XmlNode dBRecommendationsMember = dBRecommendationsNode.FirstChild("member");
      while(!dBRecommendationsMember.IsNull())
      {
        m_dBRecommendations.push_back(dBRecommendationsMember);
        dBRecommendationsMember = dBRecommendationsMember.NextNode("member");
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
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBRecommendationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
