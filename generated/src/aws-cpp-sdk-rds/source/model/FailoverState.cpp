/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/FailoverState.h>
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

FailoverState::FailoverState() : 
    m_status(FailoverStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fromDbClusterArnHasBeenSet(false),
    m_toDbClusterArnHasBeenSet(false),
    m_isDataLossAllowed(false),
    m_isDataLossAllowedHasBeenSet(false)
{
}

FailoverState::FailoverState(const XmlNode& xmlNode) : 
    m_status(FailoverStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fromDbClusterArnHasBeenSet(false),
    m_toDbClusterArnHasBeenSet(false),
    m_isDataLossAllowed(false),
    m_isDataLossAllowedHasBeenSet(false)
{
  *this = xmlNode;
}

FailoverState& FailoverState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = FailoverStatusMapper::GetFailoverStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode fromDbClusterArnNode = resultNode.FirstChild("FromDbClusterArn");
    if(!fromDbClusterArnNode.IsNull())
    {
      m_fromDbClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(fromDbClusterArnNode.GetText());
      m_fromDbClusterArnHasBeenSet = true;
    }
    XmlNode toDbClusterArnNode = resultNode.FirstChild("ToDbClusterArn");
    if(!toDbClusterArnNode.IsNull())
    {
      m_toDbClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(toDbClusterArnNode.GetText());
      m_toDbClusterArnHasBeenSet = true;
    }
    XmlNode isDataLossAllowedNode = resultNode.FirstChild("IsDataLossAllowed");
    if(!isDataLossAllowedNode.IsNull())
    {
      m_isDataLossAllowed = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDataLossAllowedNode.GetText()).c_str()).c_str());
      m_isDataLossAllowedHasBeenSet = true;
    }
  }

  return *this;
}

void FailoverState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << FailoverStatusMapper::GetNameForFailoverStatus(m_status) << "&";
  }

  if(m_fromDbClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromDbClusterArn=" << StringUtils::URLEncode(m_fromDbClusterArn.c_str()) << "&";
  }

  if(m_toDbClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ToDbClusterArn=" << StringUtils::URLEncode(m_toDbClusterArn.c_str()) << "&";
  }

  if(m_isDataLossAllowedHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDataLossAllowed=" << std::boolalpha << m_isDataLossAllowed << "&";
  }

}

void FailoverState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << FailoverStatusMapper::GetNameForFailoverStatus(m_status) << "&";
  }
  if(m_fromDbClusterArnHasBeenSet)
  {
      oStream << location << ".FromDbClusterArn=" << StringUtils::URLEncode(m_fromDbClusterArn.c_str()) << "&";
  }
  if(m_toDbClusterArnHasBeenSet)
  {
      oStream << location << ".ToDbClusterArn=" << StringUtils::URLEncode(m_toDbClusterArn.c_str()) << "&";
  }
  if(m_isDataLossAllowedHasBeenSet)
  {
      oStream << location << ".IsDataLossAllowed=" << std::boolalpha << m_isDataLossAllowed << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
