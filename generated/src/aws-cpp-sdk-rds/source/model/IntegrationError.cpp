/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/IntegrationError.h>
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

IntegrationError::IntegrationError() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

IntegrationError::IntegrationError(const XmlNode& xmlNode) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = xmlNode;
}

IntegrationError& IntegrationError::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode errorCodeNode = resultNode.FirstChild("ErrorCode");
    if(!errorCodeNode.IsNull())
    {
      m_errorCode = Aws::Utils::Xml::DecodeEscapedXmlText(errorCodeNode.GetText());
      m_errorCodeHasBeenSet = true;
    }
    XmlNode errorMessageNode = resultNode.FirstChild("ErrorMessage");
    if(!errorMessageNode.IsNull())
    {
      m_errorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(errorMessageNode.GetText());
      m_errorMessageHasBeenSet = true;
    }
  }

  return *this;
}

void IntegrationError::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }

  if(m_errorMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }

}

void IntegrationError::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorCodeHasBeenSet)
  {
      oStream << location << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }
  if(m_errorMessageHasBeenSet)
  {
      oStream << location << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
