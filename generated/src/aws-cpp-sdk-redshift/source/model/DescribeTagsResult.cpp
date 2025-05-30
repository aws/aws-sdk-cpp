﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeTagsResult.h>
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

DescribeTagsResult::DescribeTagsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTagsResult& DescribeTagsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTagsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTagsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode taggedResourcesNode = resultNode.FirstChild("TaggedResources");
    if(!taggedResourcesNode.IsNull())
    {
      XmlNode taggedResourcesMember = taggedResourcesNode.FirstChild("TaggedResource");
      m_taggedResourcesHasBeenSet = !taggedResourcesMember.IsNull();
      while(!taggedResourcesMember.IsNull())
      {
        m_taggedResources.push_back(taggedResourcesMember);
        taggedResourcesMember = taggedResourcesMember.NextNode("TaggedResource");
      }

      m_taggedResourcesHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeTagsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
