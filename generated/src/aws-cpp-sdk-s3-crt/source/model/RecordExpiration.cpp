/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/RecordExpiration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

RecordExpiration::RecordExpiration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RecordExpiration& RecordExpiration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if(!expirationNode.IsNull())
    {
      m_expiration = ExpirationStateMapper::GetExpirationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationNode.GetText()).c_str()));
      m_expirationHasBeenSet = true;
    }
    XmlNode daysNode = resultNode.FirstChild("Days");
    if(!daysNode.IsNull())
    {
      m_days = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(daysNode.GetText()).c_str()).c_str());
      m_daysHasBeenSet = true;
    }
  }

  return *this;
}

void RecordExpiration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_expirationHasBeenSet)
  {
   XmlNode expirationNode = parentNode.CreateChildElement("Expiration");
   expirationNode.SetText(ExpirationStateMapper::GetNameForExpirationState(m_expiration));
  }

  if(m_daysHasBeenSet)
  {
   XmlNode daysNode = parentNode.CreateChildElement("Days");
   ss << m_days;
   daysNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
