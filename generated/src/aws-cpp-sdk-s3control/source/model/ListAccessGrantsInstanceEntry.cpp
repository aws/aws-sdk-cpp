/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessGrantsInstanceEntry.h>
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

ListAccessGrantsInstanceEntry::ListAccessGrantsInstanceEntry() : 
    m_accessGrantsInstanceIdHasBeenSet(false),
    m_accessGrantsInstanceArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_identityCenterArnHasBeenSet(false)
{
}

ListAccessGrantsInstanceEntry::ListAccessGrantsInstanceEntry(const XmlNode& xmlNode) : 
    m_accessGrantsInstanceIdHasBeenSet(false),
    m_accessGrantsInstanceArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_identityCenterArnHasBeenSet(false)
{
  *this = xmlNode;
}

ListAccessGrantsInstanceEntry& ListAccessGrantsInstanceEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessGrantsInstanceIdNode = resultNode.FirstChild("AccessGrantsInstanceId");
    if(!accessGrantsInstanceIdNode.IsNull())
    {
      m_accessGrantsInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsInstanceIdNode.GetText());
      m_accessGrantsInstanceIdHasBeenSet = true;
    }
    XmlNode accessGrantsInstanceArnNode = resultNode.FirstChild("AccessGrantsInstanceArn");
    if(!accessGrantsInstanceArnNode.IsNull())
    {
      m_accessGrantsInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsInstanceArnNode.GetText());
      m_accessGrantsInstanceArnHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode identityCenterArnNode = resultNode.FirstChild("IdentityCenterArn");
    if(!identityCenterArnNode.IsNull())
    {
      m_identityCenterArn = Aws::Utils::Xml::DecodeEscapedXmlText(identityCenterArnNode.GetText());
      m_identityCenterArnHasBeenSet = true;
    }
  }

  return *this;
}

void ListAccessGrantsInstanceEntry::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_accessGrantsInstanceIdHasBeenSet)
  {
   XmlNode accessGrantsInstanceIdNode = parentNode.CreateChildElement("AccessGrantsInstanceId");
   accessGrantsInstanceIdNode.SetText(m_accessGrantsInstanceId);
  }

  if(m_accessGrantsInstanceArnHasBeenSet)
  {
   XmlNode accessGrantsInstanceArnNode = parentNode.CreateChildElement("AccessGrantsInstanceArn");
   accessGrantsInstanceArnNode.SetText(m_accessGrantsInstanceArn);
  }

  if(m_createdAtHasBeenSet)
  {
   XmlNode createdAtNode = parentNode.CreateChildElement("CreatedAt");
   createdAtNode.SetText(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_identityCenterArnHasBeenSet)
  {
   XmlNode identityCenterArnNode = parentNode.CreateChildElement("IdentityCenterArn");
   identityCenterArnNode.SetText(m_identityCenterArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
