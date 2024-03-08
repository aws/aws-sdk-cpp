/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/LakeFormationScopeUnion.h>
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

LakeFormationScopeUnion::LakeFormationScopeUnion() : 
    m_lakeFormationQueryHasBeenSet(false)
{
}

LakeFormationScopeUnion::LakeFormationScopeUnion(const XmlNode& xmlNode) : 
    m_lakeFormationQueryHasBeenSet(false)
{
  *this = xmlNode;
}

LakeFormationScopeUnion& LakeFormationScopeUnion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lakeFormationQueryNode = resultNode.FirstChild("LakeFormationQuery");
    if(!lakeFormationQueryNode.IsNull())
    {
      m_lakeFormationQuery = lakeFormationQueryNode;
      m_lakeFormationQueryHasBeenSet = true;
    }
  }

  return *this;
}

void LakeFormationScopeUnion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_lakeFormationQueryHasBeenSet)
  {
      Aws::StringStream lakeFormationQueryLocationAndMemberSs;
      lakeFormationQueryLocationAndMemberSs << location << index << locationValue << ".LakeFormationQuery";
      m_lakeFormationQuery.OutputToStream(oStream, lakeFormationQueryLocationAndMemberSs.str().c_str());
  }

}

void LakeFormationScopeUnion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_lakeFormationQueryHasBeenSet)
  {
      Aws::String lakeFormationQueryLocationAndMember(location);
      lakeFormationQueryLocationAndMember += ".LakeFormationQuery";
      m_lakeFormationQuery.OutputToStream(oStream, lakeFormationQueryLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
