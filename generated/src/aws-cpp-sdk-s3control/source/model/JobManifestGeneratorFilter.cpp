/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobManifestGeneratorFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

JobManifestGeneratorFilter::JobManifestGeneratorFilter() : 
    m_eligibleForReplication(false),
    m_eligibleForReplicationHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_objectReplicationStatusesHasBeenSet(false)
{
}

JobManifestGeneratorFilter::JobManifestGeneratorFilter(const XmlNode& xmlNode) : 
    m_eligibleForReplication(false),
    m_eligibleForReplicationHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_objectReplicationStatusesHasBeenSet(false)
{
  *this = xmlNode;
}

JobManifestGeneratorFilter& JobManifestGeneratorFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eligibleForReplicationNode = resultNode.FirstChild("EligibleForReplication");
    if(!eligibleForReplicationNode.IsNull())
    {
      m_eligibleForReplication = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(eligibleForReplicationNode.GetText()).c_str()).c_str());
      m_eligibleForReplicationHasBeenSet = true;
    }
    XmlNode createdAfterNode = resultNode.FirstChild("CreatedAfter");
    if(!createdAfterNode.IsNull())
    {
      m_createdAfter = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAfterNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAfterHasBeenSet = true;
    }
    XmlNode createdBeforeNode = resultNode.FirstChild("CreatedBefore");
    if(!createdBeforeNode.IsNull())
    {
      m_createdBefore = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdBeforeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdBeforeHasBeenSet = true;
    }
    XmlNode objectReplicationStatusesNode = resultNode.FirstChild("ObjectReplicationStatuses");
    if(!objectReplicationStatusesNode.IsNull())
    {
      XmlNode objectReplicationStatusesMember = objectReplicationStatusesNode.FirstChild("member");
      while(!objectReplicationStatusesMember.IsNull())
      {
        m_objectReplicationStatuses.push_back(ReplicationStatusMapper::GetReplicationStatusForName(StringUtils::Trim(objectReplicationStatusesMember.GetText().c_str())));
        objectReplicationStatusesMember = objectReplicationStatusesMember.NextNode("member");
      }

      m_objectReplicationStatusesHasBeenSet = true;
    }
  }

  return *this;
}

void JobManifestGeneratorFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_eligibleForReplicationHasBeenSet)
  {
   XmlNode eligibleForReplicationNode = parentNode.CreateChildElement("EligibleForReplication");
   ss << std::boolalpha << m_eligibleForReplication;
   eligibleForReplicationNode.SetText(ss.str());
   ss.str("");
  }

  if(m_createdAfterHasBeenSet)
  {
   XmlNode createdAfterNode = parentNode.CreateChildElement("CreatedAfter");
   createdAfterNode.SetText(m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdBeforeHasBeenSet)
  {
   XmlNode createdBeforeNode = parentNode.CreateChildElement("CreatedBefore");
   createdBeforeNode.SetText(m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_objectReplicationStatusesHasBeenSet)
  {
   XmlNode objectReplicationStatusesParentNode = parentNode.CreateChildElement("ObjectReplicationStatuses");
   for(const auto& item : m_objectReplicationStatuses)
   {
     XmlNode objectReplicationStatusesNode = objectReplicationStatusesParentNode.CreateChildElement("ReplicationStatus");
     objectReplicationStatusesNode.SetText(ReplicationStatusMapper::GetNameForReplicationStatus(item));
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
