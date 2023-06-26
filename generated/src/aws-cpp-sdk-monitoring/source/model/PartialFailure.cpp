/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PartialFailure.h>
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

PartialFailure::PartialFailure() : 
    m_failureResourceHasBeenSet(false),
    m_exceptionTypeHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureDescriptionHasBeenSet(false)
{
}

PartialFailure::PartialFailure(const XmlNode& xmlNode) : 
    m_failureResourceHasBeenSet(false),
    m_exceptionTypeHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureDescriptionHasBeenSet(false)
{
  *this = xmlNode;
}

PartialFailure& PartialFailure::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode failureResourceNode = resultNode.FirstChild("FailureResource");
    if(!failureResourceNode.IsNull())
    {
      m_failureResource = Aws::Utils::Xml::DecodeEscapedXmlText(failureResourceNode.GetText());
      m_failureResourceHasBeenSet = true;
    }
    XmlNode exceptionTypeNode = resultNode.FirstChild("ExceptionType");
    if(!exceptionTypeNode.IsNull())
    {
      m_exceptionType = Aws::Utils::Xml::DecodeEscapedXmlText(exceptionTypeNode.GetText());
      m_exceptionTypeHasBeenSet = true;
    }
    XmlNode failureCodeNode = resultNode.FirstChild("FailureCode");
    if(!failureCodeNode.IsNull())
    {
      m_failureCode = Aws::Utils::Xml::DecodeEscapedXmlText(failureCodeNode.GetText());
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureDescriptionNode = resultNode.FirstChild("FailureDescription");
    if(!failureDescriptionNode.IsNull())
    {
      m_failureDescription = Aws::Utils::Xml::DecodeEscapedXmlText(failureDescriptionNode.GetText());
      m_failureDescriptionHasBeenSet = true;
    }
  }

  return *this;
}

void PartialFailure::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_failureResourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureResource=" << StringUtils::URLEncode(m_failureResource.c_str()) << "&";
  }

  if(m_exceptionTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExceptionType=" << StringUtils::URLEncode(m_exceptionType.c_str()) << "&";
  }

  if(m_failureCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }

  if(m_failureDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureDescription=" << StringUtils::URLEncode(m_failureDescription.c_str()) << "&";
  }

}

void PartialFailure::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_failureResourceHasBeenSet)
  {
      oStream << location << ".FailureResource=" << StringUtils::URLEncode(m_failureResource.c_str()) << "&";
  }
  if(m_exceptionTypeHasBeenSet)
  {
      oStream << location << ".ExceptionType=" << StringUtils::URLEncode(m_exceptionType.c_str()) << "&";
  }
  if(m_failureCodeHasBeenSet)
  {
      oStream << location << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }
  if(m_failureDescriptionHasBeenSet)
  {
      oStream << location << ".FailureDescription=" << StringUtils::URLEncode(m_failureDescription.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
