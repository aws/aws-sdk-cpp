/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListCallerAccessGrantsEntry.h>
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

ListCallerAccessGrantsEntry::ListCallerAccessGrantsEntry(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ListCallerAccessGrantsEntry& ListCallerAccessGrantsEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode permissionNode = resultNode.FirstChild("Permission");
    if(!permissionNode.IsNull())
    {
      m_permission = PermissionMapper::GetPermissionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionNode.GetText()).c_str()));
      m_permissionHasBeenSet = true;
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

void ListCallerAccessGrantsEntry::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_permissionHasBeenSet)
  {
   XmlNode permissionNode = parentNode.CreateChildElement("Permission");
   permissionNode.SetText(PermissionMapper::GetNameForPermission(m_permission));
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
