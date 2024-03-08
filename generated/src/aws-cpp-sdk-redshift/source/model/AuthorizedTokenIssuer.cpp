/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthorizedTokenIssuer.h>
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

AuthorizedTokenIssuer::AuthorizedTokenIssuer() : 
    m_trustedTokenIssuerArnHasBeenSet(false),
    m_authorizedAudiencesListHasBeenSet(false)
{
}

AuthorizedTokenIssuer::AuthorizedTokenIssuer(const XmlNode& xmlNode) : 
    m_trustedTokenIssuerArnHasBeenSet(false),
    m_authorizedAudiencesListHasBeenSet(false)
{
  *this = xmlNode;
}

AuthorizedTokenIssuer& AuthorizedTokenIssuer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trustedTokenIssuerArnNode = resultNode.FirstChild("TrustedTokenIssuerArn");
    if(!trustedTokenIssuerArnNode.IsNull())
    {
      m_trustedTokenIssuerArn = Aws::Utils::Xml::DecodeEscapedXmlText(trustedTokenIssuerArnNode.GetText());
      m_trustedTokenIssuerArnHasBeenSet = true;
    }
    XmlNode authorizedAudiencesListNode = resultNode.FirstChild("AuthorizedAudiencesList");
    if(!authorizedAudiencesListNode.IsNull())
    {
      XmlNode authorizedAudiencesListMember = authorizedAudiencesListNode.FirstChild("member");
      while(!authorizedAudiencesListMember.IsNull())
      {
        m_authorizedAudiencesList.push_back(authorizedAudiencesListMember.GetText());
        authorizedAudiencesListMember = authorizedAudiencesListMember.NextNode("member");
      }

      m_authorizedAudiencesListHasBeenSet = true;
    }
  }

  return *this;
}

void AuthorizedTokenIssuer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trustedTokenIssuerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrustedTokenIssuerArn=" << StringUtils::URLEncode(m_trustedTokenIssuerArn.c_str()) << "&";
  }

  if(m_authorizedAudiencesListHasBeenSet)
  {
      unsigned authorizedAudiencesListIdx = 1;
      for(auto& item : m_authorizedAudiencesList)
      {
        oStream << location << index << locationValue << ".AuthorizedAudiencesList.member." << authorizedAudiencesListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void AuthorizedTokenIssuer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trustedTokenIssuerArnHasBeenSet)
  {
      oStream << location << ".TrustedTokenIssuerArn=" << StringUtils::URLEncode(m_trustedTokenIssuerArn.c_str()) << "&";
  }
  if(m_authorizedAudiencesListHasBeenSet)
  {
      unsigned authorizedAudiencesListIdx = 1;
      for(auto& item : m_authorizedAudiencesList)
      {
        oStream << location << ".AuthorizedAudiencesList.member." << authorizedAudiencesListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
