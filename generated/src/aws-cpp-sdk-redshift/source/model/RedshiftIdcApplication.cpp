/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RedshiftIdcApplication.h>
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

RedshiftIdcApplication::RedshiftIdcApplication(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RedshiftIdcApplication& RedshiftIdcApplication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idcInstanceArnNode = resultNode.FirstChild("IdcInstanceArn");
    if(!idcInstanceArnNode.IsNull())
    {
      m_idcInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(idcInstanceArnNode.GetText());
      m_idcInstanceArnHasBeenSet = true;
    }
    XmlNode redshiftIdcApplicationNameNode = resultNode.FirstChild("RedshiftIdcApplicationName");
    if(!redshiftIdcApplicationNameNode.IsNull())
    {
      m_redshiftIdcApplicationName = Aws::Utils::Xml::DecodeEscapedXmlText(redshiftIdcApplicationNameNode.GetText());
      m_redshiftIdcApplicationNameHasBeenSet = true;
    }
    XmlNode redshiftIdcApplicationArnNode = resultNode.FirstChild("RedshiftIdcApplicationArn");
    if(!redshiftIdcApplicationArnNode.IsNull())
    {
      m_redshiftIdcApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(redshiftIdcApplicationArnNode.GetText());
      m_redshiftIdcApplicationArnHasBeenSet = true;
    }
    XmlNode identityNamespaceNode = resultNode.FirstChild("IdentityNamespace");
    if(!identityNamespaceNode.IsNull())
    {
      m_identityNamespace = Aws::Utils::Xml::DecodeEscapedXmlText(identityNamespaceNode.GetText());
      m_identityNamespaceHasBeenSet = true;
    }
    XmlNode idcDisplayNameNode = resultNode.FirstChild("IdcDisplayName");
    if(!idcDisplayNameNode.IsNull())
    {
      m_idcDisplayName = Aws::Utils::Xml::DecodeEscapedXmlText(idcDisplayNameNode.GetText());
      m_idcDisplayNameHasBeenSet = true;
    }
    XmlNode iamRoleArnNode = resultNode.FirstChild("IamRoleArn");
    if(!iamRoleArnNode.IsNull())
    {
      m_iamRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleArnNode.GetText());
      m_iamRoleArnHasBeenSet = true;
    }
    XmlNode idcManagedApplicationArnNode = resultNode.FirstChild("IdcManagedApplicationArn");
    if(!idcManagedApplicationArnNode.IsNull())
    {
      m_idcManagedApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(idcManagedApplicationArnNode.GetText());
      m_idcManagedApplicationArnHasBeenSet = true;
    }
    XmlNode idcOnboardStatusNode = resultNode.FirstChild("IdcOnboardStatus");
    if(!idcOnboardStatusNode.IsNull())
    {
      m_idcOnboardStatus = Aws::Utils::Xml::DecodeEscapedXmlText(idcOnboardStatusNode.GetText());
      m_idcOnboardStatusHasBeenSet = true;
    }
    XmlNode authorizedTokenIssuerListNode = resultNode.FirstChild("AuthorizedTokenIssuerList");
    if(!authorizedTokenIssuerListNode.IsNull())
    {
      XmlNode authorizedTokenIssuerListMember = authorizedTokenIssuerListNode.FirstChild("member");
      m_authorizedTokenIssuerListHasBeenSet = !authorizedTokenIssuerListMember.IsNull();
      while(!authorizedTokenIssuerListMember.IsNull())
      {
        m_authorizedTokenIssuerList.push_back(authorizedTokenIssuerListMember);
        authorizedTokenIssuerListMember = authorizedTokenIssuerListMember.NextNode("member");
      }

      m_authorizedTokenIssuerListHasBeenSet = true;
    }
    XmlNode serviceIntegrationsNode = resultNode.FirstChild("ServiceIntegrations");
    if(!serviceIntegrationsNode.IsNull())
    {
      XmlNode serviceIntegrationsMember = serviceIntegrationsNode.FirstChild("member");
      m_serviceIntegrationsHasBeenSet = !serviceIntegrationsMember.IsNull();
      while(!serviceIntegrationsMember.IsNull())
      {
        m_serviceIntegrations.push_back(serviceIntegrationsMember);
        serviceIntegrationsMember = serviceIntegrationsMember.NextNode("member");
      }

      m_serviceIntegrationsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode ssoTagKeysNode = resultNode.FirstChild("SsoTagKeys");
    if(!ssoTagKeysNode.IsNull())
    {
      XmlNode ssoTagKeysMember = ssoTagKeysNode.FirstChild("TagKey");
      m_ssoTagKeysHasBeenSet = !ssoTagKeysMember.IsNull();
      while(!ssoTagKeysMember.IsNull())
      {
        m_ssoTagKeys.push_back(ssoTagKeysMember.GetText());
        ssoTagKeysMember = ssoTagKeysMember.NextNode("TagKey");
      }

      m_ssoTagKeysHasBeenSet = true;
    }
  }

  return *this;
}

