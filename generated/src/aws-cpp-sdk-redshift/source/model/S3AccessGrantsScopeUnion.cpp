/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/S3AccessGrantsScopeUnion.h>
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

S3AccessGrantsScopeUnion::S3AccessGrantsScopeUnion(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

S3AccessGrantsScopeUnion& S3AccessGrantsScopeUnion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode readWriteAccessNode = resultNode.FirstChild("ReadWriteAccess");
    if(!readWriteAccessNode.IsNull())
    {
      m_readWriteAccess = readWriteAccessNode;
      m_readWriteAccessHasBeenSet = true;
    }
  }

  return *this;
}

void S3AccessGrantsScopeUnion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_readWriteAccessHasBeenSet)
  {
      Aws::StringStream readWriteAccessLocationAndMemberSs;
      readWriteAccessLocationAndMemberSs << location << index << locationValue << ".ReadWriteAccess";
      m_readWriteAccess.OutputToStream(oStream, readWriteAccessLocationAndMemberSs.str().c_str());
  }

}

void S3AccessGrantsScopeUnion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_readWriteAccessHasBeenSet)
  {
      Aws::String readWriteAccessLocationAndMember(location);
      readWriteAccessLocationAndMember += ".ReadWriteAccess";
      m_readWriteAccess.OutputToStream(oStream, readWriteAccessLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
