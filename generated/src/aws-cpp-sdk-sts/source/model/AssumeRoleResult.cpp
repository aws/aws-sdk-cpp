/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AssumeRoleResult::AssumeRoleResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssumeRoleResult& AssumeRoleResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssumeRoleResult"))
  {
    resultNode = rootNode.FirstChild("AssumeRoleResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    if(!credentialsNode.IsNull())
    {
      m_credentials = credentialsNode;
      m_credentialsHasBeenSet = true;
    }
    XmlNode assumedRoleUserNode = resultNode.FirstChild("AssumedRoleUser");
    if(!assumedRoleUserNode.IsNull())
    {
      m_assumedRoleUser = assumedRoleUserNode;
      m_assumedRoleUserHasBeenSet = true;
    }
    XmlNode packedPolicySizeNode = resultNode.FirstChild("PackedPolicySize");
    if(!packedPolicySizeNode.IsNull())
    {
      m_packedPolicySize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(packedPolicySizeNode.GetText()).c_str()).c_str());
      m_packedPolicySizeHasBeenSet = true;
    }
    XmlNode sourceIdentityNode = resultNode.FirstChild("SourceIdentity");
    if(!sourceIdentityNode.IsNull())
    {
      m_sourceIdentity = Aws::Utils::Xml::DecodeEscapedXmlText(sourceIdentityNode.GetText());
      m_sourceIdentityHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::AssumeRoleResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
