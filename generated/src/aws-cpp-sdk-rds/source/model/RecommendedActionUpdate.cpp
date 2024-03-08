/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RecommendedActionUpdate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

RecommendedActionUpdate::RecommendedActionUpdate() : 
    m_actionIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

RecommendedActionUpdate::RecommendedActionUpdate(const XmlNode& xmlNode) : 
    m_actionIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

RecommendedActionUpdate& RecommendedActionUpdate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionIdNode = resultNode.FirstChild("ActionId");
    if(!actionIdNode.IsNull())
    {
      m_actionId = Aws::Utils::Xml::DecodeEscapedXmlText(actionIdNode.GetText());
      m_actionIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void RecommendedActionUpdate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void RecommendedActionUpdate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
