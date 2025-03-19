/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeOptionGroupsResult.h>
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

DescribeOptionGroupsResult::DescribeOptionGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeOptionGroupsResult& DescribeOptionGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeOptionGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeOptionGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode optionGroupsListNode = resultNode.FirstChild("OptionGroupsList");
    if(!optionGroupsListNode.IsNull())
    {
      XmlNode optionGroupsListMember = optionGroupsListNode.FirstChild("OptionGroup");
      m_optionGroupsListHasBeenSet = !optionGroupsListMember.IsNull();
      while(!optionGroupsListMember.IsNull())
      {
        m_optionGroupsList.push_back(optionGroupsListMember);
        optionGroupsListMember = optionGroupsListMember.NextNode("OptionGroup");
      }

      m_optionGroupsListHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeOptionGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
