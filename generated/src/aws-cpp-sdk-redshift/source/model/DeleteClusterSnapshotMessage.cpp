/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteClusterSnapshotMessage.h>
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

DeleteClusterSnapshotMessage::DeleteClusterSnapshotMessage() : 
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotClusterIdentifierHasBeenSet(false)
{
}

DeleteClusterSnapshotMessage::DeleteClusterSnapshotMessage(const XmlNode& xmlNode) : 
    m_snapshotIdentifierHasBeenSet(false),
    m_snapshotClusterIdentifierHasBeenSet(false)
{
  *this = xmlNode;
}

DeleteClusterSnapshotMessage& DeleteClusterSnapshotMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdentifierNode = resultNode.FirstChild("SnapshotIdentifier");
    if(!snapshotIdentifierNode.IsNull())
    {
      m_snapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdentifierNode.GetText());
      m_snapshotIdentifierHasBeenSet = true;
    }
    XmlNode snapshotClusterIdentifierNode = resultNode.FirstChild("SnapshotClusterIdentifier");
    if(!snapshotClusterIdentifierNode.IsNull())
    {
      m_snapshotClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotClusterIdentifierNode.GetText());
      m_snapshotClusterIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void DeleteClusterSnapshotMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_snapshotClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotClusterIdentifier=" << StringUtils::URLEncode(m_snapshotClusterIdentifier.c_str()) << "&";
  }

}

void DeleteClusterSnapshotMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }
  if(m_snapshotClusterIdentifierHasBeenSet)
  {
      oStream << location << ".SnapshotClusterIdentifier=" << StringUtils::URLEncode(m_snapshotClusterIdentifier.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
