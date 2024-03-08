/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ServiceIntegrationsUnion.h>
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

ServiceIntegrationsUnion::ServiceIntegrationsUnion() : 
    m_lakeFormationHasBeenSet(false)
{
}

ServiceIntegrationsUnion::ServiceIntegrationsUnion(const XmlNode& xmlNode) : 
    m_lakeFormationHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceIntegrationsUnion& ServiceIntegrationsUnion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lakeFormationNode = resultNode.FirstChild("LakeFormation");
    if(!lakeFormationNode.IsNull())
    {
      XmlNode lakeFormationMember = lakeFormationNode.FirstChild("member");
      while(!lakeFormationMember.IsNull())
      {
        m_lakeFormation.push_back(lakeFormationMember);
        lakeFormationMember = lakeFormationMember.NextNode("member");
      }

      m_lakeFormationHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceIntegrationsUnion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_lakeFormationHasBeenSet)
  {
      unsigned lakeFormationIdx = 1;
      for(auto& item : m_lakeFormation)
      {
        Aws::StringStream lakeFormationSs;
        lakeFormationSs << location << index << locationValue << ".LakeFormation.member." << lakeFormationIdx++;
        item.OutputToStream(oStream, lakeFormationSs.str().c_str());
      }
  }

}

void ServiceIntegrationsUnion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_lakeFormationHasBeenSet)
  {
      unsigned lakeFormationIdx = 1;
      for(auto& item : m_lakeFormation)
      {
        Aws::StringStream lakeFormationSs;
        lakeFormationSs << location <<  ".LakeFormation.member." << lakeFormationIdx++;
        item.OutputToStream(oStream, lakeFormationSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
