/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/Association.h>
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

Association::Association() : 
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainCertificateExpiryDateHasBeenSet(false),
    m_certificateAssociationsHasBeenSet(false)
{
}

Association::Association(const XmlNode& xmlNode) : 
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainCertificateExpiryDateHasBeenSet(false),
    m_certificateAssociationsHasBeenSet(false)
{
  *this = xmlNode;
}

Association& Association::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customDomainCertificateArnNode = resultNode.FirstChild("CustomDomainCertificateArn");
    if(!customDomainCertificateArnNode.IsNull())
    {
      m_customDomainCertificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(customDomainCertificateArnNode.GetText());
      m_customDomainCertificateArnHasBeenSet = true;
    }
    XmlNode customDomainCertificateExpiryDateNode = resultNode.FirstChild("CustomDomainCertificateExpiryDate");
    if(!customDomainCertificateExpiryDateNode.IsNull())
    {
      m_customDomainCertificateExpiryDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(customDomainCertificateExpiryDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_customDomainCertificateExpiryDateHasBeenSet = true;
    }
    XmlNode certificateAssociationsNode = resultNode.FirstChild("CertificateAssociations");
    if(!certificateAssociationsNode.IsNull())
    {
      XmlNode certificateAssociationsMember = certificateAssociationsNode.FirstChild("CertificateAssociation");
      while(!certificateAssociationsMember.IsNull())
      {
        m_certificateAssociations.push_back(certificateAssociationsMember);
        certificateAssociationsMember = certificateAssociationsMember.NextNode("CertificateAssociation");
      }

      m_certificateAssociationsHasBeenSet = true;
    }
  }

  return *this;
}

void Association::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customDomainCertificateArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomDomainCertificateArn=" << StringUtils::URLEncode(m_customDomainCertificateArn.c_str()) << "&";
  }

  if(m_customDomainCertificateExpiryDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomDomainCertificateExpiryDate=" << StringUtils::URLEncode(m_customDomainCertificateExpiryDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_certificateAssociationsHasBeenSet)
  {
      unsigned certificateAssociationsIdx = 1;
      for(auto& item : m_certificateAssociations)
      {
        Aws::StringStream certificateAssociationsSs;
        certificateAssociationsSs << location << index << locationValue << ".CertificateAssociation." << certificateAssociationsIdx++;
        item.OutputToStream(oStream, certificateAssociationsSs.str().c_str());
      }
  }

}

void Association::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customDomainCertificateArnHasBeenSet)
  {
      oStream << location << ".CustomDomainCertificateArn=" << StringUtils::URLEncode(m_customDomainCertificateArn.c_str()) << "&";
  }
  if(m_customDomainCertificateExpiryDateHasBeenSet)
  {
      oStream << location << ".CustomDomainCertificateExpiryDate=" << StringUtils::URLEncode(m_customDomainCertificateExpiryDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_certificateAssociationsHasBeenSet)
  {
      unsigned certificateAssociationsIdx = 1;
      for(auto& item : m_certificateAssociations)
      {
        Aws::StringStream certificateAssociationsSs;
        certificateAssociationsSs << location <<  ".CertificateAssociation." << certificateAssociationsIdx++;
        item.OutputToStream(oStream, certificateAssociationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
