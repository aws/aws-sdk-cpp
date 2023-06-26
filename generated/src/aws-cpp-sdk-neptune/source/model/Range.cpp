/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/Range.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

Range::Range() : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false),
    m_step(0),
    m_stepHasBeenSet(false)
{
}

Range::Range(const XmlNode& xmlNode) : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false),
    m_step(0),
    m_stepHasBeenSet(false)
{
  *this = xmlNode;
}

Range& Range::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fromNode = resultNode.FirstChild("From");
    if(!fromNode.IsNull())
    {
      m_from = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fromNode.GetText()).c_str()).c_str());
      m_fromHasBeenSet = true;
    }
    XmlNode toNode = resultNode.FirstChild("To");
    if(!toNode.IsNull())
    {
      m_to = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(toNode.GetText()).c_str()).c_str());
      m_toHasBeenSet = true;
    }
    XmlNode stepNode = resultNode.FirstChild("Step");
    if(!stepNode.IsNull())
    {
      m_step = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stepNode.GetText()).c_str()).c_str());
      m_stepHasBeenSet = true;
    }
  }

  return *this;
}

void Range::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fromHasBeenSet)
  {
      oStream << location << index << locationValue << ".From=" << m_from << "&";
  }

  if(m_toHasBeenSet)
  {
      oStream << location << index << locationValue << ".To=" << m_to << "&";
  }

  if(m_stepHasBeenSet)
  {
      oStream << location << index << locationValue << ".Step=" << m_step << "&";
  }

}

void Range::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fromHasBeenSet)
  {
      oStream << location << ".From=" << m_from << "&";
  }
  if(m_toHasBeenSet)
  {
      oStream << location << ".To=" << m_to << "&";
  }
  if(m_stepHasBeenSet)
  {
      oStream << location << ".Step=" << m_step << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
