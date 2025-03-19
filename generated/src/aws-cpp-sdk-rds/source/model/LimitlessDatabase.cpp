/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/LimitlessDatabase.h>
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

LimitlessDatabase::LimitlessDatabase(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LimitlessDatabase& LimitlessDatabase::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = LimitlessDatabaseStatusMapper::GetLimitlessDatabaseStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode minRequiredACUNode = resultNode.FirstChild("MinRequiredACU");
    if(!minRequiredACUNode.IsNull())
    {
      m_minRequiredACU = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minRequiredACUNode.GetText()).c_str()).c_str());
      m_minRequiredACUHasBeenSet = true;
    }
  }

  return *this;
}

void LimitlessDatabase::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(LimitlessDatabaseStatusMapper::GetNameForLimitlessDatabaseStatus(m_status)) << "&";
  }

  if(m_minRequiredACUHasBeenSet)
  {
        oStream << location << index << locationValue << ".MinRequiredACU=" << StringUtils::URLEncode(m_minRequiredACU) << "&";
  }

}

void LimitlessDatabase::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(LimitlessDatabaseStatusMapper::GetNameForLimitlessDatabaseStatus(m_status)) << "&";
  }
  if(m_minRequiredACUHasBeenSet)
  {
      oStream << location << ".MinRequiredACU=" << StringUtils::URLEncode(m_minRequiredACU) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
