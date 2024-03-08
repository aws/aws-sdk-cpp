/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/LakeFormationQuery.h>
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

LakeFormationQuery::LakeFormationQuery() : 
    m_authorization(ServiceAuthorization::NOT_SET),
    m_authorizationHasBeenSet(false)
{
}

LakeFormationQuery::LakeFormationQuery(const XmlNode& xmlNode) : 
    m_authorization(ServiceAuthorization::NOT_SET),
    m_authorizationHasBeenSet(false)
{
  *this = xmlNode;
}

LakeFormationQuery& LakeFormationQuery::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode authorizationNode = resultNode.FirstChild("Authorization");
    if(!authorizationNode.IsNull())
    {
      m_authorization = ServiceAuthorizationMapper::GetServiceAuthorizationForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authorizationNode.GetText()).c_str()).c_str());
      m_authorizationHasBeenSet = true;
    }
  }

  return *this;
}

void LakeFormationQuery::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_authorizationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Authorization=" << ServiceAuthorizationMapper::GetNameForServiceAuthorization(m_authorization) << "&";
  }

}

void LakeFormationQuery::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_authorizationHasBeenSet)
  {
      oStream << location << ".Authorization=" << ServiceAuthorizationMapper::GetNameForServiceAuthorization(m_authorization) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
