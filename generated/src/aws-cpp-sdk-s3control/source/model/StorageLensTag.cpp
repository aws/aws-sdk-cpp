/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/StorageLensTag.h>
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

StorageLensTag::StorageLensTag() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

StorageLensTag::StorageLensTag(const XmlNode& xmlNode) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLensTag& StorageLensTag::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensTag::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_keyHasBeenSet)
  {
   XmlNode keyNode = parentNode.CreateChildElement("Key");
   keyNode.SetText(m_key);
  }

  if(m_valueHasBeenSet)
  {
   XmlNode valueNode = parentNode.CreateChildElement("Value");
   valueNode.SetText(m_value);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
