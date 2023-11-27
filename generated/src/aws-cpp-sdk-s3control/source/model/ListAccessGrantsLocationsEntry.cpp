/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessGrantsLocationsEntry.h>
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

ListAccessGrantsLocationsEntry::ListAccessGrantsLocationsEntry() : 
    m_createdAtHasBeenSet(false),
    m_accessGrantsLocationIdHasBeenSet(false),
    m_accessGrantsLocationArnHasBeenSet(false),
    m_locationScopeHasBeenSet(false),
    m_iAMRoleArnHasBeenSet(false)
{
}

ListAccessGrantsLocationsEntry::ListAccessGrantsLocationsEntry(const XmlNode& xmlNode) : 
    m_createdAtHasBeenSet(false),
    m_accessGrantsLocationIdHasBeenSet(false),
    m_accessGrantsLocationArnHasBeenSet(false),
    m_locationScopeHasBeenSet(false),
    m_iAMRoleArnHasBeenSet(false)
{
  *this = xmlNode;
}

ListAccessGrantsLocationsEntry& ListAccessGrantsLocationsEntry::operator =(const XmlNode& xmlNode)
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
    XmlNode accessGrantsLocationIdNode = resultNode.FirstChild("AccessGrantsLocationId");
    if(!accessGrantsLocationIdNode.IsNull())
    {
      m_accessGrantsLocationId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsLocationIdNode.GetText());
      m_accessGrantsLocationIdHasBeenSet = true;
    }
    XmlNode accessGrantsLocationArnNode = resultNode.FirstChild("AccessGrantsLocationArn");
    if(!accessGrantsLocationArnNode.IsNull())
    {
      m_accessGrantsLocationArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsLocationArnNode.GetText());
      m_accessGrantsLocationArnHasBeenSet = true;
    }
    XmlNode locationScopeNode = resultNode.FirstChild("LocationScope");
    if(!locationScopeNode.IsNull())
    {
      m_locationScope = Aws::Utils::Xml::DecodeEscapedXmlText(locationScopeNode.GetText());
      m_locationScopeHasBeenSet = true;
    }
    XmlNode iAMRoleArnNode = resultNode.FirstChild("IAMRoleArn");
    if(!iAMRoleArnNode.IsNull())
    {
      m_iAMRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iAMRoleArnNode.GetText());
      m_iAMRoleArnHasBeenSet = true;
    }
  }

  return *this;
}

void ListAccessGrantsLocationsEntry::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_createdAtHasBeenSet)
  {
   XmlNode createdAtNode = parentNode.CreateChildElement("CreatedAt");
   createdAtNode.SetText(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_accessGrantsLocationIdHasBeenSet)
  {
   XmlNode accessGrantsLocationIdNode = parentNode.CreateChildElement("AccessGrantsLocationId");
   accessGrantsLocationIdNode.SetText(m_accessGrantsLocationId);
  }

  if(m_accessGrantsLocationArnHasBeenSet)
  {
   XmlNode accessGrantsLocationArnNode = parentNode.CreateChildElement("AccessGrantsLocationArn");
   accessGrantsLocationArnNode.SetText(m_accessGrantsLocationArn);
  }

  if(m_locationScopeHasBeenSet)
  {
   XmlNode locationScopeNode = parentNode.CreateChildElement("LocationScope");
   locationScopeNode.SetText(m_locationScope);
  }

  if(m_iAMRoleArnHasBeenSet)
  {
   XmlNode iAMRoleArnNode = parentNode.CreateChildElement("IAMRoleArn");
   iAMRoleArnNode.SetText(m_iAMRoleArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
