/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleWithWebIdentityResult.h>
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

AssumeRoleWithWebIdentityResult::AssumeRoleWithWebIdentityResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssumeRoleWithWebIdentityResult& AssumeRoleWithWebIdentityResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssumeRoleWithWebIdentityResult"))
  {
    resultNode = rootNode.FirstChild("AssumeRoleWithWebIdentityResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    if(!credentialsNode.IsNull())
    {
      m_credentials = credentialsNode;
      m_credentialsHasBeenSet = true;
    }
    XmlNode subjectFromWebIdentityTokenNode = resultNode.FirstChild("SubjectFromWebIdentityToken");
    if(!subjectFromWebIdentityTokenNode.IsNull())
    {
      m_subjectFromWebIdentityToken = Aws::Utils::Xml::DecodeEscapedXmlText(subjectFromWebIdentityTokenNode.GetText());
      m_subjectFromWebIdentityTokenHasBeenSet = true;
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
    XmlNode providerNode = resultNode.FirstChild("Provider");
    if(!providerNode.IsNull())
    {
      m_provider = Aws::Utils::Xml::DecodeEscapedXmlText(providerNode.GetText());
      m_providerHasBeenSet = true;
    }
    XmlNode audienceNode = resultNode.FirstChild("Audience");
    if(!audienceNode.IsNull())
    {
      m_audience = Aws::Utils::Xml::DecodeEscapedXmlText(audienceNode.GetText());
      m_audienceHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::AssumeRoleWithWebIdentityResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
