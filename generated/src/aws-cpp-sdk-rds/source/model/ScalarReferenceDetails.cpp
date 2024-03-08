/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ScalarReferenceDetails.h>
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

ScalarReferenceDetails::ScalarReferenceDetails() : 
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

ScalarReferenceDetails::ScalarReferenceDetails(const XmlNode& xmlNode) : 
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

ScalarReferenceDetails& ScalarReferenceDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText()).c_str()).c_str());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void ScalarReferenceDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valueHasBeenSet)
  {
        oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value) << "&";
  }

}

void ScalarReferenceDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valueHasBeenSet)
  {
        oStream << location << ".Value=" << StringUtils::URLEncode(m_value) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
