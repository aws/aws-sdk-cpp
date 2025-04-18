﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBLogFilesResult.h>
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

DescribeDBLogFilesResult::DescribeDBLogFilesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBLogFilesResult& DescribeDBLogFilesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBLogFilesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBLogFilesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode describeDBLogFilesNode = resultNode.FirstChild("DescribeDBLogFiles");
    if(!describeDBLogFilesNode.IsNull())
    {
      XmlNode describeDBLogFilesMember = describeDBLogFilesNode.FirstChild("DescribeDBLogFilesDetails");
      m_describeDBLogFilesHasBeenSet = !describeDBLogFilesMember.IsNull();
      while(!describeDBLogFilesMember.IsNull())
      {
        m_describeDBLogFiles.push_back(describeDBLogFilesMember);
        describeDBLogFilesMember = describeDBLogFilesMember.NextNode("DescribeDBLogFilesDetails");
      }

      m_describeDBLogFilesHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBLogFilesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
