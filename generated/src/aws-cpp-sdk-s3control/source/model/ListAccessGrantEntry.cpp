/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessGrantEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

ListAccessGrantEntry::ListAccessGrantEntry() : 
    m_createdAtHasBeenSet(false),
    m_accessGrantIdHasBeenSet(false),
    m_accessGrantArnHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_accessGrantsLocationIdHasBeenSet(false),
    m_accessGrantsLocationConfigurationHasBeenSet(false),
    m_grantScopeHasBeenSet(false),
    m_applicationArnHasBeenSet(false)
{
}

ListAccessGrantEntry::ListAccessGrantEntry(const XmlNode& xmlNode) : 
    m_createdAtHasBeenSet(false),
    m_accessGrantIdHasBeenSet(false),
    m_accessGrantArnHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_accessGrantsLocationIdHasBeenSet(false),
    m_accessGrantsLocationConfigurationHasBeenSet(false),
    m_grantScopeHasBeenSet(false),
    m_applicationArnHasBeenSet(false)
{
  *this = xmlNode;
}

ListAccessGrantEntry& ListAccessGrantEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

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
    XmlNode permissionNode = resultNode.FirstChild("Permission");
    if(!permissionNode.IsNull())
    {
      m_permission = PermissionMapper::GetPermissionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionNode.GetText()).c_str()).c_str());
      m_permissionHasBeenSet = true;
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
    XmlNode grantScopeNode = resultNode.FirstChild("GrantScope");
    if(!grantScopeNode.IsNull())
    {
      m_grantScope = Aws::Utils::Xml::DecodeEscapedXmlText(grantScopeNode.GetText());
      m_grantScopeHasBeenSet = true;
    }
    XmlNode applicationArnNode = resultNode.FirstChild("ApplicationArn");
    if(!applicationArnNode.IsNull())
    {
      m_applicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(applicationArnNode.GetText());
      m_applicationArnHasBeenSet = true;
    }
  }

  return *this;
}

void ListAccessGrantEntry::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_createdAtHasBeenSet)
  {
   XmlNode createdAtNode = parentNode.CreateChildElement("CreatedAt");
   createdAtNode.SetText(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_accessGrantIdHasBeenSet)
  {
   XmlNode accessGrantIdNode = parentNode.CreateChildElement("AccessGrantId");
   accessGrantIdNode.SetText(m_accessGrantId);
  }

  if(m_accessGrantArnHasBeenSet)
  {
   XmlNode accessGrantArnNode = parentNode.CreateChildElement("AccessGrantArn");
   accessGrantArnNode.SetText(m_accessGrantArn);
  }

  if(m_granteeHasBeenSet)
  {
   XmlNode granteeNode = parentNode.CreateChildElement("Grantee");
   m_grantee.AddToNode(granteeNode);
  }

  if(m_permissionHasBeenSet)
  {
   XmlNode permissionNode = parentNode.CreateChildElement("Permission");
   permissionNode.SetText(PermissionMapper::GetNameForPermission(m_permission));
  }

  if(m_accessGrantsLocationIdHasBeenSet)
  {
   XmlNode accessGrantsLocationIdNode = parentNode.CreateChildElement("AccessGrantsLocationId");
   accessGrantsLocationIdNode.SetText(m_accessGrantsLocationId);
  }

  if(m_accessGrantsLocationConfigurationHasBeenSet)
  {
   XmlNode accessGrantsLocationConfigurationNode = parentNode.CreateChildElement("AccessGrantsLocationConfiguration");
   m_accessGrantsLocationConfiguration.AddToNode(accessGrantsLocationConfigurationNode);
  }

  if(m_grantScopeHasBeenSet)
  {
   XmlNode grantScopeNode = parentNode.CreateChildElement("GrantScope");
   grantScopeNode.SetText(m_grantScope);
  }

  if(m_applicationArnHasBeenSet)
  {
   XmlNode applicationArnNode = parentNode.CreateChildElement("ApplicationArn");
   applicationArnNode.SetText(m_applicationArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
