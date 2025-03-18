﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ListRecommendationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListRecommendationsResult::ListRecommendationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListRecommendationsResult& ListRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListRecommendationsResult"))
  {
    resultNode = rootNode.FirstChild("ListRecommendationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode recommendationsNode = resultNode.FirstChild("Recommendations");
    if(!recommendationsNode.IsNull())
    {
      XmlNode recommendationsMember = recommendationsNode.FirstChild("Recommendation");
      m_recommendationsHasBeenSet = !recommendationsMember.IsNull();
      while(!recommendationsMember.IsNull())
      {
        m_recommendations.push_back(recommendationsMember);
        recommendationsMember = recommendationsMember.NextNode("Recommendation");
      }

      m_recommendationsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ListRecommendationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
