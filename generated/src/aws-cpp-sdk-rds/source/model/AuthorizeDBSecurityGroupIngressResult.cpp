/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/AuthorizeDBSecurityGroupIngressResult.h>
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

AuthorizeDBSecurityGroupIngressResult::AuthorizeDBSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AuthorizeDBSecurityGroupIngressResult& AuthorizeDBSecurityGroupIngressResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AuthorizeDBSecurityGroupIngressResult"))
  {
    resultNode = rootNode.FirstChild("AuthorizeDBSecurityGroupIngressResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBSecurityGroupNode = resultNode.FirstChild("DBSecurityGroup");
    if(!dBSecurityGroupNode.IsNull())
    {
      m_dBSecurityGroup = dBSecurityGroupNode;
      m_dBSecurityGroupHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::AuthorizeDBSecurityGroupIngressResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
