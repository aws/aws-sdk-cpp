/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/NamespaceIdentifierUnion.h>
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

NamespaceIdentifierUnion::NamespaceIdentifierUnion(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

NamespaceIdentifierUnion& NamespaceIdentifierUnion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serverlessIdentifierNode = resultNode.FirstChild("ServerlessIdentifier");
    if(!serverlessIdentifierNode.IsNull())
    {
      m_serverlessIdentifier = serverlessIdentifierNode;
      m_serverlessIdentifierHasBeenSet = true;
    }
    XmlNode provisionedIdentifierNode = resultNode.FirstChild("ProvisionedIdentifier");
    if(!provisionedIdentifierNode.IsNull())
    {
      m_provisionedIdentifier = provisionedIdentifierNode;
      m_provisionedIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void NamespaceIdentifierUnion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serverlessIdentifierHasBeenSet)
  {
      Aws::StringStream serverlessIdentifierLocationAndMemberSs;
      serverlessIdentifierLocationAndMemberSs << location << index << locationValue << ".ServerlessIdentifier";
      m_serverlessIdentifier.OutputToStream(oStream, serverlessIdentifierLocationAndMemberSs.str().c_str());
  }

  if(m_provisionedIdentifierHasBeenSet)
  {
      Aws::StringStream provisionedIdentifierLocationAndMemberSs;
      provisionedIdentifierLocationAndMemberSs << location << index << locationValue << ".ProvisionedIdentifier";
      m_provisionedIdentifier.OutputToStream(oStream, provisionedIdentifierLocationAndMemberSs.str().c_str());
  }

}

void NamespaceIdentifierUnion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serverlessIdentifierHasBeenSet)
  {
      Aws::String serverlessIdentifierLocationAndMember(location);
      serverlessIdentifierLocationAndMember += ".ServerlessIdentifier";
      m_serverlessIdentifier.OutputToStream(oStream, serverlessIdentifierLocationAndMember.c_str());
  }
  if(m_provisionedIdentifierHasBeenSet)
  {
      Aws::String provisionedIdentifierLocationAndMember(location);
      provisionedIdentifierLocationAndMember += ".ProvisionedIdentifier";
      m_provisionedIdentifier.OutputToStream(oStream, provisionedIdentifierLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
