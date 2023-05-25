/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ResizeInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ResizeInfo::ResizeInfo() : 
    m_resizeTypeHasBeenSet(false),
    m_allowCancelResize(false),
    m_allowCancelResizeHasBeenSet(false)
{
}

ResizeInfo::ResizeInfo(const XmlNode& xmlNode) : 
    m_resizeTypeHasBeenSet(false),
    m_allowCancelResize(false),
    m_allowCancelResizeHasBeenSet(false)
{
  *this = xmlNode;
}

ResizeInfo& ResizeInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resizeTypeNode = resultNode.FirstChild("ResizeType");
    if(!resizeTypeNode.IsNull())
    {
      m_resizeType = Aws::Utils::Xml::DecodeEscapedXmlText(resizeTypeNode.GetText());
      m_resizeTypeHasBeenSet = true;
    }
    XmlNode allowCancelResizeNode = resultNode.FirstChild("AllowCancelResize");
    if(!allowCancelResizeNode.IsNull())
    {
      m_allowCancelResize = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowCancelResizeNode.GetText()).c_str()).c_str());
      m_allowCancelResizeHasBeenSet = true;
    }
  }

  return *this;
}

void ResizeInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resizeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResizeType=" << StringUtils::URLEncode(m_resizeType.c_str()) << "&";
  }

  if(m_allowCancelResizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowCancelResize=" << std::boolalpha << m_allowCancelResize << "&";
  }

}

void ResizeInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resizeTypeHasBeenSet)
  {
      oStream << location << ".ResizeType=" << StringUtils::URLEncode(m_resizeType.c_str()) << "&";
  }
  if(m_allowCancelResizeHasBeenSet)
  {
      oStream << location << ".AllowCancelResize=" << std::boolalpha << m_allowCancelResize << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
