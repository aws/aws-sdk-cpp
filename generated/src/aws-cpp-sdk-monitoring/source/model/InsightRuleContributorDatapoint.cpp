/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/InsightRuleContributorDatapoint.h>
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

InsightRuleContributorDatapoint::InsightRuleContributorDatapoint() : 
    m_timestampHasBeenSet(false),
    m_approximateValue(0.0),
    m_approximateValueHasBeenSet(false)
{
}

InsightRuleContributorDatapoint::InsightRuleContributorDatapoint(const XmlNode& xmlNode) : 
    m_timestampHasBeenSet(false),
    m_approximateValue(0.0),
    m_approximateValueHasBeenSet(false)
{
  *this = xmlNode;
}

InsightRuleContributorDatapoint& InsightRuleContributorDatapoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode approximateValueNode = resultNode.FirstChild("ApproximateValue");
    if(!approximateValueNode.IsNull())
    {
      m_approximateValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(approximateValueNode.GetText()).c_str()).c_str());
      m_approximateValueHasBeenSet = true;
    }
  }

  return *this;
}

void InsightRuleContributorDatapoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_approximateValueHasBeenSet)
  {
        oStream << location << index << locationValue << ".ApproximateValue=" << StringUtils::URLEncode(m_approximateValue) << "&";
  }

}

void InsightRuleContributorDatapoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_approximateValueHasBeenSet)
  {
        oStream << location << ".ApproximateValue=" << StringUtils::URLEncode(m_approximateValue) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
