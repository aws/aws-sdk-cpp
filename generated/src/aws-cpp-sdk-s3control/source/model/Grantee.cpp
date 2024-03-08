/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/Grantee.h>
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

Grantee::Grantee() : 
    m_granteeType(GranteeType::NOT_SET),
    m_granteeTypeHasBeenSet(false),
    m_granteeIdentifierHasBeenSet(false)
{
}

Grantee::Grantee(const XmlNode& xmlNode) : 
    m_granteeType(GranteeType::NOT_SET),
    m_granteeTypeHasBeenSet(false),
    m_granteeIdentifierHasBeenSet(false)
{
  *this = xmlNode;
}

Grantee& Grantee::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode granteeTypeNode = resultNode.FirstChild("GranteeType");
    if(!granteeTypeNode.IsNull())
    {
      m_granteeType = GranteeTypeMapper::GetGranteeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(granteeTypeNode.GetText()).c_str()).c_str());
      m_granteeTypeHasBeenSet = true;
    }
    XmlNode granteeIdentifierNode = resultNode.FirstChild("GranteeIdentifier");
    if(!granteeIdentifierNode.IsNull())
    {
      m_granteeIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(granteeIdentifierNode.GetText());
      m_granteeIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void Grantee::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_granteeTypeHasBeenSet)
  {
   XmlNode granteeTypeNode = parentNode.CreateChildElement("GranteeType");
   granteeTypeNode.SetText(GranteeTypeMapper::GetNameForGranteeType(m_granteeType));
  }

  if(m_granteeIdentifierHasBeenSet)
  {
   XmlNode granteeIdentifierNode = parentNode.CreateChildElement("GranteeIdentifier");
   granteeIdentifierNode.SetText(m_granteeIdentifier);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
