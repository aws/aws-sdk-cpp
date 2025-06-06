﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/FailoverGlobalClusterResult.h>
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

FailoverGlobalClusterResult::FailoverGlobalClusterResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

FailoverGlobalClusterResult& FailoverGlobalClusterResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "FailoverGlobalClusterResult"))
  {
    resultNode = rootNode.FirstChild("FailoverGlobalClusterResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode globalClusterNode = resultNode.FirstChild("GlobalCluster");
    if(!globalClusterNode.IsNull())
    {
      m_globalCluster = globalClusterNode;
      m_globalClusterHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::FailoverGlobalClusterResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
