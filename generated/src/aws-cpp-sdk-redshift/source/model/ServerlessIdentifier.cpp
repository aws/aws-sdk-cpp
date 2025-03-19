/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ServerlessIdentifier.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ServerlessIdentifier::ServerlessIdentifier(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ServerlessIdentifier& ServerlessIdentifier::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode namespaceIdentifierNode = resultNode.FirstChild("NamespaceIdentifier");
    if(!namespaceIdentifierNode.IsNull())
    {
      m_namespaceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceIdentifierNode.GetText());
      m_namespaceIdentifierHasBeenSet = true;
    }
    XmlNode workgroupIdentifierNode = resultNode.FirstChild("WorkgroupIdentifier");
    if(!workgroupIdentifierNode.IsNull())
    {
      m_workgroupIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(workgroupIdentifierNode.GetText());
      m_workgroupIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void ServerlessIdentifier::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_namespaceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".NamespaceIdentifier=" << StringUtils::URLEncode(m_namespaceIdentifier.c_str()) << "&";
  }

  if(m_workgroupIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".WorkgroupIdentifier=" << StringUtils::URLEncode(m_workgroupIdentifier.c_str()) << "&";
  }

}

void ServerlessIdentifier::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_namespaceIdentifierHasBeenSet)
  {
      oStream << location << ".NamespaceIdentifier=" << StringUtils::URLEncode(m_namespaceIdentifier.c_str()) << "&";
  }
  if(m_workgroupIdentifierHasBeenSet)
  {
      oStream << location << ".WorkgroupIdentifier=" << StringUtils::URLEncode(m_workgroupIdentifier.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
