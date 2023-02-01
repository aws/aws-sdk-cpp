/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/StatusReport.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

StatusReport::StatusReport() : 
    m_statusHasBeenSet(false),
    m_checkedTimeHasBeenSet(false)
{
}

StatusReport::StatusReport(const XmlNode& xmlNode) : 
    m_statusHasBeenSet(false),
    m_checkedTimeHasBeenSet(false)
{
  *this = xmlNode;
}

StatusReport& StatusReport::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode checkedTimeNode = resultNode.FirstChild("CheckedTime");
    if(!checkedTimeNode.IsNull())
    {
      m_checkedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checkedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_checkedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void StatusReport::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_checkedTimeHasBeenSet)
  {
   XmlNode checkedTimeNode = parentNode.CreateChildElement("CheckedTime");
   checkedTimeNode.SetText(m_checkedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
