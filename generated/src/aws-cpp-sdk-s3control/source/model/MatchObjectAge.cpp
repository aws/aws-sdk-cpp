/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MatchObjectAge.h>
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

MatchObjectAge::MatchObjectAge() : 
    m_daysGreaterThan(0),
    m_daysGreaterThanHasBeenSet(false),
    m_daysLessThan(0),
    m_daysLessThanHasBeenSet(false)
{
}

MatchObjectAge::MatchObjectAge(const XmlNode& xmlNode) : 
    m_daysGreaterThan(0),
    m_daysGreaterThanHasBeenSet(false),
    m_daysLessThan(0),
    m_daysLessThanHasBeenSet(false)
{
  *this = xmlNode;
}

MatchObjectAge& MatchObjectAge::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode daysGreaterThanNode = resultNode.FirstChild("DaysGreaterThan");
    if(!daysGreaterThanNode.IsNull())
    {
      m_daysGreaterThan = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(daysGreaterThanNode.GetText()).c_str()).c_str());
      m_daysGreaterThanHasBeenSet = true;
    }
    XmlNode daysLessThanNode = resultNode.FirstChild("DaysLessThan");
    if(!daysLessThanNode.IsNull())
    {
      m_daysLessThan = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(daysLessThanNode.GetText()).c_str()).c_str());
      m_daysLessThanHasBeenSet = true;
    }
  }

  return *this;
}

void MatchObjectAge::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_daysGreaterThanHasBeenSet)
  {
   XmlNode daysGreaterThanNode = parentNode.CreateChildElement("DaysGreaterThan");
   ss << m_daysGreaterThan;
   daysGreaterThanNode.SetText(ss.str());
   ss.str("");
  }

  if(m_daysLessThanHasBeenSet)
  {
   XmlNode daysLessThanNode = parentNode.CreateChildElement("DaysLessThan");
   ss << m_daysLessThan;
   daysLessThanNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
