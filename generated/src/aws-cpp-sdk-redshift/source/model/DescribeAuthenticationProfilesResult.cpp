/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeAuthenticationProfilesResult.h>
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

DescribeAuthenticationProfilesResult::DescribeAuthenticationProfilesResult()
{
}

DescribeAuthenticationProfilesResult::DescribeAuthenticationProfilesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAuthenticationProfilesResult& DescribeAuthenticationProfilesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAuthenticationProfilesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAuthenticationProfilesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode authenticationProfilesNode = resultNode.FirstChild("AuthenticationProfiles");
    if(!authenticationProfilesNode.IsNull())
    {
      XmlNode authenticationProfilesMember = authenticationProfilesNode.FirstChild("member");
      while(!authenticationProfilesMember.IsNull())
      {
        m_authenticationProfiles.push_back(authenticationProfilesMember);
        authenticationProfilesMember = authenticationProfilesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeAuthenticationProfilesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
