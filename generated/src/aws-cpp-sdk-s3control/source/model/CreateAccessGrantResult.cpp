/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessGrantResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessGrantResult::CreateAccessGrantResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateAccessGrantResult& CreateAccessGrantResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode accessGrantIdNode = resultNode.FirstChild("AccessGrantId");
    if(!accessGrantIdNode.IsNull())
    {
      m_accessGrantId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantIdNode.GetText());
      m_accessGrantIdHasBeenSet = true;
    }
    XmlNode accessGrantArnNode = resultNode.FirstChild("AccessGrantArn");
    if(!accessGrantArnNode.IsNull())
    {
      m_accessGrantArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantArnNode.GetText());
      m_accessGrantArnHasBeenSet = true;
    }
    XmlNode granteeNode = resultNode.FirstChild("Grantee");
    if(!granteeNode.IsNull())
    {
      m_grantee = granteeNode;
      m_granteeHasBeenSet = true;
    }
    XmlNode accessGrantsLocationIdNode = resultNode.FirstChild("AccessGrantsLocationId");
    if(!accessGrantsLocationIdNode.IsNull())
    {
      m_accessGrantsLocationId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsLocationIdNode.GetText());
      m_accessGrantsLocationIdHasBeenSet = true;
    }
    XmlNode accessGrantsLocationConfigurationNode = resultNode.FirstChild("AccessGrantsLocationConfiguration");
    if(!accessGrantsLocationConfigurationNode.IsNull())
    {
      m_accessGrantsLocationConfiguration = accessGrantsLocationConfigurationNode;
      m_accessGrantsLocationConfigurationHasBeenSet = true;
    }
    XmlNode permissionNode = resultNode.FirstChild("Permission");
    if(!permissionNode.IsNull())
    {
      m_permission = PermissionMapper::GetPermissionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionNode.GetText()).c_str()));
      m_permissionHasBeenSet = true;
    }
    XmlNode applicationArnNode = resultNode.FirstChild("ApplicationArn");
    if(!applicationArnNode.IsNull())
    {
      m_applicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(applicationArnNode.GetText());
      m_applicationArnHasBeenSet = true;
    }
    XmlNode grantScopeNode = resultNode.FirstChild("GrantScope");
    if(!grantScopeNode.IsNull())
    {
      m_grantScope = Aws::Utils::Xml::DecodeEscapedXmlText(grantScopeNode.GetText());
      m_grantScopeHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  const auto& hostIdIter = headers.find("x-amz-id-2");
  if(hostIdIter != headers.end())
  {
    m_hostId = hostIdIter->second;
    m_hostIdHasBeenSet = true;
  }

  return *this;
}
