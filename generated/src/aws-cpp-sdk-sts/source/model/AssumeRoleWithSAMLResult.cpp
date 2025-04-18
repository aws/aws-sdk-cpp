﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleWithSAMLResult.h>
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

AssumeRoleWithSAMLResult::AssumeRoleWithSAMLResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssumeRoleWithSAMLResult& AssumeRoleWithSAMLResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssumeRoleWithSAMLResult"))
  {
    resultNode = rootNode.FirstChild("AssumeRoleWithSAMLResult");
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
    XmlNode subjectNode = resultNode.FirstChild("Subject");
    if(!subjectNode.IsNull())
    {
      m_subject = Aws::Utils::Xml::DecodeEscapedXmlText(subjectNode.GetText());
      m_subjectHasBeenSet = true;
    }
    XmlNode subjectTypeNode = resultNode.FirstChild("SubjectType");
    if(!subjectTypeNode.IsNull())
    {
      m_subjectType = Aws::Utils::Xml::DecodeEscapedXmlText(subjectTypeNode.GetText());
      m_subjectTypeHasBeenSet = true;
    }
    XmlNode issuerNode = resultNode.FirstChild("Issuer");
    if(!issuerNode.IsNull())
    {
      m_issuer = Aws::Utils::Xml::DecodeEscapedXmlText(issuerNode.GetText());
      m_issuerHasBeenSet = true;
    }
    XmlNode audienceNode = resultNode.FirstChild("Audience");
    if(!audienceNode.IsNull())
    {
      m_audience = Aws::Utils::Xml::DecodeEscapedXmlText(audienceNode.GetText());
      m_audienceHasBeenSet = true;
    }
    XmlNode nameQualifierNode = resultNode.FirstChild("NameQualifier");
    if(!nameQualifierNode.IsNull())
    {
      m_nameQualifier = Aws::Utils::Xml::DecodeEscapedXmlText(nameQualifierNode.GetText());
      m_nameQualifierHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::AssumeRoleWithSAMLResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
