/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/LabelOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

LabelOptions::LabelOptions() : 
    m_timezoneHasBeenSet(false)
{
}

LabelOptions::LabelOptions(const XmlNode& xmlNode) : 
    m_timezoneHasBeenSet(false)
{
  *this = xmlNode;
}

LabelOptions& LabelOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timezoneNode = resultNode.FirstChild("Timezone");
    if(!timezoneNode.IsNull())
    {
      m_timezone = Aws::Utils::Xml::DecodeEscapedXmlText(timezoneNode.GetText());
      m_timezoneHasBeenSet = true;
    }
  }

  return *this;
}

void LabelOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timezoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }

}

void LabelOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timezoneHasBeenSet)
  {
      oStream << location << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
