/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeEventSubscriptionsResult.h>
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

DescribeEventSubscriptionsResult::DescribeEventSubscriptionsResult()
{
}

DescribeEventSubscriptionsResult::DescribeEventSubscriptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeEventSubscriptionsResult& DescribeEventSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEventSubscriptionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeEventSubscriptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode eventSubscriptionsListNode = resultNode.FirstChild("EventSubscriptionsList");
    if(!eventSubscriptionsListNode.IsNull())
    {
      XmlNode eventSubscriptionsListMember = eventSubscriptionsListNode.FirstChild("EventSubscription");
      while(!eventSubscriptionsListMember.IsNull())
      {
        m_eventSubscriptionsList.push_back(eventSubscriptionsListMember);
        eventSubscriptionsListMember = eventSubscriptionsListMember.NextNode("EventSubscription");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeEventSubscriptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
