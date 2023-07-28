/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/ProvidedContext.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace STS
{
namespace Model
{

ProvidedContext::ProvidedContext() : 
    m_providerArnHasBeenSet(false),
    m_contextAssertionHasBeenSet(false)
{
}

ProvidedContext::ProvidedContext(const XmlNode& xmlNode) : 
    m_providerArnHasBeenSet(false),
    m_contextAssertionHasBeenSet(false)
{
  *this = xmlNode;
}

ProvidedContext& ProvidedContext::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode providerArnNode = resultNode.FirstChild("ProviderArn");
    if(!providerArnNode.IsNull())
    {
      m_providerArn = Aws::Utils::Xml::DecodeEscapedXmlText(providerArnNode.GetText());
      m_providerArnHasBeenSet = true;
    }
    XmlNode contextAssertionNode = resultNode.FirstChild("ContextAssertion");
    if(!contextAssertionNode.IsNull())
    {
      m_contextAssertion = Aws::Utils::Xml::DecodeEscapedXmlText(contextAssertionNode.GetText());
      m_contextAssertionHasBeenSet = true;
    }
  }

  return *this;
}

void ProvidedContext::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_providerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProviderArn=" << StringUtils::URLEncode(m_providerArn.c_str()) << "&";
  }

  if(m_contextAssertionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContextAssertion=" << StringUtils::URLEncode(m_contextAssertion.c_str()) << "&";
  }

}

void ProvidedContext::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_providerArnHasBeenSet)
  {
      oStream << location << ".ProviderArn=" << StringUtils::URLEncode(m_providerArn.c_str()) << "&";
  }
  if(m_contextAssertionHasBeenSet)
  {
      oStream << location << ".ContextAssertion=" << StringUtils::URLEncode(m_contextAssertion.c_str()) << "&";
  }
}

} // namespace Model
} // namespace STS
} // namespace Aws
