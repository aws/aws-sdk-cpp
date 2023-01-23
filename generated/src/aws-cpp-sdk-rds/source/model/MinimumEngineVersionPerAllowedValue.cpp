/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/MinimumEngineVersionPerAllowedValue.h>
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

MinimumEngineVersionPerAllowedValue::MinimumEngineVersionPerAllowedValue() : 
    m_allowedValueHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false)
{
}

MinimumEngineVersionPerAllowedValue::MinimumEngineVersionPerAllowedValue(const XmlNode& xmlNode) : 
    m_allowedValueHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false)
{
  *this = xmlNode;
}

MinimumEngineVersionPerAllowedValue& MinimumEngineVersionPerAllowedValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allowedValueNode = resultNode.FirstChild("AllowedValue");
    if(!allowedValueNode.IsNull())
    {
      m_allowedValue = Aws::Utils::Xml::DecodeEscapedXmlText(allowedValueNode.GetText());
      m_allowedValueHasBeenSet = true;
    }
    XmlNode minimumEngineVersionNode = resultNode.FirstChild("MinimumEngineVersion");
    if(!minimumEngineVersionNode.IsNull())
    {
      m_minimumEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(minimumEngineVersionNode.GetText());
      m_minimumEngineVersionHasBeenSet = true;
    }
  }

  return *this;
}

void MinimumEngineVersionPerAllowedValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowedValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedValue=" << StringUtils::URLEncode(m_allowedValue.c_str()) << "&";
  }

  if(m_minimumEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumEngineVersion=" << StringUtils::URLEncode(m_minimumEngineVersion.c_str()) << "&";
  }

}

void MinimumEngineVersionPerAllowedValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowedValueHasBeenSet)
  {
      oStream << location << ".AllowedValue=" << StringUtils::URLEncode(m_allowedValue.c_str()) << "&";
  }
  if(m_minimumEngineVersionHasBeenSet)
  {
      oStream << location << ".MinimumEngineVersion=" << StringUtils::URLEncode(m_minimumEngineVersion.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
