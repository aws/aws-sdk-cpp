﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/RemoveSourceIdentifierFromSubscriptionResult.h>
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

RemoveSourceIdentifierFromSubscriptionResult::RemoveSourceIdentifierFromSubscriptionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RemoveSourceIdentifierFromSubscriptionResult& RemoveSourceIdentifierFromSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RemoveSourceIdentifierFromSubscriptionResult"))
  {
    resultNode = rootNode.FirstChild("RemoveSourceIdentifierFromSubscriptionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode eventSubscriptionNode = resultNode.FirstChild("EventSubscription");
    if(!eventSubscriptionNode.IsNull())
    {
      m_eventSubscription = eventSubscriptionNode;
      m_eventSubscriptionHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::RemoveSourceIdentifierFromSubscriptionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
