/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetAccessGrantResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessGrantResult::GetAccessGrantResult() : 
    m_permission(Permission::NOT_SET)
{
}

GetAccessGrantResult::GetAccessGrantResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_permission(Permission::NOT_SET)
{
  *this = result;
}

GetAccessGrantResult& GetAccessGrantResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode accessGrantIdNode = resultNode.FirstChild("AccessGrantId");
    if(!accessGrantIdNode.IsNull())
    {
      m_accessGrantId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantIdNode.GetText());
    }
    XmlNode accessGrantArnNode = resultNode.FirstChild("AccessGrantArn");
    if(!accessGrantArnNode.IsNull())
    {
      m_accessGrantArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantArnNode.GetText());
    }
    XmlNode granteeNode = resultNode.FirstChild("Grantee");
    if(!granteeNode.IsNull())
    {
      m_grantee = granteeNode;
    }
    XmlNode permissionNode = resultNode.FirstChild("Permission");
    if(!permissionNode.IsNull())
    {
      m_permission = PermissionMapper::GetPermissionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionNode.GetText()).c_str()).c_str());
    }
    XmlNode accessGrantsLocationIdNode = resultNode.FirstChild("AccessGrantsLocationId");
    if(!accessGrantsLocationIdNode.IsNull())
    {
      m_accessGrantsLocationId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsLocationIdNode.GetText());
    }
    XmlNode accessGrantsLocationConfigurationNode = resultNode.FirstChild("AccessGrantsLocationConfiguration");
    if(!accessGrantsLocationConfigurationNode.IsNull())
    {
      m_accessGrantsLocationConfiguration = accessGrantsLocationConfigurationNode;
    }
    XmlNode grantScopeNode = resultNode.FirstChild("GrantScope");
    if(!grantScopeNode.IsNull())
    {
      m_grantScope = Aws::Utils::Xml::DecodeEscapedXmlText(grantScopeNode.GetText());
    }
    XmlNode applicationArnNode = resultNode.FirstChild("ApplicationArn");
    if(!applicationArnNode.IsNull())
    {
      m_applicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(applicationArnNode.GetText());
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
