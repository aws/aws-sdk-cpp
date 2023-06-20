/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CertificateAssociation.h>
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

CertificateAssociation::CertificateAssociation() : 
    m_customDomainNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
}

CertificateAssociation::CertificateAssociation(const XmlNode& xmlNode) : 
    m_customDomainNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
  *this = xmlNode;
}

CertificateAssociation& CertificateAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customDomainNameNode = resultNode.FirstChild("CustomDomainName");
    if(!customDomainNameNode.IsNull())
    {
      m_customDomainName = Aws::Utils::Xml::DecodeEscapedXmlText(customDomainNameNode.GetText());
      m_customDomainNameHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void CertificateAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customDomainNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomDomainName=" << StringUtils::URLEncode(m_customDomainName.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

}

void CertificateAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customDomainNameHasBeenSet)
  {
      oStream << location << ".CustomDomainName=" << StringUtils::URLEncode(m_customDomainName.c_str()) << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
