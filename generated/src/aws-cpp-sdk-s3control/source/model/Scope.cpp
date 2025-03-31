/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/Scope.h>
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

Scope::Scope(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Scope& Scope::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode prefixesNode = resultNode.FirstChild("Prefixes");
    if(!prefixesNode.IsNull())
    {
      XmlNode prefixesMember = prefixesNode.FirstChild("Prefix");
      m_prefixesHasBeenSet = !prefixesMember.IsNull();
      while(!prefixesMember.IsNull())
      {
        m_prefixes.push_back(prefixesMember.GetText());
        prefixesMember = prefixesMember.NextNode("Prefix");
      }

      m_prefixesHasBeenSet = true;
    }
    XmlNode permissionsNode = resultNode.FirstChild("Permissions");
    if(!permissionsNode.IsNull())
    {
      XmlNode permissionsMember = permissionsNode.FirstChild("Permission");
      m_permissionsHasBeenSet = !permissionsMember.IsNull();
      while(!permissionsMember.IsNull())
      {
        m_permissions.push_back(ScopePermissionMapper::GetScopePermissionForName(StringUtils::Trim(permissionsMember.GetText().c_str())));
        permissionsMember = permissionsMember.NextNode("Permission");
      }

      m_permissionsHasBeenSet = true;
    }
  }

  return *this;
}

void Scope::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_prefixesHasBeenSet)
  {
   XmlNode prefixesParentNode = parentNode.CreateChildElement("Prefixes");
   for(const auto& item : m_prefixes)
   {
     XmlNode prefixesNode = prefixesParentNode.CreateChildElement("Prefix");
     prefixesNode.SetText(item);
   }
  }

  if(m_permissionsHasBeenSet)
  {
   XmlNode permissionsParentNode = parentNode.CreateChildElement("Permissions");
   for(const auto& item : m_permissions)
   {
     XmlNode permissionsNode = permissionsParentNode.CreateChildElement("Permission");
     permissionsNode.SetText(ScopePermissionMapper::GetNameForScopePermission(item));
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
