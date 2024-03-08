/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MatchObjectSize.h>
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

MatchObjectSize::MatchObjectSize() : 
    m_bytesGreaterThan(0),
    m_bytesGreaterThanHasBeenSet(false),
    m_bytesLessThan(0),
    m_bytesLessThanHasBeenSet(false)
{
}

MatchObjectSize::MatchObjectSize(const XmlNode& xmlNode) : 
    m_bytesGreaterThan(0),
    m_bytesGreaterThanHasBeenSet(false),
    m_bytesLessThan(0),
    m_bytesLessThanHasBeenSet(false)
{
  *this = xmlNode;
}

MatchObjectSize& MatchObjectSize::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bytesGreaterThanNode = resultNode.FirstChild("BytesGreaterThan");
    if(!bytesGreaterThanNode.IsNull())
    {
      m_bytesGreaterThan = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bytesGreaterThanNode.GetText()).c_str()).c_str());
      m_bytesGreaterThanHasBeenSet = true;
    }
    XmlNode bytesLessThanNode = resultNode.FirstChild("BytesLessThan");
    if(!bytesLessThanNode.IsNull())
    {
      m_bytesLessThan = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bytesLessThanNode.GetText()).c_str()).c_str());
      m_bytesLessThanHasBeenSet = true;
    }
  }

  return *this;
}

void MatchObjectSize::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bytesGreaterThanHasBeenSet)
  {
   XmlNode bytesGreaterThanNode = parentNode.CreateChildElement("BytesGreaterThan");
   ss << m_bytesGreaterThan;
   bytesGreaterThanNode.SetText(ss.str());
   ss.str("");
  }

  if(m_bytesLessThanHasBeenSet)
  {
   XmlNode bytesLessThanNode = parentNode.CreateChildElement("BytesLessThan");
   ss << m_bytesLessThan;
   bytesLessThanNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