void RedshiftIdcApplication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idcInstanceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdcInstanceArn=" << StringUtils::URLEncode(m_idcInstanceArn.c_str()) << "&";
  }

  if(m_redshiftIdcApplicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RedshiftIdcApplicationName=" << StringUtils::URLEncode(m_redshiftIdcApplicationName.c_str()) << "&";
  }

  if(m_redshiftIdcApplicationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RedshiftIdcApplicationArn=" << StringUtils::URLEncode(m_redshiftIdcApplicationArn.c_str()) << "&";
  }

  if(m_identityNamespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdentityNamespace=" << StringUtils::URLEncode(m_identityNamespace.c_str()) << "&";
  }

  if(m_idcDisplayNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }

  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }

  if(m_idcManagedApplicationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdcManagedApplicationArn=" << StringUtils::URLEncode(m_idcManagedApplicationArn.c_str()) << "&";
  }

  if(m_idcOnboardStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdcOnboardStatus=" << StringUtils::URLEncode(m_idcOnboardStatus.c_str()) << "&";
  }

  if(m_authorizedTokenIssuerListHasBeenSet)
  {
      unsigned authorizedTokenIssuerListIdx = 1;
      for(auto& item : m_authorizedTokenIssuerList)
      {
        Aws::StringStream authorizedTokenIssuerListSs;
        authorizedTokenIssuerListSs << location << index << locationValue << ".AuthorizedTokenIssuerList.member." << authorizedTokenIssuerListIdx++;
        item.OutputToStream(oStream, authorizedTokenIssuerListSs.str().c_str());
      }
  }

  if(m_serviceIntegrationsHasBeenSet)
  {
      unsigned serviceIntegrationsIdx = 1;
      for(auto& item : m_serviceIntegrations)
      {
        Aws::StringStream serviceIntegrationsSs;
        serviceIntegrationsSs << location << index << locationValue << ".ServiceIntegrations.member." << serviceIntegrationsIdx++;
        item.OutputToStream(oStream, serviceIntegrationsSs.str().c_str());
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags.Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_ssoTagKeysHasBeenSet)
  {
      unsigned ssoTagKeysIdx = 1;
      for(auto& item : m_ssoTagKeys)
      {
        oStream << location << index << locationValue << ".SsoTagKeys.TagKey." << ssoTagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void RedshiftIdcApplication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idcInstanceArnHasBeenSet)
  {
      oStream << location << ".IdcInstanceArn=" << StringUtils::URLEncode(m_idcInstanceArn.c_str()) << "&";
  }
  if(m_redshiftIdcApplicationNameHasBeenSet)
  {
      oStream << location << ".RedshiftIdcApplicationName=" << StringUtils::URLEncode(m_redshiftIdcApplicationName.c_str()) << "&";
  }
  if(m_redshiftIdcApplicationArnHasBeenSet)
  {
      oStream << location << ".RedshiftIdcApplicationArn=" << StringUtils::URLEncode(m_redshiftIdcApplicationArn.c_str()) << "&";
  }
  if(m_identityNamespaceHasBeenSet)
  {
      oStream << location << ".IdentityNamespace=" << StringUtils::URLEncode(m_identityNamespace.c_str()) << "&";
  }
  if(m_idcDisplayNameHasBeenSet)
  {
      oStream << location << ".IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }
  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }
  if(m_idcManagedApplicationArnHasBeenSet)
  {
      oStream << location << ".IdcManagedApplicationArn=" << StringUtils::URLEncode(m_idcManagedApplicationArn.c_str()) << "&";
  }
  if(m_idcOnboardStatusHasBeenSet)
  {
      oStream << location << ".IdcOnboardStatus=" << StringUtils::URLEncode(m_idcOnboardStatus.c_str()) << "&";
  }
  if(m_authorizedTokenIssuerListHasBeenSet)
  {
      unsigned authorizedTokenIssuerListIdx = 1;
      for(auto& item : m_authorizedTokenIssuerList)
      {
        Aws::StringStream authorizedTokenIssuerListSs;
        authorizedTokenIssuerListSs << location << ".AuthorizedTokenIssuerList.member." << authorizedTokenIssuerListIdx++;
        item.OutputToStream(oStream, authorizedTokenIssuerListSs.str().c_str());
      }
  }
  if(m_serviceIntegrationsHasBeenSet)
  {
      unsigned serviceIntegrationsIdx = 1;
      for(auto& item : m_serviceIntegrations)
      {
        Aws::StringStream serviceIntegrationsSs;
        serviceIntegrationsSs << location << ".ServiceIntegrations.member." << serviceIntegrationsIdx++;
        item.OutputToStream(oStream, serviceIntegrationsSs.str().c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".Tags.Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_ssoTagKeysHasBeenSet)
  {
      unsigned ssoTagKeysIdx = 1;
      for(auto& item : m_ssoTagKeys)
      {
        oStream << location << ".SsoTagKeys.TagKey." << ssoTagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
