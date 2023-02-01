/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListSubscriptionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SNS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListSubscriptionsResult::ListSubscriptionsResult()
{
}

ListSubscriptionsResult::ListSubscriptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListSubscriptionsResult& ListSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListSubscriptionsResult"))
  {
    resultNode = rootNode.FirstChild("ListSubscriptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode subscriptionsNode = resultNode.FirstChild("Subscriptions");
    if(!subscriptionsNode.IsNull())
    {
      XmlNode subscriptionsMember = subscriptionsNode.FirstChild("member");
      while(!subscriptionsMember.IsNull())
      {
        m_subscriptions.push_back(subscriptionsMember);
        subscriptionsMember = subscriptionsMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ListSubscriptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
